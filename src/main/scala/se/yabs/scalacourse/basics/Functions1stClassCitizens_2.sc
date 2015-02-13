package se.yabs.scalacourse.basics

import scala.util.Random
import java.lang.System.currentTimeMillis
import scala.util.Random.nextLong

object Functions1stClassCitizens {


  ///////////////////////////////////////////////////////////////////////////
  // Remember the slides:
  // Function arguments can be data or other functions

  def calc(x: Long, f: () => Long): Long = {
    x * f()
  }                                               //> calc: (x: Long, f: () => Long)Long
  val bad = () => 1L                              //> bad  : () => Long = <function0>
  val time = () => currentTimeMillis() * 2        //> time  : () => Long = <function0>

  val myResult1 = calc(1, nextLong)               //> myResult1  : Long = 3800949775659912876
  val myResult2 = calc(1, bad)                    //> myResult2  : Long = 1
  val myResult3 = calc(1, currentTimeMillis)      //> myResult3  : Long = 1423847083713







  ///////////////////////////////////////////////////////////////////////////
  // 	What makes a functional language?
  //	Functions are first class citizens.
  // 	We can create them when the code is executed, not just written beforehand

  val myResult1b = calc(1, () => nextLong())      //> myResult1b  : Long = 1257492594536201530

  // In fact we can store the function in a value/variable as well
  val storedInval = () => nextLong()              //> storedInval  : () => Long = <function0>
  var storedInVar = () => nextLong()              //> storedInVar  : () => Long = <function0>

  // And we can still use it the same way
  calc(1, storedInval)                            //> res0: Long = 2774774826837644617
  calc(1, storedInVar)                            //> res1: Long = -2549899788331837431

  // And if we're really silly, we recurse
  calc(1, () => calc(2, () => calc(2, () => calc(2, () => calc(2, () => 1)))))
                                                  //> res2: Long = 16

	
	



}