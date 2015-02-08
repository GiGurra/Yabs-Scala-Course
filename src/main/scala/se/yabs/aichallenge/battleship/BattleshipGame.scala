package se.yabs.aichallenge.battleship

import java.util.ArrayList
import java.util.UUID

import se.yabs.aichallenge.Game
import se.yabs.aichallenge.GameChallengeFound
import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.host.ClientState

class BattleshipGame extends Game(GameSelection.BATTLESHIP) {
  println(s"A new battleship game ($this) is hosted")

  private var redClient: ClientState = null
  private var blueClient: ClientState = null
  private var nShots = 0

  private val gameState = new GameState

  ///////////////////////////////////////////////////////////////////
  /////   API 

  override def step() {
    if (hasTwoClients) {

    }
  }

  override def isFinished(): Boolean = {
    false
  }

  override def join(client: ClientState) {

    if (redClient == null) {
      redClient = client
      println(s"${client} joined $this as red player ")
    } else if (blueClient == null) {
      blueClient = client
      println(s"${client} joined $this as blue player ")
    } else
      throw new RuntimeException("Tried to join full game")

    if (hasTwoClients) {

      initGameState()

      redClient.send(new GameChallengeFound(gameSelected, blueClient.name))
      blueClient.send(new GameChallengeFound(gameSelected, redClient.name))
      println(s"Challenge found, $redClient vs $blueClient")
    }

  }

  override def canJoin(client: ClientState): Boolean = {
    !hasTwoClients
  }

  override def isPlayer(client: ClientState): Boolean = {
    client == redClient || client == blueClient
  }

  ///////////////////////////////////////////////////////////////////
  /////   PRIVATE 

  private def curTeam: Team = {
    if (!gameState.hasCurrentTeam)
      gameState.setCurrentTeam(Team.RED)
    gameState.getCurrentTeam
  }

  private def hasTwoClients: Boolean = {
    redClient != null && blueClient != null
  }

  private def mkPlayer(client: ClientState, team: Team): Player = {
    new Player()
      .setName(client.name)
      .setShots(new ArrayList[Shot])
      .setTeam(team)
      .setUuid(UUID.randomUUID().toString)
      .setShips(new ArrayList)
  }

  private def initGameState() {
    gameState.setBluePlayer(mkPlayer(blueClient, Team.BLUE))
    gameState.setRedPlayer(mkPlayer(redClient, Team.RED))
    gameState.setCurrentTeam(curTeam)
    gameState.setObservers(new ArrayList)
    gameState.setPhase(Phase.LOBBY)
    gameState.setMapSize(new Vec2(10, 10))
  }

}