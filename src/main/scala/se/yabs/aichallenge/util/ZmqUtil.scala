package se.yabs.aichallenge.util

import scala.collection.mutable.ArrayBuffer

import org.zeromq.ZMQ.Socket

object ZmqUtil {

  type ZmqMessage = Seq[Array[Byte]]

  def recvParts(socket: Socket): ZmqMessage = {
    val firstPart = socket.recv()
    if (firstPart != null) {
      val pieces = new ArrayBuffer[Array[Byte]]
      pieces += firstPart
      while (socket.hasReceiveMore())
        pieces += socket.recv()
      pieces
    } else {
      Nil
    }
  }

  def sendParts(socket: Socket, pieces: ZmqMessage) {
    for (piece <- pieces) {
      if (piece != pieces.last)
        socket.sendMore(piece)
      else
        socket.send(piece)
    }
  }

  def mkAddr(port: Int): String = {
    s"tcp://*:$port"
  }

  def mkAddr(addr: String, port: Int): String = {
    s"tcp://$addr:$port"
  }
}