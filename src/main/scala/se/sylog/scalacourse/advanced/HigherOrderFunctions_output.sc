import scala.util.Random

///////////////////////////////////
// Remember the slides:
// Function output can be data or other functions
// A function is like a tool which produces some output
// The output can be another tool which we can use later on
// 'makeMagicTool' is a function that returns a new function,
// (Oh and btw, 'Unit' is scalas word for 'void')

type MagicTool = Int => Unit

def makeMagicTool(magicNumber: Int): MagicTool = {

  // For numbers < 5, create a simple magic tool
  if (magicNumber < 5) {
    (x: Int) => println(s"Hello $x!")
  }

  // For some special number, create a tool that throws an exception!
  else if (magicNumber == 666) {
    (x: Int) => throw new RuntimeException("Devious crash..")
  }

  // For other numbers, create a tool which
  // calls makeMagicTool again! but with a number that
  // is 1/10th
  else {
    (x: Int) => {
      val myString = s"recurse from $magicNumber -> ${magicNumber / 10}"
      println(myString)
      makeMagicTool(magicNumber / 10)(x)
    }
  }

}


////////////////////////////////////////////////////////////
// Now let's make some magic tools
// and use them
val magicTool1 = makeMagicTool(1)
val magicTool666 = makeMagicTool(666)
val magicTool10 = makeMagicTool(10)
magicTool1(1)
magicTool10(123)
///////////////////////////////////////////
// I just created three magic tools, three new functions
// But in fact, I can use any number as input
val magicToolX = makeMagicTool(Random.nextInt(999999))
magicToolX(1)

