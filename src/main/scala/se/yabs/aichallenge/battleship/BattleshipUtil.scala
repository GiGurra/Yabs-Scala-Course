package se.yabs.aichallenge.battleship

import scala.collection.JavaConversions.asScalaBuffer

object BattleshipUtil {

  def isAlive(player: Player): Boolean = {
    player.getShips.exists(isAlive)
  }

  def isAlive(ship: Ship): Boolean = {
    ship.getPoints.exists(_.getAlive)
  }

  def isInsideMap(p: Vec2): Boolean = {
    p.getX >= 0 && p.getX < 10 &&
      p.getY >= 0 && p.getY < 10
  }

  def isValid(ship: Ship): Boolean = {

    def same(pts: Seq[Segment], xyget: Segment => Int) = pts.forall(xyget(_) == xyget(pts.head))
    def sameX(pts: Seq[Segment]) = same(pts, _.getPos.getX)
    def sameY(pts: Seq[Segment]) = same(pts, _.getPos.getY)

    // Check that all positions are inside the map 
    if (ship.getPoints.exists(p => !isInsideMap(p.getPos)))
      return false

    // Check that the ships are either horizontally or vertically placed
    if (!sameX(ship.getPoints) && !sameY(ship.getPoints))
      return false

    // Check that their lengths are valid
    if (BattleshipGame.SHIP_LENGTHS.contains(length(ship)))
      return false

    return true
  }
  
  def fireAt(shooter: Player, opponent: Player, shot: Shot): ShotResult = {
    ???
  }

  def length(ship: Ship): Int = {
    val xs = ship.getPoints.map(_.getPos.getX)
    val ys = ship.getPoints.map(_.getPos.getY)
    val xl = xs.max - xs.min
    val yl = ys.max - ys.min
    math.max(xl, yl)
  }

  def areValid(ships: Seq[Ship]): Boolean = {

    // Correct count
    if (ships.size != BattleshipGame.NUM_SHIPS)
      return false

    // No duplicates
    val shipPoints = ships.flatMap(_.getPoints)
    if (shipPoints.distinct.size != shipPoints.size)
      return false

    // Correct lengths
    if (ships.map(length).toSet != BattleshipGame.SHIP_LENGTHS.toSet)
      return false

    // Individual ship check
    if (ships.exists(!isValid(_)))
      return false

    return true
  }

  def hasValidShips(player: Player) = areValid(player.getShips)

}