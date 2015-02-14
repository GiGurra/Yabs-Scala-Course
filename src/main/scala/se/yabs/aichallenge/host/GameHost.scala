package se.yabs.aichallenge.host

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
import se.yabs.aichallenge.client.serialization.DbSaver
import se.yabs.aichallenge.client.serialization.Serializer
import se.yabs.aichallenge.util.MGenJavaConversions.seq2ArrayList
import se.yabs.aichallenge.util.RepeatingTimer
import se.yabs.aichallenge.util.SimpleThread
import se.yabs.aichallenge.util.ZmqSocket
import se.yabs.aichallenge.util.ZmqUtil

class GameHost(
  val saveFile: String = "game_results.json",
  val port: Int = GameHost.DEFAULT_PORT,
  val ifc: String = "*") extends SimpleThread[GameHost] {
  val bindAddr = ZmqUtil.mkAddr(ifc, port)

  private val userDb = DbSaver.readFile(saveFile).getOrElse(new UserDb)
  private val clients = new HashMap[ConnectionId, LoggedInUser]
  private val ongoingGames = new ArrayBuffer[Game]
  private lazy val socket = new ZmqSocket(bindAddr, ZmqSocket.Type.SERVER) // Lazy to be initialized by internal thread

  private val autosaveTimer = new RepeatingTimer(2.0)

  protected override def step() {
    handleNewMessages()
    stepGames()
    handleFinishedGames()
    handleAutoSave()
  }

  protected override def finish() {
    socket.close()
    save()
  }

  private def handleNewMessages() {
    for (zmqMsgParts <- socket.getNewMessages(100)) {
      Try(handleMsg(zmqMsgParts)) match {
        case Success(_) =>
        case Failure(e) =>
          sendTo(
            getConnectionId(zmqMsgParts),
            new ErrorMessage(s"Failed to handle your message, error: ${e.getMessage}. Check server stdErr for stack trace"))
          e.printStackTrace()
      }
    }
  }

  private def handleAutoSave() {
    autosaveTimer.step(save())
  }

  private def save() {
    DbSaver.writeFile(userDb, saveFile)
  }

  private def stepGames() {
    ongoingGames.foreach(_.step())
  }

  private def handleMsg(connId: ConnectionId, msg: Message) {
    clients.get(connId) match {
      case Some(user) =>
        msg match {
          case msg: PlayGame    => handlePlayGame(user, msg.getGame)
          case msg: GameMessage => handleGameMsg(user, msg)
          case _                => throw new RuntimeException(s"Bad message type: ${msg.getClass}")
        }
      case None =>
        msg match {
          case msg: Checkin => handleNewClient(connId, msg)
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

  private def findConnectionId(userName: String): Option[ConnectionId] = {
    clients.find(_._2.dbUser.getName == userName).map(_._1)
  }

  private def kickGhost(userName: String) {
    for (
      connId <- findConnectionId(userName);
      ghost <- clients.remove(connId);
      game <- ongoingGames.find(_.isPlayer(ghost))
    ) {
      println(s"Removing ghost: ${ghost}")
      ongoingGames -= game
      for (result <- game.leftGame(ghost)) {
        userDb.handleGamePlayed(result)
      }
    }
  }

  private def handleNewClient(connId: ConnectionId, msg: Checkin) {
    if (userDb.login(msg)) {

      kickGhost(msg.getName)

      val user = new LoggedInUser(userDb.getUsers.get(msg.getName), sendTo(connId, _))
      sendTo(connId, new WelcomeMessage("Welcome to the yabs ai game server, please select a game", Seq(GameSelection.BATTLESHIP)))
      clients.put(connId, user)

    } else {
      throw new RuntimeException("Login failed")
    }
  }

  private def handleFinishedGames() {
    if (ongoingGames.exists(_.isGameOver)) {
      val (done, notDone) = ongoingGames.partition(_.isGameOver)
      ongoingGames.clear()
      ongoingGames ++= notDone

      for (g <- done) {
        userDb.handleGamePlayed(g.result);
      }
    }
  }

  private def handleMsg(zmqMsgParts: Seq[Array[Byte]]) {
    val (connId, msg) = parse(zmqMsgParts)
    handleMsg(connId, msg)
  }

  private def parse(zmqMsgParts: Seq[Array[Byte]]): (ConnectionId, Message) = {
    val id = getConnectionId(zmqMsgParts)
    val msg = Serializer.read(zmqMsgParts.last)
    (id, msg)
  }

  private def getConnectionId(zmqMsgParts: Seq[Array[Byte]]): ConnectionId = {
    ConnectionId(zmqMsgParts.head)
  }

  private def sendTo(id: ConnectionId, msg: Message) {
    Try(socket.route1(id.route, Serializer.write(msg))) match {
      case Success(_) =>
      case Failure(e) => e.printStackTrace()
    }
  }

}

object GameHost {
  val DEFAULT_PORT = 12345

  def main(args: Array[String]) {

    val host = new GameHost()

    Runtime.getRuntime().addShutdownHook(new Thread() {
      override def run() {
        println("Shutting down server..")
        host.signalStop()
        host.join()
        println("Server closed normally")
      }
    });

    host.start()
    host.join()

  }

}