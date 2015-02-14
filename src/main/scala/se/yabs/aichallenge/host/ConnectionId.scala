package se.yabs.aichallenge.host

case class ConnectionId(zmqId: Seq[Byte]) {
  def route: Array[Byte] = zmqId.toArray
}