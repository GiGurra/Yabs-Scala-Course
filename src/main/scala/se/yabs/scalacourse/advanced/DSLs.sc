package se.yabs.scalacourse.advanced

import scala.collection.mutable.HashMap
import scala.xml._

object DSLxs {

  ///////////////////////////////////////////////////////////////////////////////
  // DSLs is another interesting feature of scala worth mentioning in relation to
  // to string interpolation. DSLs stands for Domain Specific Langauge.
  // Basically you can with scala define a DSL inside the scala language itself,
  // and then have the scala compiler check its validity and even run it.
  // For example 'BaySick' is an example of Basic implemented in scala.
  // Another example is xml processing:
  //  - The code below uses scala.xml, which is a standalone library implementing
  // a DSL for writing and reading XML:

  val someValue = math.Pi                         //> someValue  : Double = 3.141592653589793

  // Some  xml
  val someXml =
    <Hello>
      <SubNode>
        <ValueNode>{ someValue }</ValueNode>
        <ValueNode>1</ValueNode>
      </SubNode>
    </Hello>                                      //> someXml  : scala.xml.Elem = <Hello>
                                                  //|       <SubNode>
                                                  //|         <ValueNode>3.141592653589793</ValueNode>
                                                  //|         <ValueNode>1</ValueNode>
                                                  //|       </SubNode>
                                                  //|     </Hello>

  // Here is something more advanced for everyone with functional programming experience
  // I can produce stuff directly from any scala or java types
  val m = new HashMap[String, String]             //> m  : scala.collection.mutable.HashMap[String,String] = Map()
  m.put("A", "12345")                             //> res0: Option[String] = None
  m.put("B", "the-B")                             //> res1: Option[String] = None

  val mapAsXml =
    <MyRoot> { m.map { pair => <label>{ pair._2 }</label>.copy(label = pair._1) } } </MyRoot>
                                                  //> mapAsXml  : scala.xml.Elem = <MyRoot> <A>12345</A><B>the-B</B> </MyRoot>

  // Print it prettier..
  val printer = new PrettyPrinter(80, 2)          //> printer  : scala.xml.PrettyPrinter = scala.xml.PrettyPrinter@6767c1fc
  val xmlPrettyString = printer.format(mapAsXml)  //> xmlPrettyString  : String = <MyRoot>
                                                  //|   <A>12345</A>

  println(printer)
                                                  //| </MyRoot>
 
}