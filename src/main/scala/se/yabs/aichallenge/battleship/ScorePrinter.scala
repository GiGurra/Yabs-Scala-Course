package se.yabs.aichallenge.battleship

import scala.annotation.migration
import scala.collection.JavaConversions.asScalaBuffer
import scala.collection.mutable.HashMap

import se.yabs.aichallenge.client.serialization.DbSaver

object ScorePrinter {

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

    val userDb = DbSaver.readFile("game_results.json").get
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
    for ((name, score) <- scores.toSeq.sortBy(_._2.wins).reverse) {

      printScoreLine(name, score.wins.toString, score.losses.toString, score.winRatio.toString)
    }

  }
}