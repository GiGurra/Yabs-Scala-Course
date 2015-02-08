package se.yabs.aichallenge.battleship

import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.client.GameClient
import se.yabs.aichallenge.host.GameHost

class BattleshipClient(name: String, pw: String, zmqAddr: String) {
  def this(name: String, pw: String, addr: String, port: Int) = this(name, pw, s"tcp://$addr:$port")
  def this(name: String, pw: String, host: GameHost) = this(name, pw, "127.0.0.1", host.port)
  
  private val gameClient = new GameClient(name, pw, zmqAddr)

  ///////////////////////////////////////////////////////////////////
  /////   API 

  def getNewMessages(pollTimeMillis: Int): Seq[Message] = {
    gameClient.getNewMessages(pollTimeMillis)
  }

  def checkin() {
    gameClient.checkin()
  }

  def playGame() {
    gameClient.playGame(GameSelection.BATTLESHIP)
  }

  def close() {
    gameClient.close()
  }

}