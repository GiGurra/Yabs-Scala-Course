package se.yabs.scalacourse

import scala.async.Async.async
import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent.Future

import org.junit.Test

import se.yabs.aichallenge.battleship.BattleshipClient
import se.yabs.aichallenge.host.GameHost

class test_GameHost_func {

  @Test
  def dumbAiGame() {

    val port = TestPorts.getAndIncrement
    val host = new GameHost(port).start()

    val clientA = new BattleshipClient("a", "testPw", host, new DumbAi)
    val clientB = new BattleshipClient("b", "testPw", host, new DumbAi)

    val futA = Future { clientA.playGame() }
    val futB = Future { clientB.playGame() }

    TestUtil.await5sec(futA, futB)

    clientA.close()
    clientB.close()
    host.signalStop()
    host.join()

    assert(!host.isRunning)

  }

  @Test
  def dumbAiGames() {

    val host = new GameHost(TestPorts.getAndIncrement()).start()
    val clients = ('a' to 'f').map(new BattleshipClient(_, "pw", host, new DumbAi))

    for (i <- 0 until 100)
      TestUtil.await5sec(clients.map(c => async { c.playGame() }))

    clients.foreach(_.close())
    host.signalStop().join()

    assert(!host.isRunning)

  }

}
