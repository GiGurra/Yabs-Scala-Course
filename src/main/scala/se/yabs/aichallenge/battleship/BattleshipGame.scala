package se.yabs.aichallenge.battleship

import java.util.ArrayList
import java.util.UUID
import scala.util.Random
import se.yabs.aichallenge.Game
import se.yabs.aichallenge.GameChallengeFound
import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.host.ClientState
import se.yabs.aichallenge.GameMessage

object BattleshipGame {
  val NUM_SHIPS = 5
  val SHIP_LENGTHS = Seq(2, 3, 4, 5, 6)
  val MAX_LEN = SHIP_LENGTHS.max
}

class BattleshipGame extends Game(GameSelection.BATTLESHIP) {
  println(s"A new battleship game ($this) is hosted")

  private var redClient: ClientState = null
  private var blueClient: ClientState = null
  private var gameStarted = false
  private var nShots = 0

  private val randomizer = new Random(System.nanoTime)
  private val gameState = new GameState

  ///////////////////////////////////////////////////////////////////
  /////   API 

  override def step() {
    if (gameStarted) {

    }
  }

  override def isGameOver(): Boolean = {
    gameStarted && !players.forall(BattleshipUtil.isAlive)
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

      broadCast(p => new GameChallengeFound(gameSelected, p.getName))
      broadCast(new PlaceShipsRequest())
      println(s"Challenge found, $redClient vs $blueClient")
    }

  }

  override def canJoin(client: ClientState): Boolean = {
    !hasTwoClients
  }

  override def isPlayer(client: ClientState): Boolean = {
    client == redClient || client == blueClient
  }

  override def handleMessage = {
    case msg: BattleshipMessage =>
  }

  ///////////////////////////////////////////////////////////////////
  /////   PRIVATE 

  private def broadCast(msg: Message) {
    if (redClient != null) redClient.send(msg)
    if (blueClient != null) blueClient.send(msg)
  }

  private def broadCast(fMsg: Player => Message) {
    if (redClient != null) redClient.send(fMsg(redPlayer))
    if (blueClient != null) blueClient.send(fMsg(bluePlayer))
  }

  private def bluePlayer = gameState.getBluePlayer
  private def redPlayer = gameState.getRedPlayer
  private def players = Seq(redPlayer, bluePlayer)

  private def curTeam: Team = {
    if (!gameState.hasCurrentTeam) {
      if (randomizer.nextFloat() > 0.5) {
        gameState.setCurrentTeam(Team.RED)
      } else {
        gameState.setCurrentTeam(Team.BLUE)
      }
    }
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
  }

}