package se.yabs.scalacourse

import java.util.ArrayList

import se.yabs.aichallenge.battleship.BattleshipAi
import se.yabs.aichallenge.battleship.BattleshipGame
import se.yabs.aichallenge.battleship.Segment
import se.yabs.aichallenge.battleship.Ship
import se.yabs.aichallenge.battleship.Shot
import se.yabs.aichallenge.battleship.Vec2

class DumbAi extends BattleshipAi {

  private def mkShip(len: Int, x0: Int): Ship = {
    val out = new Ship()
    val pts = new ArrayList[Segment]
    out.setPoints(pts)

    for (i <- 0 until len)
      pts.add(new Segment().setPos(new Vec2(x0, i)))

    out
  }

  override def placeShips(): Seq[Ship] = {
    val out = for ((len, i) <- BattleshipGame.SHIP_LENGTHS.zipWithIndex) yield {
      mkShip(len, i)
    }
    out
  }

  private var iShot = 0
  override def makeShot(): Shot = {
    val ix = iShot % 10
    val iy = iShot / 10
    val out = new Shot().setPos(new Vec2(ix, iy))
    iShot += 1
    out
  }
  
  
  override def shotFired(shooter: String, pos: Vec2, isHit: Boolean) {
    // Ignored, this AI is dumb, remember :)
  }
  
}