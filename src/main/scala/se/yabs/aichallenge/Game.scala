package se.yabs.aichallenge

import se.yabs.aichallenge.host.ClientState

abstract class Game(selection: GameSelection) {
   def step(): Unit
   def isFinished(): Boolean
   
   def join(client: ClientState)
   def canJoin(client: ClientState): Boolean
   def isPlayer(client: ClientState): Boolean
}