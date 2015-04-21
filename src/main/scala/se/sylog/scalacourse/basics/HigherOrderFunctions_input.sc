import java.lang.System

import scala.util.Random



///////////////////////////////////////////////////////////////////////////
// Remember the slides:
// Function arguments can be data or other functions

def calc(x: Long, f: () => Long): Long = {
  x * f()
}

calc(1, Random.nextLong)
calc(1, System.currentTimeMillis)


///////////////////////////////////////////////////////////////////////////
// 	What makes a functional language?
//	Functions are first class citizens.
// 	We can create them when the code is executed, not just written beforehand

calc(1, () => 2)



// In fact we can store the function in a value/variable as well
val storedInval = () => Random.nextLong()
var storedInVar = () => Random.nextLong()



// And we can still use it the same way
calc(1, storedInval)
calc(1, storedInVar)



// And if we're really silly, we recurse
calc(1, () => calc(2, () => calc(2, () => calc(2, () => calc(2, () => 1)))))
