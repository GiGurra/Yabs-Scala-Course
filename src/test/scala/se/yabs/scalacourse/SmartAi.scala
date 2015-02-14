package se.yabs.scalacourse

import java.util.ArrayList
import scala.util.Random

import scala.collection.mutable.ArrayBuffer
import scala.collection.JavaConversions._

import se.yabs.aichallenge.battleship.BattleshipAi
import se.yabs.aichallenge.battleship.BattleshipGame
import se.yabs.aichallenge.battleship.BattleshipUtil
import se.yabs.aichallenge.battleship.Segment
import se.yabs.aichallenge.battleship.Ship
import se.yabs.aichallenge.battleship.Shot
import se.yabs.aichallenge.battleship.Vec2

class SmartAi extends BattleshipAi {

  private def nextCoord(): Int = {
    Random.nextInt(10)
  }

  private def nextVec2(): Vec2 = {
    new Vec2(nextCoord(), nextCoord())
  }

  private def surrounding(x: Vec2) : Seq[Vec2] = {
    Seq(
      new Vec2(x.getX + 1, x.getY),
      new Vec2(x.getX,     x.getY + 1),
      new Vec2(x.getX + 1, x.getY),
      new Vec2(x.getX,     x.getY + 1)
    )
  }

  private var placed = new ArrayBuffer[Vec2]

  private def mkShip(len: Int): Ship = {
    val out = new Ship()
    val pts = new ArrayList[Segment]
    out.setPoints(pts)

    val v = nextVec2()
    val horiz = Random.nextBoolean()

    val dy = if (horiz) 1 else 0
    val dx = if (horiz) 0 else 1

    for (i <- 0 until len) {
      val p = new Vec2(v.getX + i*dx, v.getY + i*dy)

      if (!BattleshipUtil.isInsideMap(p) || placed.contains(p))
        return mkShip(len)

      pts.add(new Segment().setPos(p))
    }

    placed ++= out.getPoints.map(_.getPos).flatMap(x => surrounding(x) ++ Seq(x))
    return out
  }

  override def placeShips(): Seq[Ship] = {
    BattleshipGame
      .SHIP_LENGTHS
      .map(mkShip)
  }

  private var shots = new ArrayBuffer[Vec2]
  private var hits = new ArrayBuffer[Vec2]

  private def isOnCheckerboardPattern(v: Vec2): Boolean = {
    (v.getX + 9 * v.getY) % 2 == 0
  }

  private def findUniqueShot() : Vec2 = {
    val pos = nextVec2()

    if (!shots.contains(pos) && isOnCheckerboardPattern(pos))
      pos
    else
      findUniqueShot()
  }

  private def findSmartShot(): Option[Vec2] = {
    hits
      .flatMap(surrounding)
      .distinct
      .filter(BattleshipUtil.isInsideMap)
      .filterNot(shots.contains)
      .headOption
  }

  override def makeShot(): Shot = {
    shots += findSmartShot().getOrElse(findUniqueShot())
    new Shot().setPos(shots.last)
  }
  
  override def shotFired(shooter: String, pos: Vec2, isHit: Boolean) {
    if (shooter == "smarto" && isHit)
      hits += pos
  }
  
}
