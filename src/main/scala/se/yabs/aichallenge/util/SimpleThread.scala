package se.yabs.aichallenge.util

trait SimpleThread[T <: SimpleThread[T]] {
  self: T =>

  @volatile private var stopSignal = false
  private val thread = new Thread {
    override def run() {
      init()
      while (!stopSignal)
        step()
      finish()
    }
  }

  def init(): Unit = {}
  def step(): Unit = {}
  def finish(): Unit = {}

  def signalStop(): T = {
    stopSignal = true
    this
  }

  def start(): T = {
    thread.start()
    this
  }

  def join(): T = {
    thread.join()
    this
  }

  def isRunning = {
    thread.isAlive()
  }

}