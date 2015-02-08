package se.yabs.aichallenge.battleship

trait BattleshipAi {

  def placeShips(): Seq[Ship]
  def makeShot(): Shot

}