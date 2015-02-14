package se.yabs.aichallenge.util

class RepeatingTimer(val intervalSeconds: Double) {
  private var tLast = time()

  def step[AnyReturnType](f: => AnyReturnType) {
    if (time > tLast + intervalSeconds) {
      tLast = time
      f
    }
  }

  def time() = System.nanoTime() / 1e9
}