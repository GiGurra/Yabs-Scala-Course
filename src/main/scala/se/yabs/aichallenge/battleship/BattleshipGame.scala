package se.yabs.aichallenge.battleship

import java.util.ArrayList
import java.util.UUID
import scala.util.Random
import se.yabs.aichallenge.Game
import se.yabs.aichallenge.GameChallengeFound
import se.yabs.aichallenge.GameSelection
import se.yabs.aichallenge.Message
import se.yabs.aichallenge.GameMessage
import scala.collection.JavaConversions._
import se.yabs.aichallenge.host.LoggedInUser
import se.yabs.aichallenge.host.LoggedInUser

object BattleshipGame {
  val NUM_SHIPS = 5
  val SHIP_LENGTHS = Seq(2, 3, 4, 5, 6)
  val MAX_LEN = SHIP_LENGTHS.max
}

class BattleshipGame extends Game(GameSelection.BATTLESHIP) {
  println(s"A new battleship game ($this) is hosted")

  private var redUser: LoggedInUser = null
  private var blueUser: LoggedInUser = null
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

    if (isGameOver)
      throw new RuntimeException("Cannot place ships, game is over!")

    if (gameStarted)
      throw new RuntimeException("Cannot place ships, game has already started!")

    if (!BattleshipUtil.areValid(msg.getShips))
      throw new RuntimeException("Ship placement not valid!")

    playerOf(user).setShips(msg.getShips)

  }

  private def handleMakeShot(user: LoggedInUser, msg: MakeShot) {

    if (isGameOver)
      throw new RuntimeException("Cannot make shot, game is over!")

    if (!gameStarted)
      throw new RuntimeException("Cannot make shot, game has not yet started!")

    val player = playerOf(user)
    if (player.getTeam != curTeam)
      throw new RuntimeException("Cannot make shot, it's not yet your turn!")

    if (!BattleshipUtil.isInsideMap(msg.getShot.getPos))
      throw new RuntimeException("Cannot make shot, tried to fire outside the map!")

    val opponent = opponentOf(player)

    val result = BattleshipUtil.fireAt(player, opponent, msg.getShot)

    player.getShotsFired.add(result.getShot)
    opponent.getShotsReceived.add(result.getShot)

    broadCast(result)

    stepTeam()
  }

  private def stepTeam() {
    val newTeam =
      curTeam match {
        case Team.BLUE => Team.RED
        case Team.RED  => Team.BLUE
      }
    gameState.setCurrentTeam(newTeam)
  }

  private def playerOf(user: LoggedInUser): Player = {
    user match {
      case redUser  => redPlayer
      case blueUser => bluePlayer
      case _        => throw new RuntimeException(s"$user is not in game $this")
    }
  }

  private def opponentOf(player: Player): Player = {
    player.getTeam match {
      case Team.RED  => bluePlayer
      case Team.BLUE => redPlayer
    }
  }

  private def broadCast(msg: Message) {
    users.foreach(_.send(msg))
  }

  private def broadCast(fMsg: Player => Message) {
    players.foreach(fMsg)
  }

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
    gameState.setPhase(Phase.LOBBY)
  }

}