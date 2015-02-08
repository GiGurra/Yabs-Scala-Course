package se.yabs.aichallenge.client

import se.yabs.aichallenge.Checkin
import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.Serializer
import se.yabs.aichallenge.util.SimpleThread
import se.yabs.aichallenge.util.ZmqSocket
import se.yabs.aichallenge.PlayGame
import se.yabs.aichallenge.host.GameHost

class GameClient(val name: String, val password: String, val zmqAddr: String) {
  def this(name: String, password: String, addr: String, port: Int) = this(name, password, s"tcp://$addr:$port")
  def this(name: String, password: String, host: GameHost) = this(name, password, "127.0.0.1", host.port)

  private val socket = new ZmqSocket(zmqAddr, ZmqSocket.Type.CLIENT)
  checkin()

  def getNewMessages(pollTimeMillis: Int): Seq[Message] = {
    socket.getNewMessages(pollTimeMillis) map (parts => Serializer.read(parts.last))
  }

  def checkin() {
    send(new Checkin(name, password));
  }

  def playGame(gameSelection: GameSelection) {
    send(new PlayGame(gameSelection))
  }

  def close() {
    socket.close()
  }

  private def send(msg: Message) {
    socket.send(List(Serializer.write(msg)))
  }

}