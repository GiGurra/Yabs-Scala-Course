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

  def scala = () => nextLong()                    //> scala: => () => Long
  def bad = () => 1L                              //> bad: => () => Long
  def time = () => currentTimeMillis()            //> time: => () => Long

  val myResult1 = calc(1, scala)                  //> myResult1  : Long = -604439809601093430
  val myResult2 = calc(1, bad)                    //> myResult2  : Long = 1
  val myResult3 = calc(1, time)                   //> myResult3  : Long = 1423427642019







  ///////////////////////////////////////////////////////////////////////////
  // 	What makes a functional language?
  //	Functions are first class citizens.
  // 	We can create them when the code is executed, not just written beforehand

  val myResult1b = calc(1, () => nextLong())      //> myResult1b  : Long = -2821642452135347091

  // In fact we can store the function in a value/variable as well
  val storedInval = () => nextLong()              //> storedInval  : () => Long = <function0>
  var storedInVar = () => nextLong()              //> storedInVar  : () => Long = <function0>

  // And we can still use it the same way
  calc(1, storedInval)                            //> res0: Long = -1427573570554051776
  calc(1, storedInVar)                            //> res1: Long = 2133709263049550240

  // And if we're really silly, we recurse
  calc(1, () => calc(2, () => calc(2, () => calc(2, () => calc(2, () => 1)))))
                                                  //> res2: Long = 16

	
	



}
