package se.yabs.scalacourse

import scala.util.Random

object TestSaveFile {
  def random() = s"target/${Random.nextString(10)}.json"
}