package se.yabs.aichallenge.host

case class ClientId(zmqId: Seq[Byte]) {
  def route: Array[Byte] = zmqId.toArray
}