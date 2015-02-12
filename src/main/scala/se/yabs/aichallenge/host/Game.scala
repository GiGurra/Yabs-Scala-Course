package se.yabs.aichallenge.host

import se.yabs.aichallenge.GameMessage
import se.yabs.aichallenge.GamePlayed
import se.yabs.aichallenge.GameSelection

abstract class Game(val gameSelected: GameSelection) {
  def step(): Unit
  def isGameOver(): Boolean

  def join(client: LoggedInUser)
  def canJoin(client: LoggedInUser): Boolean
  def isPlayer(client: LoggedInUser): Boolean

  def handleMessage(client: LoggedInUser, msg: GameMessage)
  
  def result(): GamePlayed

}