package se.yabs.aichallenge.util

import scala.collection.JavaConversions.asJavaCollection
import scala.collection.JavaConversions.seqAsJavaList

object MGenJavaConversions {
  implicit def seq2ArrayList[T](s: Seq[T]) = new java.util.ArrayList[T](s)
  implicit def iterable2ArrayList[T](s: Iterable[T]) = new java.util.ArrayList[T](s)
  implicit def map2HashMap[K, V](s: Map[K, V]): java.util.HashMap[K, V] = new java.util.HashMap(s)
  implicit def map2HashMap[K, V](s: scala.collection.mutable.Map[K, V]): java.util.HashMap[K, V] = new java.util.HashMap[K, V](s.toMap)
}
