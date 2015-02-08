package se.yabs.scalacourse

import org.junit.Test

import se.yabs.aichallenge.battleship.BattleshipClient
import se.yabs.aichallenge.host.GameHost

class test_GameHost_func {
  /*
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

    val client = new GameClient("TestName", "testPw", host)

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
    val client = new GameClient("TestName", "testPw", host)

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

    val clientA = new GameClient("a", "testPw", host)
    val clientB = new GameClient("b", "testPw", host)
    val welcomeMsgA = clientA.getNewMessages(2000)
    val welcomeMsgB = clientB.getNewMessages(2000)
    assert(welcomeMsgA.nonEmpty)
    assert(welcomeMsgB.nonEmpty)

    clientA.playGame(GameSelection.BATTLESHIP)
    clientB.playGame(GameSelection.BATTLESHIP)
    val challangeA = clientA.getNewMessages(2000)
    val challangeB = clientB.getNewMessages(2000)
    assert(challangeA.nonEmpty)
    assert(challangeB.nonEmpty)
    
    clientA.close()
    clientB.close()
    host.signalStop()
    host.join()

    assert(!host.isRunning)

  }*/

  @Test
  def dumbAiGame() {

    val port = TestPorts.getAndIncrement
    val host = new GameHost(port).start()

    val clientA = new BattleshipClient("a", "testPw", host)
    val clientB = new BattleshipClient("b", "testPw", host)

    BattleshipClient.playGame(clientA, new DumbAi, clientB, new DumbAi)

    clientA.close()
    clientB.close()
    host.signalStop()
    host.join()

    assert(!host.isRunning)

  }

  @Test
  def dumbAiGames() {

    val port = TestPorts.getAndIncrement
    val host = new GameHost(port).start()

    val clientA = new BattleshipClient("a", "testPw", host)
    val clientB = new BattleshipClient("b", "testPw", host)

    for (i <- 0 until 100)
      BattleshipClient.playGame(clientA, new DumbAi, clientB, new DumbAi)

    clientA.close()
    clientB.close()
    host.signalStop()
    host.join()

    assert(!host.isRunning)

  }

}
