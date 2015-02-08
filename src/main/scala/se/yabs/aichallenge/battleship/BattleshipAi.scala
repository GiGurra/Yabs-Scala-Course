package se.yabs.aichallenge.battleship

trait BattleshipAi {

  def placeShips(): Seq[Ship]
  def shotFired(shooter: String, pos: Vec2, isHit: Boolean)
  def makeShot(): Shot

}