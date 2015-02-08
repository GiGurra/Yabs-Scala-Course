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

public enum BattleshipResult implements MGenEnum {
	WIN(0, "WIN"),
	LOSS(1, "LOSS"),
	UNKNOWN(2, "UNKNOWN");

	final int m_intValue;
	final String m_stringValue;

	BattleshipResult(final int intValue, final String stringValue) {
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

	public static final RuntimeEnumType _TYPE = new RuntimeEnumType("BattleshipResult", "se.yabs.aichallenge.battleship.BattleshipResult") {

		@Override
		public Enum<?> get(final String entryStringName) {
			switch(entryStringName) {
				case "WIN":
					return WIN;
				case "LOSS":
					return LOSS;
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
					return WIN;
				case 1:
					return LOSS;
				case 2:
					return UNKNOWN;
				default:
					return UNKNOWN;
			}
		}

	};
}
