import scala.collection.mutable.HashMap
import scala.xml.PrettyPrinter


///////////////////////////////////////////////////////////////////////////////
// DSLs is another interesting feature of scala worth mentioning in relation to
// to string interpolation. DSLs stands for Domain Specific Langauge.
// Basically you can with scala define a DSL inside the scala language itself,
// and then have the scala compiler check its validity and even run it.
// For example 'BaySick' is an example of Basic implemented in scala.
// Another example is xml processing:
//  - The code below uses scala.xml, which is a standalone library implementing
// a DSL for writing and reading XML:

val someValue = math.Pi

// Some  xml
val someXml =
  <Hello>
    <SubNode>
      <ValueNode>{ someValue }</ValueNode>
      <ValueNode>1</ValueNode>
    </SubNode>
  </Hello>



// Here is something more advanced for everyone with functional programming experience
// I can produce stuff directly from any scala or java types
val m = new HashMap[String, String]
m.put("A", "12345")
m.put("B", "the-B")

val mapAsXml =
  <MyRoot> { m.map { pair => <label>{ pair._2 }</label>.copy(label = pair._1) } } </MyRoot>



// Print it prettier..
val printer = new PrettyPrinter(80, 2)
val xmlPrettyString = printer.format(mapAsXml)


println(printer)
