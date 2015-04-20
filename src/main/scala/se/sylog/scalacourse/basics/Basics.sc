
// Printing to console
println("Hello")
println("Yo")




// Values and variables
val x = 3
var y = 2.5
y = 3



// Loops
for (i <- 0 until 10)
  println("Hello")




// Function
def double(myInput: String): String = myInput + myInput
val doubleHej = double("Hej")




// Classes
class MyClass(val x: Double, y: Int) {
  def myMethod = x + y
}
val myInstance = new MyClass(1.5,2)
myInstance.myMethod




// Interaces (called Traits in scala)
trait CanSayHello {
  def sayHello()
}
class Dog extends CanSayHello {
  override def sayHello() = println("woof")
}
val myDog: CanSayHello = new Dog
myDog.sayHello()




// Compose types on the fly
class Car

val myCar = new Car
val mySpecialCar = new Car with CanSayHello { override def sayHello() = println("wow") }

// myCar.sayHello() - Won't compile!
mySpecialCar.sayHello()

