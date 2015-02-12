/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.yabs.aichallenge;

import se.culvertsoft.mgen.api.model.Field;
import se.culvertsoft.mgen.javapack.metadata.FieldSetDepth;
import se.culvertsoft.mgen.javapack.metadata.FieldVisitSelection;
import se.culvertsoft.mgen.javapack.serialization.FieldVisitor;
import se.culvertsoft.mgen.javapack.serialization.Reader;
import se.culvertsoft.mgen.javapack.util.FieldHasher;
import se.culvertsoft.mgen.javapack.util.DeepCopyer;
import se.culvertsoft.mgen.javapack.util.EqualityTester;
/* custom_imports_begin *//* custom_imports_end */

public class GamePlayed extends se.culvertsoft.mgen.javapack.classes.MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private GameSelection m_gameType;
	private java.util.ArrayList<String> m_players;
	private java.util.ArrayList<String> m_winners;

	public GamePlayed() {
		super();
		m_gameType = null;
		m_players = null;
		m_winners = null;
	}

	public GamePlayed(final GameSelection gameType,
				final java.util.ArrayList<String> players,
				final java.util.ArrayList<String> winners) {
		m_gameType = gameType;
		m_players = players;
		m_winners = winners;
	}

	public GameSelection getGameType() {
		return m_gameType;
	}

	public java.util.ArrayList<String> getPlayers() {
		return m_players;
	}

	public java.util.ArrayList<String> getWinners() {
		return m_winners;
	}

	public boolean hasGameType() {
		return _isGameTypeSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasPlayers() {
		return _isPlayersSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasWinners() {
		return _isWinnersSet(FieldSetDepth.SHALLOW);
	}

	public GamePlayed unsetGameType() {
		_setGameTypeSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GamePlayed unsetPlayers() {
		_setPlayersSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GamePlayed unsetWinners() {
		_setWinnersSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GamePlayed setGameType(final GameSelection gameType) {
		m_gameType = gameType;
		return this;
	}

	public GamePlayed setPlayers(final java.util.ArrayList<String> players) {
		m_players = players;
		return this;
	}

	public GamePlayed setWinners(final java.util.ArrayList<String> winners) {
		m_winners = winners;
		return this;
	}

	/* custom_methods_begin *//* custom_methods_end */

	@Override
	public String toString() {
		return se.culvertsoft.mgen.javapack.util.Stringifyer.toString(this);
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = -1753080143;
		result = _isGameTypeSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getGameType(), _gameType_METADATA.typ())) : result;
		result = _isPlayersSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPlayers(), _players_METADATA.typ())) : result;
		result = _isWinnersSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getWinners(), _winners_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (GamePlayed.class != other.getClass()) return false;
		final GamePlayed o = (GamePlayed)other;
		return true
		  && hasGameType() == o.hasGameType()
		  && hasPlayers() == o.hasPlayers()
		  && hasWinners() == o.hasWinners()
		  && getGameType() == o.getGameType()
		  && EqualityTester.areEqual(getPlayers(), o.getPlayers(), _players_METADATA.typ())
		  && EqualityTester.areEqual(getWinners(), o.getWinners(), _winners_METADATA.typ());
	}

	@Override
	public GamePlayed deepCopy() {
		final GamePlayed out = new GamePlayed(
			getGameType(),
			DeepCopyer.deepCopy(getPlayers(), _players_METADATA.typ()),
			DeepCopyer.deepCopy(getWinners(), _winners_METADATA.typ()));
		return out;
	}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                    TYPE METADATA ACCESS AND SERIALIZATION METHODS                    *****
           *****          (accessed primarily by (de-)serializers and for ORM functionality)          *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  

	@Override
	public long _typeId() {
		return _TYPE_ID;
	}

	@Override
	public short _typeId16Bit() {
		return _TYPE_ID_16BIT;
	}

	@Override
	public String _typeId16BitBase64() {
		return _TYPE_ID_16BIT_BASE64;
	}

	@Override
	public String _typeName() {
		return _TYPE_NAME;
	}

	@Override
	public long[] _typeIds() {
		return _TYPE_IDS;
	}

	@Override
	public short[] _typeIds16Bit() {
		return _TYPE_IDS_16BIT;
	}

	@Override
	public String[] _typeIds16BitBase64() {
		return _TYPE_IDS_16BIT_BASE64;
	}

	@Override
	public String _typeIds16BitBase64String() {
		return _TYPE_IDS_16BIT_BASE64_STRING;
	}

	@Override
	public String[] _typeNames() {
		return _TYPE_NAMES;
	}

	@Override
	public void _accept(final FieldVisitor visitor, final FieldVisitSelection selection) throws java.io.IOException {
		switch(selection) {
			case ALL: {
				visitor.beginVisit(this, 3);
				visitor.visit(getGameType(), _gameType_METADATA);
				visitor.visit(getPlayers(), _players_METADATA);
				visitor.visit(getWinners(), _winners_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isGameTypeSet(FieldSetDepth.SHALLOW))
					visitor.visit(getGameType(), _gameType_METADATA);
				if (_isPlayersSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPlayers(), _players_METADATA);
				if (_isWinnersSet(FieldSetDepth.SHALLOW))
					visitor.visit(getWinners(), _winners_METADATA);
				visitor.endVisit();
				break;
			}
		}
	}

	@SuppressWarnings("unchecked")
	@Override
	public boolean _readField(final short fieldId,
	                         final Object context,
	                         final Reader reader) throws java.io.IOException {
		switch(fieldId) {
			case (_gameType_ID):
				setGameType((GameSelection)reader.readEnumField(_gameType_METADATA, context));
				return true;
			case (_players_ID):
				setPlayers((java.util.ArrayList<String>)reader.readListField(_players_METADATA, context));
				return true;
			case (_winners_ID):
				setWinners((java.util.ArrayList<String>)reader.readListField(_winners_METADATA, context));
				return true;
			default:
				reader.handleUnknownField(null, context);
				return false;
		}
	}

	@Override
	public Field[] _fields() {
		return _FIELDS;
	}

	public boolean _isGameTypeSet(final FieldSetDepth fieldSetDepth) {
		return m_gameType != null;
	}

	public boolean _isPlayersSet(final FieldSetDepth fieldSetDepth) {
		return m_players != null;
	}

	public boolean _isWinnersSet(final FieldSetDepth fieldSetDepth) {
		return m_winners != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_gameType_ID):
				return _isGameTypeSet(depth);
			case (_players_ID):
				return _isPlayersSet(depth);
			case (_winners_ID):
				return _isWinnersSet(depth);
			default:
				return false;
		}
	}

	public GamePlayed _setGameTypeSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_gameType = m_gameType != null ? m_gameType : GameSelection.UNKNOWN;
		else
			m_gameType = null;
		return this;
	}

	public GamePlayed _setPlayersSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_players = m_players != null ? m_players : new java.util.ArrayList<String>();
		else
			m_players = null;
		return this;
	}

	public GamePlayed _setWinnersSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_winners = m_winners != null ? m_winners : new java.util.ArrayList<String>();
		else
			m_winners = null;
		return this;
	}

	public GamePlayed _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setGameTypeSet(state, depth);
		_setPlayersSet(state, depth);
		_setWinnersSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true;
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isGameTypeSet(depth) ? 1 : 0;
		out += _isPlayersSet(depth) ? 1 : 0;
		out += _isWinnersSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_gameType_ID):
				return _gameType_METADATA;
			case (_players_ID):
				return _players_METADATA;
			case (_winners_ID):
				return _winners_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("gameType"):
				return _gameType_METADATA;
			case ("players"):
				return _players_METADATA;
			case ("winners"):
				return _winners_METADATA;
			default:
				return null;
		}
	}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                                    TYPE METADATA                                     *****
           *****             (generally speaking, it's a bad idea to edit this manually)              *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  

	public static final long _TYPE_ID = 300559125798525147L;

	public static final long[] _TYPE_IDS = { se.yabs.aichallenge.GamePlayed._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -1558;

	public static final short[] _TYPE_IDS_16BIT = { se.yabs.aichallenge.GamePlayed._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "+eo";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.yabs.aichallenge.GamePlayed._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.yabs.aichallenge.GamePlayed._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.yabs.aichallenge.GamePlayed";

	public static final String[] _TYPE_NAMES = { se.yabs.aichallenge.GamePlayed._TYPE_NAME };

	public static final Field _gameType_METADATA = new Field("se.yabs.aichallenge.GamePlayed", "gameType", se.yabs.aichallenge.GameSelection._TYPE, null, (short)-27076);
	public static final Field _players_METADATA = new Field("se.yabs.aichallenge.GamePlayed", "players", new se.culvertsoft.mgen.api.model.ListType(se.culvertsoft.mgen.api.model.StringType.INSTANCE), null, (short)29583);
	public static final Field _winners_METADATA = new Field("se.yabs.aichallenge.GamePlayed", "winners", new se.culvertsoft.mgen.api.model.ListType(se.culvertsoft.mgen.api.model.StringType.INSTANCE), null, (short)1721);

	public static final short _gameType_ID = (short)-27076;
	public static final short _players_ID = (short)29583;
	public static final short _winners_ID = (short)1721;

	public static final Field[] _FIELDS = { _gameType_METADATA, _players_METADATA, _winners_METADATA };

}
