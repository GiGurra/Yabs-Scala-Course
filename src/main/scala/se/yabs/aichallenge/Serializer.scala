package se.yabs.aichallenge

import java.io.ByteArrayInputStream
import java.io.ByteArrayOutputStream

import se.culvertsoft.mgen.javapack.serialization.JsonPrettyWriter
import se.culvertsoft.mgen.javapack.serialization.JsonReader

object Serializer {

  private val reg = new ClassRegistry
  private val buffer = new ByteArrayOutputStream
  private val jsonWriter = new JsonPrettyWriter(buffer, reg, true)
  private val jsonReader = new JsonReader(new ByteArrayInputStream(Array[Byte]()), reg)

  def write(o: Message): Array[Byte] = synchronized {
    jsonWriter.writeObject(o)
    val out = buffer.toByteArray()
    buffer.reset()
    out
  }

  def read(message: Array[Byte]): Message = synchronized {
    jsonReader.setInput(new ByteArrayInputStream(message))
    jsonReader.readObject(classOf[Message])
  }

}