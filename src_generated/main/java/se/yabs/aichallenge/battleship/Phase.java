/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.yabs.aichallenge.battleship;

import se.culvertsoft.mgen.api.model.RuntimeEnumType;
import se.culvertsoft.mgen.javapack.classes.MGenEnum;

public enum Phase implements MGenEnum {
	LOBBY(0, "LOBBY"),
	PLAYING(1, "PLAYING"),
	UNKNOWN(2, "UNKNOWN");

	final int m_intValue;
	final String m_stringValue;

	Phase(final int intValue, final String stringValue) {
		m_intValue = intValue;
		m_stringValue = stringValue;
	}

	@Override
	public int getIntValue() {
		return m_intValue;
	}

	@Override
	public String getStringValue() {
		return m_stringValue;
	}

	public static final RuntimeEnumType _TYPE = new RuntimeEnumType("Phase", "se.yabs.aichallenge.battleship.Phase") {

		@Override
		public Enum<?> get(final String entryStringName) {
			switch(entryStringName) {
				case "LOBBY":
					return LOBBY;
				case "PLAYING":
					return PLAYING;
				case "UNKNOWN":
					return UNKNOWN;
				default:
					return UNKNOWN;
			}
		}

		@Override
		public Enum<?> get(final int entryIntValue) {
			switch(entryIntValue) {
				case 0:
					return LOBBY;
				case 1:
					return PLAYING;
				case 2:
					return UNKNOWN;
				default:
					return UNKNOWN;
			}
		}

	};
}
