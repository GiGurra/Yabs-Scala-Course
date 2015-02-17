package se.yabs.scalacourse

import scala.async.Async.async
import scala.async.Async.await
import scala.concurrent.Await
import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent.Future
import scala.concurrent.duration.DurationInt
import scala.language.postfixOps

object TestUtil {

  def await5sec(f: Seq[Future[_]]) {
    Await.ready(combineFutures(f), 5 second)
  }

  def await5sec(f: Future[_], fs: Future[_]*) {
    await5sec(Seq(f) ++ fs)
  }

  def combineFutures(fs: Seq[Future[_]]) = {
    val fut = async {
      var i = 0
      while (i < fs.size) {
        await(fs(i))
        i += 1
      }
    }
    fut
  }

}