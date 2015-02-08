package se.yabs.scalacourse.basics

object ValuesAndVariables {
  println("HelloWorld")                           //> HelloWorld

  // Values are constants
  val intValue = 1                                //> intValue  : Int = 1
  val floatValue = -3.5f                          //> floatValue  : Float = -3.5
  val calculatedValue = intValue + floatValue     //> calculatedValue  : Float = -2.5

  // variables can be re-assigned
  var intVariable = 2                             //> intVariable  : Int = 2
  println(intVariable)                            //> 2
  intVariable = 3
  println(intVariable)                            //> 3

  // You can explicitly state the typ of a variable and value
  // Sometimes this is required
  val anInt: Int = 1                              //> anInt  : Int = 1

  // Unlinke java, scala does not differentiate
  // between objects and primitives when you write code
  val floatValueAsString = floatValue.toString()  //> floatValueAsString  : String = -3.5
  val stringValueAsFloat = floatValueAsString.toFloat
                                                  //> stringValueAsFloat  : Float = -3.5

	
}