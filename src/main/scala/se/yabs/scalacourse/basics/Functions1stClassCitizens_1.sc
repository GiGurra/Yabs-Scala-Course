package se.yabs.scalacourse.basics

import scala.util.Random

object Functions1stClassCitizens {
	
	
	///////////////////////////////////
  // Remember the slides:
  // Function output can be data or other functions
  // A function is like a tool which produces some output
  // The output can be another tool which we can use later on
	// 'makeMagicTool' is a function that returns a new function,
	// (Oh and btw, 'Unit' is scalas word for 'void')
	
  def makeMagicTool(magicNumber: Int): Int => Unit = {
    
    // For numbers < 5, create a simple magic tool
    if (magicNumber < 5) {
      (x: Int) => println(s"Hello $x!")
    }
    
    // For some special number, create a function that throws an exception!
    else if (magicNumber == 666) {
      (x: Int) => throw new RuntimeException("Devious crash..")
    }
    
    // For other numbers, create a tool which
    // calls makeMagicTool again! but with a number that
    // is 1/10th
    else {
      x => {
     	 	println(s"recurse from $magicNumber -> ${magicNumber/10}")
      	makeMagicTool(magicNumber / 10)(x)
      }
    }
    
  }                                               //> makeMagicTool: (magicNumber: Int)Int => Unit






	////////////////////////////////////////////////////////////
  // Here's an example
  // Suppose we have a tool which builds magic black boxes
  // And every time we use the
  // The magic black box does new things every time we use it

  val magicTool1 = makeMagicTool(1)               //> magicTool1  : Int => Unit = <function1>
  val magicTool666 = makeMagicTool(666)           //> magicTool666  : Int => Unit = <function1>
  val magicTool10 = makeMagicTool(10)             //> magicTool10  : Int => Unit = <function1>

	magicTool1(1)                             //> Hello 1!
	magicTool10(123)                          //> recurse from 10 -> 1
                                                  //| Hello 123!
	
	// I just created three magic tools, three new functions
	// But in fact, I can use any number as input
	val magicToolX = makeMagicTool(Random.nextInt(999999))
                                                  //> magicToolX  : Int => Unit = <function1>
	magicToolX(1)                             //> recurse from 161955 -> 16195
                                                  //| recurse from 16195 -> 1619
                                                  //| recurse from 1619 -> 161
                                                  //| recurse from 161 -> 16
                                                  //| recurse from 16 -> 1
                                                  //| Hello 1!
                                                  
	//magicTool666(0)
	
}