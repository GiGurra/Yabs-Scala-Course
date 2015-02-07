name := "yabs-scala-course"

organization := "se.yabs"

scalaVersion := "2.11.5"

version := "SNAPSHOT"

unmanagedSourceDirectories in Compile += baseDirectory.value / "src_generated/main/java"

libraryDependencies ++= Seq(
    "com.novocode" % "junit-interface" % "0.11" % "test",
    "org.zeromq" % "jeromq" % "0.3.4",
    "se.culvertsoft" % "mgen-javalib" % "0.1"
)

EclipseKeys.withSource := true
