package se.yabs.aichallenge.client

import se.yabs.aichallenge.Checkin
import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.Serializer
import se.yabs.aichallenge.util.SimpleThread
import se.yabs.aichallenge.util.ZmqSocket

class GameClient(val name: String, val zmqAddr: String) extends SimpleThread {
  def this(name: String, addr: String, port: Int) = this(name, s"tcp://$addr:$port")

  private val socket = new ZmqSocket(zmqAddr, ZmqSocket.Type.CLIENT)

  def getNewMessages(pollTimeMillis: Int = 100): Seq[Message] = {
    socket.getNewMessages(pollTimeMillis) map (parts => Serializer.read(parts.last))
  }

  def playGame(gameSelection: GameSelection) {
    send(new Checkin(name, gameSelection));
  }

  def close() {
    socket.close()
  }

  private def send(msg: Message) {
    socket.send(List(Serializer.write(msg)))
  }

}