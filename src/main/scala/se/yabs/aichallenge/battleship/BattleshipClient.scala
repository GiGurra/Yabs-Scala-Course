package se.yabs.aichallenge.battleship

import java.util.ArrayList

import scala.collection.JavaConversions.seqAsJavaList

import se.yabs.aichallenge.ErrorMessage
import se.yabs.aichallenge.GameChallengeFound
import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.WelcomeMessage
import se.yabs.aichallenge.client.GameClient
import se.yabs.aichallenge.host.GameHost

class BattleshipClient(name: String, pw: String, zmqAddr: String) {
  def this(name: String, pw: String, addr: String, port: Int) = this(name, pw, s"tcp://$addr:$port")
  def this(name: String, pw: String, host: GameHost) = this(name, pw, "127.0.0.1", host.port)

  private val gameClient = new GameClient(name, pw, zmqAddr)
  gameClient.checkin()

  ///////////////////////////////////////////////////////////////////
  /////   API 

  def getNewMessages(pollTimeMillis: Int): Seq[Message] = {
    gameClient.getNewMessages(pollTimeMillis)
  }

  def playGame(ai: BattleshipAi): GameOver = {
    gameClient.playGame(GameSelection.BATTLESHIP)

    while (true) {
      poll(ai) match {
        case Some(gameOver) => return gameOver
        case _              =>
      }
    }

    ???
  }

  private def poll(ai: BattleshipAi): Option[GameOver] = {
    for (msg <- getNewMessages(100)) {
      msg match {
        case msg: GameChallengeFound => println("Playing against " + msg.getOpponent)
        case msg: WelcomeMessage     => println(msg.getMsg); gameClient.playGame(GameSelection.BATTLESHIP)
        case msg: PlaceShipsRequest  => gameClient.send(new PlaceShips(new ArrayList(ai.placeShips())))
        case msg: MakeShotRequest    => gameClient.send(new MakeShot(ai.makeShot()))
        case msg: GameOver           => return Some(msg)
        case msg: ErrorMessage       => throw new RuntimeException(s"ErrorMessage received from server: ${msg.getMsg}")
      }
    }
    return None
  }

  def close() {
    gameClient.close()
  }

}

object BattleshipClient {
  def playGame(
      clientA: BattleshipClient, aiA: BattleshipAi,
      clientB: BattleshipClient, aiB: BattleshipAi): GameOver = {
    
    while (true) {
      val optGameOverA = clientA.poll(aiA)
      val optGameOverB = clientB.poll(aiB)
      
      if (optGameOverA.isDefined) {
        return optGameOverA.get
      }
    }
    
    ???
  }
}