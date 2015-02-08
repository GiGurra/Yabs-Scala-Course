package se.yabs.aichallenge.battleship

import java.util.ArrayList

import scala.collection.JavaConversions.asScalaBuffer
import scala.util.Random

import GamePhase.GAME_OVER
import GamePhase.JOINING
import GamePhase.PLACING_SHIPS
import GamePhase.PLAYING
import se.yabs.aichallenge.Game
import se.yabs.aichallenge.GameChallengeFound
import se.yabs.aichallenge.GameMessage
import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.host.LoggedInUser

object BattleshipGame {
  val NUM_SHIPS = 5
  val SHIP_LENGTHS = Seq(2, 3, 4, 5, 6)
  val MAX_LEN = SHIP_LENGTHS.max
}

class BattleshipGame extends Game(GameSelection.BATTLESHIP) {
  import GamePhase._

  println(s"A new battleship game ($this) is hosted")

  private var redUser: LoggedInUser = null
  private var blueUser: LoggedInUser = null
  private var phase: GamePhase = JOINING
  private var tLastMove = 0.0
  private var tStartedSelectingShips = 0.0

  private val randomizer = new Random(System.nanoTime)
  private val gameState = new GameState

  ///////////////////////////////////////////////////////////////////
  /////   API 

  override def step() {
    phase match {
      case PLACING_SHIPS =>
        if (timeSinceStartedPlacingShips > 3.0)
          gameOver(opponentOf(curTeam), "Place ships timeout")
      case PLAYING =>
        if (timeSinceLastMove > 3.0)
          gameOver(opponentOf(curTeam), "Make shot timeout")
      case _ =>
    }

  }

  override def isGameOver(): Boolean = {
    phase == GAME_OVER
  }

  override def join(user: LoggedInUser) {

    if (redUser == null) {
      redUser = user
      println(s"$user joined $this as red player ")
    } else if (blueUser == null) {
      blueUser = user
      println(s"$user joined $this as blue player ")
    } else
      throw new RuntimeException("Tried to join full game")

    if (hasTwoUsers) {

      initGameState()

      broadCast(p => new GameChallengeFound(gameSelected, p.getName))
      broadCast(new PlaceShipsRequest())
      println(s"Challenge found, $redUser vs $blueUser")
      phase = PLACING_SHIPS
      tStartedSelectingShips = time()

    }

  }

  override def canJoin(client: LoggedInUser): Boolean = {
    !hasTwoUsers
  }

  override def isPlayer(user: LoggedInUser): Boolean = {
    (user eq redUser) || (user eq blueUser)
  }

  override def handleMessage(client: LoggedInUser, msg: GameMessage) {
    msg match {
      case msg: BattleshipMessage => msg match {
        case msg: PlaceShips => handlePlaceShips(client, msg)
        case msg: MakeShot   => handleMakeShot(client, msg)
      }
      case _ => throw new RuntimeException(s"Bad msg received by BattleshipGame: ${msg.getClass}")
    }
  }

  ///////////////////////////////////////////////////////////////////
  /////   PRIVATE 

  private def handlePlaceShips(user: LoggedInUser, msg: PlaceShips) {

    if (phase != PLACING_SHIPS)
      throw new RuntimeException(s"Cannot place ships, game is in phase $phase!")

    if (!BattleshipUtil.areValid(msg.getShips))
      throw new RuntimeException("Ship placement not valid!")

    playerOf(user).setShips(msg.getShips)

    if (players.forall(_.getShips.nonEmpty)) {
      phase = PLAYING
      startGame()
    }

  }

  private def handleMakeShot(user: LoggedInUser, msg: MakeShot) {

    if (phase != PLAYING)
      throw new RuntimeException(s"Cannot make shot, game is int phase $phase!")

    val player = playerOf(user)
    if (player.getTeam != curTeam)
      throw new RuntimeException("Cannot make shot, it's not yet your turn!")

    if (!BattleshipUtil.isInsideMap(msg.getShot.getPos))
      throw new RuntimeException("Cannot make shot, tried to fire outside the map!")

    val opponent = opponentOf(player)

    val result = BattleshipUtil.fireAt(player, opponent, msg.getShot)

    broadCast(result)

    // Check alive
    if (BattleshipUtil.isAlive(opponent)) {
      nextTurn()
    } else {
      gameOver(user, "no ships alive")
    }
  }

  private def nextTurn() {
    val newTeam =
      curTeam match {
        case Team.BLUE => Team.RED
        case Team.RED  => Team.BLUE
        case _         => throw new RuntimeException(s"Bad team: $curTeam")
      }
    gameState.setCurrentTeam(newTeam)

    userOf(newTeam).send(new MakeShotRequest)

    tLastMove = time()

  }

  private def time() = System.nanoTime() / 1e9
  private def timeSinceLastMove() = time - tLastMove
  private def timeSinceStartedPlacingShips() = time - tStartedSelectingShips

  private def playerOf(user: LoggedInUser): Player = {
    if (user == redUser) redPlayer
    else if (user == blueUser) bluePlayer
    else throw new RuntimeException(s"$user is not in game $this")
  }

  private def playerOf(team: Team): Player = {
    team match {
      case Team.RED  => redPlayer
      case Team.BLUE => bluePlayer
      case _         => throw new RuntimeException(s"Bad team: $curTeam")
    }
  }

  private def opponentOf(team: Team): LoggedInUser = {
    team match {
      case Team.RED  => blueUser
      case Team.BLUE => redUser
      case _         => throw new RuntimeException(s"Bad team: $curTeam")
    }
  }

  private def gameOver(winner: LoggedInUser, reason: String) {
    val player = playerOf(winner)
    val opponent = opponentOf(player)
    phase = GAME_OVER
    println(s"Game over [$redUser vs $blueUser]: $winner won after ${player.getShotsFired.size} moves!")
    broadCast(new GameOver(player.getName, opponent.getName, "no ships alive", gameState))
  }

  private def userOf(team: Team): LoggedInUser = {
    team match {
      case Team.RED  => redUser
      case Team.BLUE => blueUser
      case _         => throw new RuntimeException(s"Bad team: $curTeam")
    }
  }

  private def opponentOf(player: Player): Player = {
    player.getTeam match {
      case Team.RED  => bluePlayer
      case Team.BLUE => redPlayer
      case _         => throw new RuntimeException(s"Bad team: $curTeam")
    }
  }

  private def broadCast(msg: Message) { users.foreach(_.send(msg)) }
  private def broadCast(fMsg: Player => Message) { players.foreach(fMsg) }

  private def bluePlayer = gameState.getBluePlayer
  private def redPlayer = gameState.getRedPlayer
  private def users = Seq(redUser, blueUser).filter(_ != null)
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

  private def hasTwoUsers: Boolean = {
    users.size == 2
  }

  private def mkPlayer(user: LoggedInUser, team: Team): Player = {
    new Player()
      .setName(user.name)
      .setShotsFired(new ArrayList)
      .setShotsReceived(new ArrayList)
      .setTeam(team)
      .setShips(new ArrayList)
  }

  private def initGameState() {
    gameState.setBluePlayer(mkPlayer(blueUser, Team.BLUE))
    gameState.setRedPlayer(mkPlayer(redUser, Team.RED))
    gameState.setCurrentTeam(curTeam)
    gameState.setObservers(new ArrayList)
    gameState.setPhase(GamePhase.JOINING)
  }

  private def startGame() {
    nextTurn()
  }

}