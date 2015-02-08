package se.yabs.aichallenge

abstract class Game(selection: GameSelection) {
   def step(): Unit
   def isFinished(): Boolean
}