import java.lang.System._

import scala.util.Random._



///////////////////////////////////////////////////////////////////////////
// Remember the slides:
// Function arguments can be data or other functions

def calc(x: Long, f: () => Long): Long = {
  x * f()
}
val bad = () => 1L
val time = () => currentTimeMillis() * 2

val myResult1 = calc(1, nextLong)
val myResult2 = calc(1, bad)
val myResult3 = calc(1, currentTimeMillis)



///////////////////////////////////////////////////////////////////////////
// 	What makes a functional language?
//	Functions are first class citizens.
// 	We can create them when the code is executed, not just written beforehand

val myResult1b = calc(1, () => nextLong())



// In fact we can store the function in a value/variable as well
val storedInval = () => nextLong()
var storedInVar = () => nextLong()



// And we can still use it the same way
calc(1, storedInval)
calc(1, storedInVar)



// And if we're really silly, we recurse
calc(1, () => calc(2, () => calc(2, () => calc(2, () => calc(2, () => 1)))))
