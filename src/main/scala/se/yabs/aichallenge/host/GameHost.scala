package se.yabs.aichallenge.host

import scala.collection.mutable.HashSet
import org.zeromq.ZContext
import org.zeromq.ZMQ.Poller
import se.yabs.aichallenge.util.ZmqUtil
import zmq.ZMQ
import scala.collection.mutable.HashMap
import se.yabs.aichallenge.Game

class GameHost(val bindAddr: String = GameHost.DEFAULT_BIND_ADDR) extends Thread {

  private val clients = new HashSet[ClientId]
  private val playingClients = new HashMap[ClientId, Game]

  @volatile private var stopSignal = false

  override def run() {

    val zmqContext = new ZContext

    val socket = zmqContext.createSocket(ZMQ.ZMQ_ROUTER)
    socket.bind(bindAddr)

    val poller = new Poller(2)
    poller.register(socket)

    while (!stopSignal) {
      if (poller.pollin(100)) {
         val inc = ZmqUtil.recvAll(socket) 
      }
    }

  }

  def signalStop {
    stopSignal = true
  }

}

object GameHost {
  val DEFAULT_PORT = 12345
  val DEFAULT_BIND_ADDR = s"tcp://*:$DEFAULT_PORT"
}