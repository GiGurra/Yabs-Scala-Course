package se.yabs.aichallenge.battleship

import se.yabs.aichallenge.client.serialization.DbSaver
import scala.collection.mutable.HashMap
import scala.collection.JavaConversions._

object ScorePrinter {

  def file2String(fileName: String): String = {
    val source = scala.io.Source.fromFile(fileName)
    val lines = source.mkString
    source.close()
    lines
  }

  class UserScore {
    private var _wins: Int = 0
    private var _games: Int = 0

    def losses = games - wins

    def wins = _wins

    def games = _games

    def addLoss() {
      _games += 1
    }

    def addWin() {
      _games += 1
      _wins += 1
    }

    def winRatio = wins.toFloat / games.toFloat

  }

  def main(args: Array[String]) {

    val userDb = DbSaver.read(file2String("game_results.json"))
    val scores = new HashMap[String, UserScore]

    for (gameResult <- userDb.getGames) {
      if (gameResult.getWinners.size == 1 && gameResult.getPlayers.size == 2) {
        val winner = gameResult.getWinners.head
        val loser = (gameResult.getPlayers - winner).head
        scores.getOrElseUpdate(winner, new UserScore).addWin()
        scores.getOrElseUpdate(loser, new UserScore).addLoss()
      } else {
        throw new RuntimeException("Invalid game result")
      }
    }

    def printScoreLine(name: String, wins: String, losses: String, ratio: String) {
      println(s"[${name.padTo(10, ' ')}]    |    ${wins.padTo(6, ' ')} -   ${losses.padTo(6, ' ')}    |    ${ratio.padTo(6, ' ')}")
    }

    printScoreLine("name", "wins", "losses", "ratio")
    for ((name, score) <- scores) {
      printScoreLine(name, score.wins.toString, score.losses.toString, score.winRatio.toString)
    }

  }
}