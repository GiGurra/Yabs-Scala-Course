package se.yabs.aichallenge

import se.yabs.aichallenge.host.ClientState

abstract class Game(val gameSelected: GameSelection) {
  def step(): Unit
  def isGameOver(): Boolean

  def join(client: ClientState)
  def canJoin(client: ClientState): Boolean
  def isPlayer(client: ClientState): Boolean

  def handleMessage: PartialFunction[GameMessage, Unit]

}