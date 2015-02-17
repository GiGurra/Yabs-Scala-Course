/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.yabs.aichallenge;

import se.culvertsoft.mgen.api.model.RuntimeEnumType;
import se.culvertsoft.mgen.javapack.classes.MGenEnum;

public enum GameSelection implements MGenEnum {
	BATTLESHIP(0, "BATTLESHIP"),
	GOMOKU_not_yet_implemented(1, "GOMOKU_not_yet_implemented"),
	UNKNOWN(2, "UNKNOWN");

	final int m_intValue;
	final String m_stringValue;

	GameSelection(final int intValue, final String stringValue) {
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

	public static final RuntimeEnumType _TYPE = new RuntimeEnumType("GameSelection", "se.yabs.aichallenge.GameSelection") {

		@Override
		public Enum<?> get(final String entryStringName) {
			switch(entryStringName) {
				case "BATTLESHIP":
					return BATTLESHIP;
				case "GOMOKU_not_yet_implemented":
					return GOMOKU_not_yet_implemented;
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
					return BATTLESHIP;
				case 1:
					return GOMOKU_not_yet_implemented;
				case 2:
					return UNKNOWN;
				default:
					return UNKNOWN;
			}
		}

	};
}
