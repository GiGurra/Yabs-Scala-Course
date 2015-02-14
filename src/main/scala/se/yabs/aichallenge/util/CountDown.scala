package se.yabs.aichallenge.util

class CountDown(val timeSeconds: Double) {
  private var tReset = time

  def timeLeft = math.max(0.0, timeSeconds - (time - tReset))
  def isReached = timeLeft == 0.0
  def reset() { tReset = time }

  def time: Double = System.nanoTime() / 1e9

}