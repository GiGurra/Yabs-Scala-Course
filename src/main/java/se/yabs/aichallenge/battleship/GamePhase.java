/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.yabs.aichallenge.battleship;

import se.culvertsoft.mgen.api.model.RuntimeEnumType;
import se.culvertsoft.mgen.javapack.classes.MGenEnum;

public enum GamePhase implements MGenEnum {
	JOINING(0, "JOINING"),
	PLACING_SHIPS(1, "PLACING_SHIPS"),
	PLAYING(2, "PLAYING"),
	GAME_OVER(3, "GAME_OVER"),
	UNKNOWN(4, "UNKNOWN");

	final int m_intValue;
	final String m_stringValue;

	GamePhase(final int intValue, final String stringValue) {
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

	public static final RuntimeEnumType _TYPE = new RuntimeEnumType("GamePhase", "se.yabs.aichallenge.battleship.GamePhase") {

		@Override
		public Enum<?> get(final String entryStringName) {
			switch(entryStringName) {
				case "JOINING":
					return JOINING;
				case "PLACING_SHIPS":
					return PLACING_SHIPS;
				case "PLAYING":
					return PLAYING;
				case "GAME_OVER":
					return GAME_OVER;
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
					return JOINING;
				case 1:
					return PLACING_SHIPS;
				case 2:
					return PLAYING;
				case 3:
					return GAME_OVER;
				case 4:
					return UNKNOWN;
				default:
					return UNKNOWN;
			}
		}

	};
}
