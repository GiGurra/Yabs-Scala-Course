package se.yabs.aichallenge.battleship

import se.yabs.aichallenge.host.ClientState
import se.yabs.aichallenge.Game
import se.yabs.aichallenge.GameChallengeFound
import se.yabs.aichallenge.GameSelection

class BattleshipGame extends Game(GameSelection.BATTLESHIP) {
  println(s"A new battleship game ($this) is hosted")

  var redPlayer: ClientState = null
  var bluePlayer: ClientState = null

  override def step() {
    if (hasTwoPlayers) {

    }
  }

  override def isFinished(): Boolean = {
    false
  }

  override def join(client: ClientState) {
    
    if (redPlayer == null) {
      redPlayer = client
      println(s"${client} joined $this as red player ")
    } else if (bluePlayer == null) {
      bluePlayer = client
      println(s"${client} joined $this as blue player ")
    } else
      throw new RuntimeException("Tried to join full game")
    
    if (hasTwoPlayers) {
      redPlayer.send(new GameChallengeFound(gameSelected, bluePlayer.name))
      bluePlayer.send(new GameChallengeFound(gameSelected, redPlayer.name))
      println(s"Challenge found, $redPlayer vs $bluePlayer")
    }
    
  }

  override def canJoin(client: ClientState): Boolean = {
    !hasTwoPlayers
  }

  override def isPlayer(client: ClientState): Boolean = {
    client == redPlayer || client == bluePlayer
  }

  def hasTwoPlayers: Boolean = {
    redPlayer != null && bluePlayer != null
  }

}