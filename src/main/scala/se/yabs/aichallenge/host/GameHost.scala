package se.yabs.aichallenge.host

import scala.collection.mutable.ArrayBuffer
import scala.collection.mutable.HashMap
import scala.util.Failure
import scala.util.Success
import scala.util.Try
import org.zeromq.ZContext
import org.zeromq.ZMQ.Poller
import se.yabs.aichallenge.Checkin
import se.yabs.aichallenge.ErrorMessage
import se.yabs.aichallenge.Game
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.Serializer
import se.yabs.aichallenge.util.ZmqUtil
import zmq.ZMQ
import se.yabs.aichallenge.WelcomeMessage

class GameHost(val bindAddr: String = GameHost.DEFAULT_BIND_ADDR) extends Thread {

  private val clients = new HashMap[ClientId, ClientState]
  private val ongoingGames = new ArrayBuffer[Game]

  @volatile private var stopSignal = false

  // Lazy to be initialized by internal thread
  private lazy val zmqContext = new ZContext
  private lazy val socket = zmqContext.createSocket(ZMQ.ZMQ_ROUTER)

  override def run() {

    socket.bind(bindAddr)

    val poller = new Poller(2)
    poller.register(socket, Poller.POLLIN)

    while (!stopSignal) {

      if (poller.pollin(100)) {
        val zmqMsgParts = ZmqUtil.recvAll(socket)
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

    zmqContext.close()

  }

  def signalStop() {
    stopSignal = true
  }

  private def stepGames() {
    ongoingGames.foreach(_.step())
  }

  private def handleMsg(clientId: ClientId, msg: Message) {

    if (clients.contains(clientId)) {
      msg match {
        case msg: Checkin =>
          println(s"Client '$msg.getName' checked in (zmqId: ${})")
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
    parse(zmqMsgParts)
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
      socket.sendMore(id.zmqId.toArray)
      socket.sendMore(Array[Byte]())
      socket.send(Serializer.write(msg))
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