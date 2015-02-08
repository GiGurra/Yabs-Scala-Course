package se.yabs.scalacourse

import org.junit.Test
import se.yabs.aichallenge.host.GameHost
import se.yabs.aichallenge.client.GameClient
import se.yabs.aichallenge.Checkin
import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.WelcomeMessage

class test_GameHost_func {

  @Test
  def init() {
    val port = TestPorts.getAndIncrement
    val host = new GameHost(port).join()
  }

  @Test
  def joinThread() {

    val port = TestPorts.getAndIncrement
    val host = new GameHost(port).start()

    assert(host.isRunning)

    host.signalStop().join()

    assert(!host.isRunning)

  }

  @Test
  def getsWelcomeMessage() {

    val port = TestPorts.getAndIncrement
    val host = new GameHost(port).start()

    val client = host.connectTo()

    val msgs = client.getNewMessages(2000)
    assert(msgs.nonEmpty)
    assert(msgs.head.isInstanceOf[WelcomeMessage])

    client.close()

    host.signalStop()
    host.join()

    assert(!host.isRunning)

  }

  @Test
  def selectgame() {

    val port = TestPorts.getAndIncrement
    val host = new GameHost(port).start()

    val client = host.connectTo()

    val welcomeMsg = client.getNewMessages(2000)

    client.playGame(GameSelection.BATTLESHIP)

    client.close()

    host.signalStop()
    host.join()

    assert(!host.isRunning)

  }

  @Test
  def twoPlayersJoin() {

    val port = TestPorts.getAndIncrement
    val host = new GameHost(port).start()
    
    val a = host.connectTo("a")
    val b = host.connectTo("b")

    val welcomeMsgA = a.getNewMessages(2000)
    val welcomeMsgB = b.getNewMessages(2000)

    a.playGame(GameSelection.BATTLESHIP)
    b.playGame(GameSelection.BATTLESHIP)

    a.close()
    b.close()
    
    Thread.sleep(1000)

    host.signalStop()
    host.join()

    assert(!host.isRunning)

  }

}