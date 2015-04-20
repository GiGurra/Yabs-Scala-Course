
//////////////////////////////////////////////
// Consider how you normally concat & mix values into strings?
// Printf? +? .... sigh
// Well, it looks something like this in java..
val myInt = 1                                   //> myInt  : Int = 1
val myFloat = 1.0f                              //> myFloat  : Float = 1.0
println("Here is an int <" + myInt + "> and here is a float <" + myFloat + ">")
// Or some printf("Here is an int <%d... <-- I like this more :P
// But the compiler doesn't do more than at best warn you about doing this
// with functions it recognizes..


//////////////////////////////////////////////////
// In scala, you can use what is called string interpolation
// The $ works like in bash, likewise ${} works for longer expressions
// It's fully type checked in compile time, and uses string builders
// under the hood
//
println(s"Here is an int <$myInt> and here is a float <$myFloat>")


//////////////////////////////////////////////////////////////////////
// There are also other interpolators than 's' ('f' and 'raw' are built in ones),
// But we won't go into those.
// The point is that we very cleanly can mix our variables into strings
// You could also define you own interpolators



