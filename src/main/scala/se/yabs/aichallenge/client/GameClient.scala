package se.yabs.aichallenge.client

import se.yabs.aichallenge.Checkin
import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.PlayGame
import se.yabs.aichallenge.Serializer
import se.yabs.aichallenge.host.GameHost
import se.yabs.aichallenge.util.ZmqSocket

class GameClient(val name: String, val password: String, val zmqAddr: String) {
  def this(name: String, password: String, addr: String, port: Int) = this(name, password, s"tcp://$addr:$port")
  def this(name: String, password: String, host: GameHost) = this(name, password, "127.0.0.1", host.port)

  private val socket = new ZmqSocket(zmqAddr, ZmqSocket.Type.CLIENT)

  def getNewMessages(pollTimeMillis: Int): Seq[Message] = {
    val newZmqMsgs = socket.getNewMessages(pollTimeMillis)
    if (newZmqMsgs.nonEmpty) {
      newZmqMsgs map (parts => Serializer.read(parts.last))
    } else {
      Nil
    }

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

  def send(msg: Message) {
    socket.send(List(Serializer.write(msg)))
  }

}