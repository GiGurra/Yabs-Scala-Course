package se.yabs.scalacourse.basics

object ValuesAndVariables {

	var myString: String = null               //> myString  : String = null
  myString = "12345"
	val int = myString.toInt                  //> int  : Int = 12345


	/////////////////////////////////////////
  // Values are constants,
  // Declared with 'val'
  
  val intValue = 1L                               //> intValue  : Long = 1
  val floatValue = -3.5f                          //> floatValue  : Float = -3.5
  val calculatedValue = intValue + floatValue     //> calculatedValue  : Float = -2.5



  /////////////////////////////////////////
  // variables can be re-assigned
  // declared with 'var'
  
  var intVariable = 2                             //> intVariable  : Int = 2
  intVariable = 3
  println(intVariable)                            //> 3



	//////////////////////////////////////////////////
  // Unlinke java, scala does not differentiate
  // between objects and primitives when you write code
  
  val floatValueAsString = floatValue.toString()  //> floatValueAsString  : String = -3.5
  val stringValueAsFloat = floatValueAsString.toFloat
                                                  //> stringValueAsFloat  : Float = -3.5
  
  
  ///////////////////////////////////////////////////
  // You can explicitly state the typ of a variable and value
  // Most people trying languages that have type deduction for the first time
  // use this everywhere, and then slowly drop more and more
  // until you don't write them at all anymore, except
  // where the application logic demands it.
  val anInt: Int = 1                              //> anInt  : Int = 1


	
}