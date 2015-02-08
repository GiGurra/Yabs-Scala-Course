package se.yabs.scalacourse.advanced

object Classes {

  ///////////////////////////////////
  // Classes, fields and methods
  // - classes are public by default
  // - the constructor is defined next to the class name
  // - the constructor arguments are automatically an initializer list to member fields
  class Car(val year: Int, var miles: Int) {
    def drive(distance: Int) {
      miles += distance
    }
  }

  val myCar = new Car(2012, 30000)                //> myCar  : se.yabs.scalacourse.advanced.Classes.Car = se.yabs.scalacourse.adva
                                                  //| nced.Classes$Car@3d82c5f3
  println(myCar.year)                             //> 2012
  println(myCar.miles)                            //> 30000
  myCar.drive(12345)
  println(myCar.miles)                            //> 42345



  ///////////////////////////////////
  // Inheritance
	// The basics are the same as java/c++
	//
	class BMW(year: Int, miles: Int) extends Car(year, miles) {
		override def drive(distance: Int) {
			super.drive(distance)
			println("** 8) ** Funky ** (8 **")
		}
	}
	
	val funkyCar = new BMW(2015, 0)           //> funkyCar  : se.yabs.scalacourse.advanced.Classes.BMW = se.yabs.scalacourse.a
                                                  //| dvanced.Classes$$anonfun$main$1$BMW$1@71be98f5
	funkyCar.drive(500)                       //> ** 8) ** Funky ** (8 **
	


  ///////////////////////////////////
  // Anonymous classes
	//
  val carWithFunkyMiles = new Car(2010, 1000) {
    override def drive(distance: Int) {
      super.drive(distance / 2)
    }
  }                                               //> carWithFunkyMiles  : se.yabs.scalacourse.advanced.Classes.Car = se.yabs.sca
                                                  //| lacourse.advanced.Classes$$anonfun$main$1$$anon$2@6fadae5d
      
 println(carWithFunkyMiles.miles)                 //> 1000
 carWithFunkyMiles.drive(1000)
 println(carWithFunkyMiles.miles)                 //> 1500

	

  ///////////////////////////////////
  // Case classes
  // Free feature sets
  // Everything is public and immutable by default
  // No inheritance allowed
	//
	
	case class SuperCar(year: Int)
	val mySuperCar = SuperCar(2020)           //> mySuperCar  : se.yabs.scalacourse.advanced.Classes.SuperCar = SuperCar(2020
                                                  //| )
	// String representation is free
	println(mySuperCar)                       //> SuperCar(2020)
	// Comparison operator is free
	println(mySuperCar == SuperCar(2020))     //> true
	println(mySuperCar == SuperCar(2019))     //> false



  ///////////////////////////////////
  // Traits
  // Same as class, except:
  // - Cannot have a constructor!
  // Superset of interfaces
  // Works very well in multiple inheritance situation
  // - Multiple inheritance is always chained/serialized
  // - 'V's and diamonds are not possible
	//
	
	class SpaceShip(var pos: Int = 0)
	trait WarpDrive extends SpaceShip {
		def warp() { pos += 10}
	}
	trait CommandBridge {
		def talk() {
			println("We come in peace..?")
		}
	}
		
	class FunkySpaceShip extends SpaceShip with WarpDrive with CommandBridge
	
	val funkySpaceship = new FunkySpaceShip   //> funkySpaceship  : se.yabs.scalacourse.advanced.Classes.FunkySpaceShip = se.
                                                  //| yabs.scalacourse.advanced.Classes$$anonfun$main$1$FunkySpaceShip$1@3796751b
                                                  //| 
	val ghettoFunkySpaceship = new SpaceShip with WarpDrive with CommandBridge
                                                  //> ghettoFunkySpaceship  : se.yabs.scalacourse.advanced.Classes.SpaceShip with
                                                  //|  se.yabs.scalacourse.advanced.Classes.WarpDrive with se.yabs.scalacourse.ad
                                                  //| vanced.Classes.CommandBridge = se.yabs.scalacourse.advanced.Classes$$anonfu
                                                  //| n$main$1$$anon$1@67b64c45
 funkySpaceship.warp()
 funkySpaceship.talk()                            //> We come in peace..?
 
 ghettoFunkySpaceship.warp()
 ghettoFunkySpaceship.talk()                      //> We come in peace..?
 
 println(funkySpaceship.pos)                      //> 10
 println(ghettoFunkySpaceship.pos)                //> 10
	
	
	
}