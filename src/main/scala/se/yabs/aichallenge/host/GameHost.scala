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
import se.yabs.aichallenge.Game
import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.Serializer
import se.yabs.aichallenge.WelcomeMessage
import se.yabs.aichallenge.client.GameClient
import se.yabs.aichallenge.util.SimpleThread
import se.yabs.aichallenge.util.ZmqSocket
import se.yabs.aichallenge.util.ZmqUtil
import se.yabs.aichallenge.PlayGame
import se.yabs.aichallenge.Battleship

class GameHost(val port: Int = GameHost.DEFAULT_PORT, ifc: String = "*") extends SimpleThread[GameHost] {

  val bindAddr = ZmqUtil.mkAddr(ifc, port)
  private val clients = new HashMap[ClientId, ClientState]
  private val ongoingGames = new ArrayBuffer[Game]

  // Lazy to be initialized by internal thread
  private lazy val socket = new ZmqSocket(bindAddr, ZmqSocket.Type.SERVER)

  override def step() {
    
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
  }

  override def finish() {
    socket.close()
  }

  def connectTo(name: String = "TestClient"): GameClient = {
    new GameClient(name, "127.0.0.1", port)
  }

  private def stepGames() {
    ongoingGames.foreach(_.step())
  }

  private def handleMsg(clientId: ClientId, msg: Message) {

    clients.get(clientId) match {
      case Some(client) =>
        msg match {
          case msg: PlayGame => handlePlayGame(client, msg.getGame)
          case _             => throw new RuntimeException("Unsupported message type ")
        }
      case None =>
        msg match {
          case msg: Checkin => handleNewClient(clientId, msg)
          case _ =>
            throw new RuntimeException("Unsupported message type ")
        }
    }

  }

  private def handlePlayGame(client: ClientState, game: GameSelection) {

    println(s"Client '${client.name}' wants to play '$game'")

    if (isPlaying(client))
      throw new RuntimeException("Your're already playing a game!")

    findCompatibleGame(client, game) match {
      case Some(game: Game) => game.join(client) // GameChallengeFound inside here
      case None             => startNewGame(client, game)
    }

  }
  
  private def findCompatibleGame(client: ClientState, selection: GameSelection): Option[Game] = {
    ongoingGames.find(_.canJoin(client))
  }
  
  private def startNewGame(client: ClientState, selection: GameSelection) {
    selection match {
      case GameSelection.BATTLESHIP =>
        val game = new Battleship
        game.join(client)
        ongoingGames += game
      case _ =>
        throw new RuntimeException(s"Unsupported game: $selection")
    }
  }

  private def isPlaying(client: ClientState): Boolean = {
    ongoingGames.exists(_.isPlayer(client))
  }

  private def handleNewClient(clientId: ClientId, msg: Checkin) {
    println(s"Client '${msg.getName}' checked in ($clientId)")
    sendTo(clientId, new WelcomeMessage("Welcome to the yabs ai game server, please select a game", gamesAvail))
    clients.put(clientId, new ClientState(clientId, msg.getName, sendTo(clientId, _)))
  }

  private def gamesAvail = {
    new ArrayList(Seq(GameSelection.BATTLESHIP))
  }

  private def handleFinishedGames() {
    while (ongoingGames.exists(_.isFinished)) {
      ongoingGames -= ongoingGames.find(_.isFinished).get
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
      socket.send(Seq(id.zmqId.toArray, Array[Byte](), zmqMsg))
    } match {
      case Success(_) =>
      case Failure(e) =>
        e.printStackTrace()
    }
  }

}

object GameHost {
  val DEFAULT_PORT = 12345
  val DEFAULT_BIND_ADDR = s"tcp://*:$DEFAULT_PORT"
}