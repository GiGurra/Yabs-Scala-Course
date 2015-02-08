package se.yabs.aichallenge.host

import scala.collection.mutable.ArrayBuffer
import scala.collection.mutable.HashMap
import scala.util.Failure
import scala.util.Success
import scala.util.Try

import se.yabs.aichallenge.Checkin
import se.yabs.aichallenge.ErrorMessage
import se.yabs.aichallenge.Game
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.Serializer
import se.yabs.aichallenge.WelcomeMessage
import se.yabs.aichallenge.util.SimpleThread
import se.yabs.aichallenge.util.ZmqSocket

class GameHost(val bindAddr: String = GameHost.DEFAULT_BIND_ADDR) extends SimpleThread {

  private val clients = new HashMap[ClientId, ClientState]
  private val ongoingGames = new ArrayBuffer[Game]

  // Lazy to be initialized by internal thread
  private lazy val socket = new ZmqSocket(bindAddr, ZmqSocket.Type.SERVER)

  override def step() {
    
    println("Server step")

    for (zmqMsgParts <- socket.getNewMessages(100)) {
      println("Server received msg")
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

  private def stepGames() {
    ongoingGames.foreach(_.step())
  }

  private def handleMsg(clientId: ClientId, msg: Message) {

    if (clients.contains(clientId)) {
      msg match {
        case msg: Checkin =>
          println(msg.getName)
          println(s"Client '${msg.getName}' checked in ($clientId)")
          clients.put(clientId, new ClientState(clientId, msg.getName))
        case _ =>
          throw new RuntimeException("Unsupported message type ")
      }
    } else {
      msg match {
        case msg: Checkin =>
          println(s"Client '$msg.getName' checked in (zmqId: ${})")
          sendTo(clientId, new WelcomeMessage("Welcome to the yabs ai game server"))
          clients.put(clientId, new ClientState(clientId, msg.getName))
        case _ =>
          throw new RuntimeException("Unsupported message type ")
      }
    }

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