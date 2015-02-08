package se.yabs.aichallenge.util

import scala.collection.mutable.ArrayBuffer

import org.zeromq.ZMQ.Socket

object ZmqUtil {

  def recvAll(socket: Socket): Seq[Array[Byte]] = {
    val pieces = new ArrayBuffer[Array[Byte]]
    pieces += socket.recv()
    while (socket.hasReceiveMore())
      pieces += socket.recv()
    pieces
  }

  def sendAll(socket: Socket, pieces: Seq[Array[Byte]]) {
    for (piece <- pieces) {
      if (piece != pieces.last)
        socket.sendMore(piece)
      else
        socket.send(piece)
    }
  }
}