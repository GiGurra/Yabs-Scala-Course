package se.yabs.aichallenge.battleship

import java.util.ArrayList

import scala.collection.JavaConversions.asScalaBuffer
import scala.collection.JavaConversions.seqAsJavaList
import scala.util.Random

import GamePhase.GAME_OVER
import GamePhase.JOINING
import GamePhase.PLACING_SHIPS
import GamePhase.PLAYING
import se.yabs.aichallenge.GameChallengeFound
import se.yabs.aichallenge.GameMessage
import se.yabs.aichallenge.GamePlayed
import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.host.Game
import se.yabs.aichallenge.host.LoggedInUser
import se.yabs.aichallenge.util.CountDown

object BattleshipGame {
  val NUM_SHIPS = 5
  val SHIP_LENGTHS = Seq(2, 3, 4, 5, 6)
  val MAX_LEN = SHIP_LENGTHS.max
}

class BattleshipGame extends Game(GameSelection.BATTLESHIP) {

  println(s"A new battleship game ($this) is hosted")

  private var phase: GamePhase = JOINING
  private var redUser: LoggedInUser = null
  private var blueUser: LoggedInUser = null
  private var winner: LoggedInUser = null
  private var loser: LoggedInUser = null

  private val countDown = new CountDown(3.0)
  private val gameState = new GameState

  ///////////////////////////////////////////////////////////////////
  /////   API 

  override def step() {
    if (countDown.isReached) {
      phase match {
        case PLACING_SHIPS => gameOver(opponentOf(userOf(curTeam)), "Place ships timeout")
        case PLAYING       => gameOver(opponentOf(userOf(curTeam)), "Make shot timeout")
        case _             =>
      }
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
      countDown.reset()

    }

  }

  override def canJoin(client: LoggedInUser): Boolean = {
    phase == JOINING && !hasTwoUsers
  }

  override def isPlayer(user: LoggedInUser): Boolean = {
    (user eq redUser) || (user eq blueUser)
  }

  override def leftGame(client: LoggedInUser): Option[GamePlayed] = {
    if (isPlayer(client) && hasTwoUsers) {
      gameOver(opponentOf(client), s"$client left the game")
      Some(result())
    } else {
      None
    }
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

  override def result(): GamePlayed = {
    if (!isGameOver())
      throw new RuntimeException("Called result() before game was finished")

    new GamePlayed(
      GameSelection.BATTLESHIP,
      new java.util.ArrayList(Seq(winner.dbUser.getName, loser.dbUser.getName)),
      new java.util.ArrayList(Seq(winner.dbUser.getName)))
  }

  ///////////////////////////////////////////////////////////////////
  /////   PRIVATE 

  private def handlePlaceShips(user: LoggedInUser, msg: PlaceShips) {

    if (phase != PLACING_SHIPS)
      throw new RuntimeException(s"Cannot place ships, game is in phase $phase!")

    if (!BattleshipUtil.areValid(msg.getShips))
      throw new RuntimeException("Ship placement not valid!")

    user.setShips(msg.getShips)

    if (players.forall(_.getShips.nonEmpty)) {
      phase = PLAYING
      startGame()
    }

  }

  private def handleMakeShot(user: LoggedInUser, msg: MakeShot) {

    if (phase != PLAYING)
      throw new RuntimeException(s"Cannot make shot, game is int phase $phase!")

    if (user.getTeam != curTeam)
      throw new RuntimeException("Cannot make shot, it's not yet your turn!")

    if (!BattleshipUtil.isInsideMap(msg.getShot.getPos))
      throw new RuntimeException("Cannot make shot, tried to fire outside the map!")

    val opponent = opponentOf(user)
    val result = BattleshipUtil.fireAt(user, opponent, msg.getShot)

    broadCast(result)

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

    countDown.reset()

  }

  private def gameOver(winner: LoggedInUser, reason: String) {
    val opponent = opponentOf(winner)
    phase = GAME_OVER
    println(s"Game over [$redUser vs $blueUser]: $winner won after ${winner.getShotsFired.size} moves!")
    println(s"  reason: $reason")
    broadCast(new GameOver(reason, winner.getName, opponent.getName, gameState))

    this.winner = winner
    this.loser = opponent
  }

  private def broadCast(msg: Message) { users.foreach(_.send(msg)) }
  private def broadCast(fMsg: Player => Message) { players.foreach(fMsg) }

  private def bluePlayer = gameState.getBluePlayer
  private def redPlayer = gameState.getRedPlayer
  private def users = Seq(redUser, blueUser).filter(_ != null)
  private def players = Seq(redPlayer, bluePlayer)

  private def curTeam: Team = {
    if (!gameState.hasCurrentTeam) {
      if (Random.nextFloat() > 0.5) {
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

  ////////////////////

  implicit def toPlayer(client: LoggedInUser): Player = {
    if (client == redUser) redPlayer
    else if (client == blueUser) bluePlayer
    else throw new RuntimeException(s"$client is not in game $this")
  }

  implicit def toUser(client: Player): LoggedInUser = {
    userOf(client.getTeam)
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

}