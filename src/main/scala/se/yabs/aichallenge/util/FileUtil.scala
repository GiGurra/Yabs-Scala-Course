package se.yabs.aichallenge.util

import scala.reflect.io.File
import scala.reflect.io.Path.string2path

object FileUtil {

  def textFile2String(fileName: String): Option[String] = {
    File(fileName).safeSlurp()
  }

  def exists(fileName: String): Boolean = {
    File(fileName).exists
  }

  def string2TextFile(text: String, fileName: String) {
    File(fileName).writeAll(text)
  }

}