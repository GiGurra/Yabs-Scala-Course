package se.yabs.scalacourse

import scala.util.Random

object TestSaveFile {

  val RAND_LETTERS = "rragheigugmnxcblkadjfghwetiopyiqh".toSeq

  def randLetter() = RAND_LETTERS(Random.nextInt(RAND_LETTERS.size))

  def randString(n: Int) = (0 until n).map(_ => randLetter()).mkString

  def random() = s"target/${randString(10)}.json"
}