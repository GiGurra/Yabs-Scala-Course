package se.yabs.scalacourse

import org.junit.Test
import se.yabs.aichallenge.host.GameHost
import se.yabs.aichallenge.client.GameClient
import se.yabs.aichallenge.Checkin
import se.yabs.aichallenge.GameSelection

class test_GameHost_func {

  @Test
  def init() {
    val host = new GameHost
    host.join()
  }

  @Test
  def joinThread() {
    val host = new GameHost
    host.start()

    assert(host.isRunning)

    host.signalStop()
    host.join()

    assert(!host.isRunning)
  }

  @Test
  def connectToServer() {
    val host = new GameHost
    host.start()

    val client = new GameClient("Gurra", "127.0.0.1", GameHost.DEFAULT_PORT)
    client.playGame(GameSelection.BATTLESHIP)
    
    val replies = client.getNewMessages(1000)
    assert(replies.nonEmpty)

    client.close()
    
    host.signalStop()
    host.join()

    assert(!host.isRunning)
  }

}