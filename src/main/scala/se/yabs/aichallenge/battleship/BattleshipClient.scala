package se.yabs.aichallenge.battleship

import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.client.GameClient
import se.yabs.aichallenge.host.GameHost

class BattleshipClient(name: String, zmqAddr: String) {
  def this(name: String, addr: String, port: Int) = this(name, s"tcp://$addr:$port")
  def this(name: String, host: GameHost) = this(name, "127.0.0.1", host.port)
  
  private val gameClient = new GameClient(name, zmqAddr)

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