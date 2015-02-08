package se.yabs.aichallenge.util

import scala.collection.mutable.ArrayBuffer

import org.zeromq.ZContext
import org.zeromq.ZMQ.Poller

import se.yabs.aichallenge.util.ZmqUtil.ZmqMessage
import zmq.ZMQ

class ZmqSocket(val endPoint: String, val typ: ZmqSocket.SocketType) {
  def this(address: String, port: Int, typ: ZmqSocket.SocketType) = this(s"tcp://$address:$port", typ)

  private val context = new ZContext
  private val socket = context.createSocket(zmqSockType)

  typ match {
    case ZmqSocket.Type.SERVER => socket.bind(endPoint)
    case ZmqSocket.Type.CLIENT => socket.connect(endPoint)
  }

  def send(msg: ZmqMessage) {
    for (part <- msg) {
      if (part != msg.last) {
        socket.sendMore(part)
      } else {
        socket.send(part)
      }
    }
  }

  def getNewMessages(pollTimeMillis: Int): Seq[ZmqMessage] = {
    socket.setReceiveTimeOut(pollTimeMillis)
    val firstMsg = ZmqUtil.recvParts(socket)
    if (firstMsg.nonEmpty) {
      // TODO: Implement better flush
      val out = new ArrayBuffer[ZmqMessage]
      out += firstMsg
      out
    } else {
      Nil
    }
  }

  def zmqSockType = {
    typ match {
      case ZmqSocket.Type.SERVER => ZMQ.ZMQ_ROUTER
      case ZmqSocket.Type.CLIENT => ZMQ.ZMQ_DEALER
    }
  }

  def close() {
    context.close()
  }

}

object ZmqSocket {
  abstract class SocketType
  object Type {
    case object CLIENT extends SocketType
    case object SERVER extends SocketType
  }
}