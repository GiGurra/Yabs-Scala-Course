package se.yabs.scalacourse.basics

import scala.math.Numeric
import scala.util.Random

object Functions {

  //////////////////////////////////////////////
  // This is how you define functions in scala
  // There are both longer and shorter ways of doing it
  def double(number: Float) = 2 * number          //> double: (number: Float)Float
  def double2(number: Float) = {
    2 * number
  }                                               //> double2: (number: Float)Float
  def double3(number: Float): Float = {
    2 * number
  }                                               //> double3: (number: Float)Float



  //////////////////////////////////////////////
  // Calling functions looks like any other language
  def str2float(input: String) = input.toFloat    //> str2float: (input: String)Float
  val str = "123.0"                               //> str  : String = 123.0
  val result = str2float(str)                     //> result  : Float = 123.0



  ////////////////////////////////////
  // As well as combining them
  def str2floatTimes2(input: String) = {
    double(str2float(input))
  }                                               //> str2floatTimes2: (input: String)Float

  val str2 = "256.0"                              //> str2  : String = 256.0
  val result2 = str2floatTimes2(str2)             //> result2  : Float = 512.0



  ////////////////////////////////////
  // Oh, and functions can return any number of values
  def queryUnstableDatabase(item: String): (Int, String) = {
    if (Random.nextFloat() < 0.5)
      (12345, "")
    else
      (-1, "Failed to read database!")
  }                                               //> queryUnstableDatabase: (item: String)(Int, String)

  val (value, errString) = queryUnstableDatabase("myItem")
                                                  //> value  : Int = 12345
                                                  //| errString  : String = ""

}