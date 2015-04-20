
//////////////////////////////////////////////////////////////
// This is why I love using functional languages personally
// Manipulating and analysing data is so much easier.
// rembmer -> Every time you create an iterator - got kills a kitten

val seq = Seq(1, 2, 3, 4, 5, 6)                 //> seq  : Seq[Int] = List(1, 2, 3, 4, 5, 6)
val list = List(1, 2, 3, 4, 5, 6)               //> list  : List[Int] = List(1, 2, 3, 4, 5, 6)

val numbers = (0 until 100)                     //> numbers  : scala.collection.immutable.Range = Range(0, 1, 2, 3, 4, 5, 6, 7,


/////////////////////////////////////////////////////////
// Task: Give me all the odd numbers
// Remember the anonymous functions
val odd = numbers.filter(x => x % 2 != 0)       //> odd  : scala.collection.immutable.IndexedSeq[Int] = Vector(1, 3, 5, 7, 9, 11



/////////////////////////////////////////////////////////
// Task2: Give me all the odd numbers, squared
// Remember the anonymous functions
val oddSquared = odd.map(x => x*x)



/////////////////////////////////////////////////////////
// Task2: now give me:
//	- all the odd numbers,
//	- except 5 and 3,
//	- cubed (^3),
//	- as strings,
// but I dont want any strings longer than 5 characters
// Remember the anonymous functions
// How much bloat does this incur in imperative programming?
// When someone comes back to read the code, hwo much business logic
// vs imperative loop/CRUD/ code will he see? I bet 90% loops, 10% business logic
// The reader will not understand what the purpsoe of the function is at all
// but here...:
val result =
  numbers
    .filter(_ % 2 != 0) // only odd
    .filter(!List(3,5).contains(_)) // but not 3 or 5
    .map(math.pow(_, 3)) // to the power of 3
    .map(_.toString()) // as strings
    .filter(_.size <= 5) // but no strings longer than 5 characters


println(result)


/////////////////////////////////////////////////////////////////////
// All arguments you see to filter and map can be anonymous like above,
// or previously named functions
def isOdd(x: Int) = x % 2 != 0
def isNot3Or5(x: Int) = x != 3 && x != 5
def pow3(x: Int) = math.pow(x, 3)
def toString(x: Any) = x.toString()
def notLongerThan5Chars(x: String) = x.size <= 5
val result2 =
  numbers
    .filter(isOdd) // only odd
    .filter(isNot3Or5) // but not 3 or 5
    .map(pow3) // to the power of 3
    .map(toString) // as strings
    .filter(notLongerThan5Chars) // but no strings longer than 5 characters

println(result2)                          //> Vector(1.0, 343.0, 729.0)





/////////////////////////////////////////////////////////
// Combining all elements (sums, products etc)
// Someone gives you a task. Give me the sum of all the elements
// You write a loop...
var sum = 0                                     //> sum  : Int = 0
for (x <- numbers) {
  sum += x
}
sum                                             //> res0: Int = 4950

/////////////////////////////////////////////////////////////////////
// Well, in a functional language, all collections have operations like
val sum2 = numbers.reduceRight(_ + _)
// Wait what? What does that mean (_+_)
// It's short hand for
val sum3 = numbers.reduceRight((acc, item) => acc + item)
// which is actually shorthand for
val sum4 = numbers.foldLeft(0)((acc, item) => acc + item)

// But really, summing is such a common operation that we should just..
val sum5 = numbers.sum
