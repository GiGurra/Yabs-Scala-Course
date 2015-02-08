package se.yabs.aichallenge.host

import se.yabs.aichallenge.Message
import se.yabs.aichallenge.User

class LoggedInUser(
  val dbUser: User,
  fSend: Message => Unit) {

  override def toString(): String = {
    s"${dbUser.getName}"
  }

  def send(msg: Message) {
    fSend(msg)
  }
  
  def name = dbUser.getName
  
}