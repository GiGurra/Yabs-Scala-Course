package se.yabs.aichallenge.battleship

import scala.annotation.tailrec

import se.yabs.aichallenge.ErrorMessage
import se.yabs.aichallenge.GameChallengeFound
import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.WelcomeMessage
import se.yabs.aichallenge.client.GameClient
import se.yabs.aichallenge.host.GameHost
import se.yabs.aichallenge.util.MGenJavaConversions.seq2ArrayList

class BattleshipClient(name: String, pw: String, zmqAddr: String, ai: => BattleshipAi) {
  def this(name: String, pw: String, addr: String, port: Int, ai: => BattleshipAi) = this(name, pw, s"tcp://$addr:$port", ai)
  def this(name: String, pw: String, host: GameHost, ai: => BattleshipAi) = this(name, pw, "127.0.0.1", host.port, ai)

  private val aiCtor = () => ai
  private val client = new GameClient(name, pw, zmqAddr)
  client.checkin()

  ///////////////////////////////////////////////////////////////////
  /////   API 

  def playGame(): GameOver = {
    val ai = aiCtor()
    client.playGame(GameSelection.BATTLESHIP)

    for (
      msgs <- Stream.continually(client.getNewMessages(10));
      msg <- msgs
    ) {
      msg match {
        case msg: GameChallengeFound =>
        case msg: WelcomeMessage     => println(msg.getMsg)
        case msg: PlaceShipsRequest  => client.send(new PlaceShips(ai.placeShips()))
        case msg: MakeShotRequest    => client.send(new MakeShot(ai.makeShot()))
        case msg: GameOver           => return msg
        case msg: ShotResult         => ai.shotFired(msg.getShooterName, msg.getShot.getPos, msg.getShot.getIsHit)
        case msg: ErrorMessage       => throw new RuntimeException(s"ErrorMessage received from server: ${msg.getMsg}")
        case msg                     => System.err.println(s"Warning: BattleshipClient '$name' ignoring msg of type: ${msg.getClass}")
      }
    }

    ???
  }

  def close() {
    client.close()
  }

}

