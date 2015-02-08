package se.yabs.aichallenge.util

trait SimpleThread {

  @volatile private var stopSignal = false
  private val thread = new Thread {
    override def run() {
      init()
      while (!stopSignal) {
        step()
      }
      finish()
    }
  }

  def init(): Unit = {}
  def step(): Unit = {}
  def finish(): Unit = {}

  def signalStop() {
    stopSignal = true
  }

  def start() {
    thread.start()
  }

  def join() {
    thread.join()
  }

  def isRunning = {
    thread.isAlive()
  }

}