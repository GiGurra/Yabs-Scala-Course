package se.yabs.scalacourse

import scala.async.Async.async
import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent.Future
import org.junit.Test
import se.yabs.aichallenge.battleship.BattleshipClient
import se.yabs.aichallenge.host.GameHost
import java.util.UUID

class test_GameHost_func {

  val userNames = Seq(
    "unittest_userA",
    "unittest_userB",
    "unittest_userC",
    "unittest_userD",
    "unittest_userE",
    "unittest_userF")

  @Test
  def dumbAiGame() {

    val port = TestPorts.getAndIncrement
    val host = new GameHost(TestSaveFile.random(), port).start()

    val clientA = new BattleshipClient(userNames(0), "testPw", host, new DumbAi)
    val clientB = new BattleshipClient(userNames(1), "testPw", host, new DumbAi)

    /*    val clientA = new BattleshipClient("a", "testPw", "jenkins.culvertsoft.se", 12345, new DumbAi)
    val clientB = new BattleshipClient("b", "testPw", "jenkins.culvertsoft.se", 12345, new DumbAi)
*/
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

    val host = new GameHost(TestSaveFile.random(), TestPorts.getAndIncrement()).start()
    val clients = userNames.map(new BattleshipClient(_, "testPw", host, new DumbAi))

    // val clients = ('a' to 'f').map(new BattleshipClient(_, "testPw", "jenkins.culvertsoft.se", 12345, new DumbAi))

    for (i <- 0 until 5)
      TestUtil.await5sec(clients.map(c => async { c.playGame() }))

    clients.foreach(_.close())

    host.signalStop().join()

    assert(!host.isRunning)

  }

}
