package se.yabs.aichallenge.host

import java.util.ArrayList
import scala.collection.JavaConversions.seqAsJavaList
import scala.collection.mutable.ArrayBuffer
import scala.collection.mutable.HashMap
import scala.util.Failure
import scala.util.Success
import scala.util.Try
import se.yabs.aichallenge.Checkin
import se.yabs.aichallenge.ErrorMessage
import se.yabs.aichallenge.GameMessage
import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.PlayGame
import se.yabs.aichallenge.UserDb
import se.yabs.aichallenge.WelcomeMessage
import se.yabs.aichallenge.battleship.BattleshipGame
import se.yabs.aichallenge.client.serialization.Serializer
import se.yabs.aichallenge.util.SimpleThread
import se.yabs.aichallenge.util.ZmqSocket
import se.yabs.aichallenge.util.ZmqUtil
import se.yabs.aichallenge.client.serialization.DbSaver
import scala.reflect.io.File

class GameHost(val port: Int = GameHost.DEFAULT_PORT, ifc: String = "*") extends SimpleThread[GameHost] {
  val bindAddr = ZmqUtil.mkAddr(ifc, port)

  private val userDb = new UserDb
  private val clients = new HashMap[ClientId, LoggedInUser]
  private val ongoingGames = new ArrayBuffer[Game]  
  private lazy val socket = new ZmqSocket(bindAddr, ZmqSocket.Type.SERVER) // Lazy to be initialized by internal thread
  
  private val saveFile = "game_results.json"
  private val saveIntervalSeconds = 1.0
  private var tLastSave = timeSeconds

  protected override def step() {

    for (zmqMsgParts <- socket.getNewMessages(100)) {
      Try(handleMsg(zmqMsgParts)) match {
        case Success(_) =>
        case Failure(e) =>
          sendTo(
            getClientId(zmqMsgParts),
            new ErrorMessage(s"Failed to handle your message, error: ${e.getMessage}. Check server stdErr for stack trace"))
          e.printStackTrace()
      }
    }

    stepGames()
    handleFinishedGames()
    handleAutoSave()
  }

  protected override def finish() {
    socket.close()
    save()
  }
  
  def results() =  {
    if (isRunning)
      throw new RuntimeException("Cannot get results while the server is still running")
    userDb
  }
  
  private def handleAutoSave() {
    if (timeSeconds > tLastSave + saveIntervalSeconds) {
      save()
    }
  }
  
  private def save() {
      tLastSave = timeSeconds      
      File(saveFile).writeAll(DbSaver.write(userDb))
  }
    

  private def stepGames() {
    ongoingGames.foreach(_.step())
  }

  private def handleMsg(clientId: ClientId, msg: Message) {
    clients.get(clientId) match {
      case Some(user) =>
        msg match {
          case msg: PlayGame    => handlePlayGame(user, msg.getGame)
          case msg: GameMessage => handleGameMsg(user, msg)
          case _                => throw new RuntimeException(s"Bad message type: ${msg.getClass}")
        }
      case None =>
        msg match {
          case msg: Checkin => handleNewClient(clientId, msg)
          case _            => throw new RuntimeException(s"Bad message type: ${msg.getClass}")
        }
    }
  }

  private def handleGameMsg(user: LoggedInUser, msg: GameMessage) {
    findGameOf(user) match {
      case Some(game) => game.handleMessage(user, msg)
      case None       => throw new RuntimeException(s"$user sent a GameMessage, but isn't playing any game")
    }
  }

  private def findGameOf(user: LoggedInUser): Option[Game] = {
    ongoingGames.find(_.isPlayer(user))
  }

  private def handlePlayGame(user: LoggedInUser, game: GameSelection) {

    println(s"$user wants to play '$game'")

    if (isPlaying(user))
      throw new RuntimeException("Your're already playing a game!")

    findCompatibleGame(user, game) match {
      case Some(game: Game) => game.join(user) // GameChallengeFound inside here
      case None             => startNewGame(user, game)
    }

  }

  private def findCompatibleGame(user: LoggedInUser, selection: GameSelection): Option[Game] = {
    ongoingGames.find(_.canJoin(user))
  }

  private def startNewGame(user: LoggedInUser, selection: GameSelection) {
    selection match {
      case GameSelection.BATTLESHIP =>
        val game = new BattleshipGame
        game.join(user)
        ongoingGames += game
      case _ =>
        throw new RuntimeException(s"Unsupported game: $selection")
    }
  }

  private def isPlaying(user: LoggedInUser): Boolean = {
    ongoingGames.exists(_.isPlayer(user))
  }

  private def tryLogin(msg: Checkin): Boolean = {
    userDb.login(msg.getName, msg.getPassword)
  }

  private def handleNewClient(clientId: ClientId, msg: Checkin) {
    if (tryLogin(msg)) {
      val user = new LoggedInUser(userDb.getUsers.get(msg.getName), sendTo(clientId, _))
      sendTo(clientId, new WelcomeMessage("Welcome to the yabs ai game server, please select a game", gamesAvail))
      println(s"Client '$user' logged in")
      clients.put(clientId, user)
    } else {
      throw new RuntimeException("Login failed")
    }
  }

  private def gamesAvail = {
    new ArrayList(Seq(GameSelection.BATTLESHIP))
  }

  private def handleFinishedGames() {
    if (ongoingGames.exists(_.isGameOver)) {
      val (done, notDone) = ongoingGames.partition(_.isGameOver)
      ongoingGames.clear()
      ongoingGames ++= notDone

      for (g <- done) {
        val result = g.result()
        userDb.handleGamePlayed(result);
      }
    }
  }

  private def handleMsg(zmqMsgParts: Seq[Array[Byte]]) {
    val (clientId, msg) = parse(zmqMsgParts)
    handleMsg(clientId, msg)
  }

  private def parse(zmqMsgParts: Seq[Array[Byte]]): (ClientId, Message) = {
    val id = getClientId(zmqMsgParts)
    val msg = Serializer.read(zmqMsgParts.last)
    (id, msg)
  }

  private def getClientId(zmqMsgParts: Seq[Array[Byte]]): ClientId = {
    ClientId(zmqMsgParts.head)
  }

  private def sendTo(id: ClientId, msg: Message) {
    Try {
      val zmqMsg = Serializer.write(msg)
      socket.send(Seq(id.zmqId.toArray, Array.emptyByteArray, zmqMsg))
    } match {
      case Success(_) =>
      case Failure(e) =>
        e.printStackTrace()
    }
  }
  
  private def timeSeconds: Double = {
    System.nanoTime/1e9
  }

}

object GameHost {
  val DEFAULT_PORT = 12345
}