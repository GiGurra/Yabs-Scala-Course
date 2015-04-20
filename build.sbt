name := "yabs-scala-course"

organization := "se.yabs"

version := "SNAPSHOT"

scalaVersion := "2.11.6"

libraryDependencies ++= Seq(
    "com.novocode" % "junit-interface" % "0.11" % "test",
    "org.zeromq" % "jeromq" % "0.3.4",
    "se.culvertsoft" % "mgen-javalib" % "0.2.5",
    "org.scala-lang" % "scala-reflect" % scalaVersion.value,
    "org.scala-lang.modules" %% "scala-xml" % "1.0.3",
    "org.scala-lang.modules" %% "scala-async" % "0.9.2"
)

