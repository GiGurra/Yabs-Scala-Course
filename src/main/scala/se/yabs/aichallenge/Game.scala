package se.yabs.aichallenge

import se.yabs.aichallenge.host.LoggedInUser

abstract class Game(val gameSelected: GameSelection) {
  def step(): Unit
  def isGameOver(): Boolean

  def join(client: LoggedInUser)
  def canJoin(client: LoggedInUser): Boolean
  def isPlayer(client: LoggedInUser): Boolean

  def handleMessage(client: LoggedInUser, msg: GameMessage)

}