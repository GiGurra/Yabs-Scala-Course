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
  private val poller = new Poller(1)

  typ match {
    case ZmqSocket.Type.SERVER => socket.bind(endPoint)
    case ZmqSocket.Type.CLIENT => socket.connect(endPoint)
  }

  poller.register(socket, ZMQ.ZMQ_POLLIN)

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
    if (poller.poll(pollTimeMillis) != 0) {
      val out = new ArrayBuffer[ZmqMessage]
      while (poller.poll(0) != 0)
        out += ZmqUtil.recvParts(socket)
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