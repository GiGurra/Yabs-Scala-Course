package se.yabs.scalacourse.advanced

object DataManip {

  //////////////////////////////////////////////////////////////
  // This is why I love using functional languages personally
  // Manipulating and analysing data is so much easier.
  // rembmer -> Every time you create an iterator - got kills a kitten

  val seq = Seq(1, 2, 3, 4, 5, 6)                 //> seq  : Seq[Int] = List(1, 2, 3, 4, 5, 6)
  val list = List(1, 2, 3, 4, 5, 6)               //> list  : List[Int] = List(1, 2, 3, 4, 5, 6)

  val numbers = (0 until 100)                     //> numbers  : scala.collection.immutable.Range = Range(0, 1, 2, 3, 4, 5, 6, 7, 
                                                  //| 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27
                                                  //| , 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46
                                                  //| , 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65
                                                  //| , 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84
                                                  //| , 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99)




  /////////////////////////////////////////////////////////
  // Task: Give me all the odd numbers
  // Remember the anonymous functions
  val odd = numbers.filter(x => x % 2 != 0)       //> odd  : scala.collection.immutable.IndexedSeq[Int] = Vector(1, 3, 5, 7, 9, 11
                                                  //| , 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49
                                                  //| , 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87
                                                  //| , 89, 91, 93, 95, 97, 99)




  /////////////////////////////////////////////////////////
  // Task2: Give me all the odd numbers, squared
  // Remember the anonymous functions
  val oddSquared = numbers.filter(_ % 2 != 0).map(x => x * x)
                                                  //> oddSquared  : scala.collection.immutable.IndexedSeq[Int] = Vector(1, 9, 25, 
                                                  //| 49, 81, 121, 169, 225, 289, 361, 441, 529, 625, 729, 841, 961, 1089, 1225, 1
                                                  //| 369, 1521, 1681, 1849, 2025, 2209, 2401, 2601, 2809, 3025, 3249, 3481, 3721,
                                                  //|  3969, 4225, 4489, 4761, 5041, 5329, 5625, 5929, 6241, 6561, 6889, 7225, 756
                                                  //| 9, 7921, 8281, 8649, 9025, 9409, 9801)

	
  /////////////////////////////////////////////////////////
  // Task2: oh oh, now give me:
  //	- all the odd numbers,
  //	- except 5 and 3,
 	//	- cubed (^3),
 	//	- as strings,
  // but I dont want any strings longer than 5 characters
  // Remember the anonymous functions
  // How much bloat does this incur in imperative programming?
  // When someone comes back to read the code, hwo much business logic
  // vs imperative loop/CRUD/ code will he see? I bet 90% loops, 10% business logic
  // THe reader will not understand what the purpsoe of the function is at all
  // but here...:
  val result =
  	numbers
  		.filter(_ % 2 != 0) // only odd
  		.filter(!List(3,5).contains(_)) // but not 3 or 5
  		.map(math.pow(_, 3)) // to the power of 3
  		.map(_.toString()) // as strings
  		.filter(_.size <= 5) // but no strings longer than 5 characters
                                                  //> result  : scala.collection.immutable.IndexedSeq[String] = Vector(1.0, 343.0
                                                  //| , 729.0)
                                                  
	println(result)                           //> Vector(1.0, 343.0, 729.0)
  		
  
  /////////////////////////////////////////////////////////////////////
	// All arguments you see to filter and map can be anonymous like above,
	// or previously named functions
	def isOdd(x: Int) = x % 2 != 0            //> isOdd: (x: Int)Boolean
	def isNot3Or5(x: Int) = x != 3 && x != 5  //> isNot3Or5: (x: Int)Boolean
	def pow3(x: Int) = math.pow(x, 3)         //> pow3: (x: Int)Double
	def toString(x: Any) = x.toString()       //> toString: (x: Any)String
	def notLongerThan5Chars(x: String) = x.size <= 5
                                                  //> notLongerThan5Chars: (x: String)Boolean
	val result2 =
  	numbers
  		.filter(isOdd) // only odd
  		.filter(isNot3Or5) // but not 3 or 5
  		.map(pow3) // to the power of 3
  		.map(toString) // as strings
  		.filter(notLongerThan5Chars) // but no strings longer than 5 characters
                                                  //> result2  : scala.collection.immutable.IndexedSeq[String] = Vector(1.0, 343.
                                                  //| 0, 729.0)
                                                  
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
  val sum2 = numbers.reduceRight(_ + _)           //> sum2  : Int = 4950
  // Wait what? What does that mean (_+_)
  // It's short hand for
  val sum3 = numbers.reduceRight((acc, item) => acc + item)
                                                  //> sum3  : Int = 4950
  // which is actually shorthand for
  val sum4 = numbers.foldLeft(0)((acc, item) => acc + item)
                                                  //> sum4  : Int = 4950
           
	// But really, summing is such a common operation that we should just..
	val sum5 = numbers.sum                    //> sum5  : Int = 4950

}