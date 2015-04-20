import scala.util.Random



def getNextMessage() = {
  if (Random.nextFloat() < 0.5) {
    "A string!"
  } else {
    12345
  }
}



///////////////////////////////////
// Classes with method overloads are the more traditional way
// to achieve dynamic dispatch. However many new languages
// are supporting external ways as well,
// One popular way is patter matching.
// Think of pattern matching as switch-statements on stereoids
//
// -> My favorite appliaction for pattern matching
//		- Message passing systems
//

for (i <- 0 until 10) {

  val message = getNextMessage()

  message match {
    case message: String => println(s"it's a string: ${message.toUpperCase}")
    case message: Int    => println(s"it's an int: $message")
  }

}


////////////////////////////////
// You can not just match on types,
// but also type hierarchies.
// You can even match on object contents, if they are empty
//
//  Some experts wrote quick sort with pattern matching in two lines.
// I havent tried to understand how it works, and definitely DON't encourage you to write stuff like this for other to maintain
def qsort: List[Int] => List[Int] = {
  case Nil => Nil
  case pivot :: tail =>
    val (smaller, rest) = tail.partition(_ < pivot)
    qsort(smaller) ::: pivot :: qsort(rest)
}                                               //> qsort: => List[Int] => List[Int]

qsort(List(5, 1, 3, 56, 2, 6, 3))               //> res0: List[Int] = List(1, 2, 3, 3, 5, 6, 56)
