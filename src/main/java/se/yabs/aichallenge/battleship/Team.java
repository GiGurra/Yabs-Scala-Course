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

public enum Team implements MGenEnum {
	RED(0, "RED"),
	BLUE(1, "BLUE"),
	OBSERVERS(2, "OBSERVERS"),
	UNKNOWN(3, "UNKNOWN");

	final int m_intValue;
	final String m_stringValue;

	Team(final int intValue, final String stringValue) {
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

	public static final RuntimeEnumType _TYPE = new RuntimeEnumType("Team", "se.yabs.aichallenge.battleship.Team") {

		@Override
		public Enum<?> get(final String entryStringName) {
			switch(entryStringName) {
				case "RED":
					return RED;
				case "BLUE":
					return BLUE;
				case "OBSERVERS":
					return OBSERVERS;
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
					return RED;
				case 1:
					return BLUE;
				case 2:
					return OBSERVERS;
				case 3:
					return UNKNOWN;
				default:
					return UNKNOWN;
			}
		}

	};
}
