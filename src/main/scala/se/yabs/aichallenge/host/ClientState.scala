package se.yabs.aichallenge.host

import se.yabs.aichallenge.Message

class ClientState(
  val id: ClientId,
  val name: String,
  sendIfc: Message => Unit) {

  def send(msg: Message) {
    sendIfc(msg)
  }
  
  override def toString(): String = {
    s"$name ($id)"
  }
  
}