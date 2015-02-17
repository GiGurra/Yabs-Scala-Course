/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.yabs.aichallenge.battleship;

import se.culvertsoft.mgen.api.model.Field;
import se.culvertsoft.mgen.javapack.metadata.FieldSetDepth;
import se.culvertsoft.mgen.javapack.metadata.FieldVisitSelection;
import se.culvertsoft.mgen.javapack.serialization.FieldVisitor;
import se.culvertsoft.mgen.javapack.serialization.Reader;
import se.culvertsoft.mgen.javapack.util.FieldHasher;
import se.culvertsoft.mgen.javapack.util.DeepCopyer;
import se.culvertsoft.mgen.javapack.util.EqualityTester;
import se.culvertsoft.mgen.javapack.util.Validator;
import se.culvertsoft.mgen.javapack.util.Marker;
/* custom_imports_begin *//* custom_imports_end */

public class GameOver extends BattleshipMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private String m_reason;
	private String m_winner;
	private String m_loser;
	private GameState m_board;

	public GameOver() {
		super();
		m_reason = null;
		m_winner = null;
		m_loser = null;
		m_board = null;
	}

	public GameOver(final String reason,
				final String winner,
				final String loser,
				final GameState board) {
		m_reason = reason;
		m_winner = winner;
		m_loser = loser;
		m_board = board;
	}

	public String getReason() {
		return m_reason;
	}

	public String getWinner() {
		return m_winner;
	}

	public String getLoser() {
		return m_loser;
	}

	public GameState getBoard() {
		return m_board;
	}

	public boolean hasReason() {
		return _isReasonSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasWinner() {
		return _isWinnerSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasLoser() {
		return _isLoserSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasBoard() {
		return _isBoardSet(FieldSetDepth.SHALLOW);
	}

	public GameOver unsetReason() {
		_setReasonSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameOver unsetWinner() {
		_setWinnerSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameOver unsetLoser() {
		_setLoserSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameOver unsetBoard() {
		_setBoardSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameOver setReason(final String reason) {
		m_reason = reason;
		return this;
	}

	public GameOver setWinner(final String winner) {
		m_winner = winner;
		return this;
	}

	public GameOver setLoser(final String loser) {
		m_loser = loser;
		return this;
	}

	public GameOver setBoard(final GameState board) {
		m_board = board;
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
		int result = 1224667668;
		result = _isReasonSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getReason(), _reason_METADATA.typ())) : result;
		result = _isWinnerSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getWinner(), _winner_METADATA.typ())) : result;
		result = _isLoserSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getLoser(), _loser_METADATA.typ())) : result;
		result = _isBoardSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getBoard(), _board_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (GameOver.class != other.getClass()) return false;
		final GameOver o = (GameOver)other;
		return true
		  && hasReason() == o.hasReason()
		  && hasWinner() == o.hasWinner()
		  && hasLoser() == o.hasLoser()
		  && hasBoard() == o.hasBoard()
		  && EqualityTester.areEqual(getReason(), o.getReason(), _reason_METADATA.typ())
		  && EqualityTester.areEqual(getWinner(), o.getWinner(), _winner_METADATA.typ())
		  && EqualityTester.areEqual(getLoser(), o.getLoser(), _loser_METADATA.typ())
		  && EqualityTester.areEqual(getBoard(), o.getBoard(), _board_METADATA.typ());
	}

	@Override
	public GameOver deepCopy() {
		final GameOver out = new GameOver(
			getReason(),
			getWinner(),
			getLoser(),
			DeepCopyer.deepCopy(getBoard(), _board_METADATA.typ()));
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
				visitor.beginVisit(this, 4);
				visitor.visit(getReason(), _reason_METADATA);
				visitor.visit(getWinner(), _winner_METADATA);
				visitor.visit(getLoser(), _loser_METADATA);
				visitor.visit(getBoard(), _board_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isReasonSet(FieldSetDepth.SHALLOW))
					visitor.visit(getReason(), _reason_METADATA);
				if (_isWinnerSet(FieldSetDepth.SHALLOW))
					visitor.visit(getWinner(), _winner_METADATA);
				if (_isLoserSet(FieldSetDepth.SHALLOW))
					visitor.visit(getLoser(), _loser_METADATA);
				if (_isBoardSet(FieldSetDepth.SHALLOW))
					visitor.visit(getBoard(), _board_METADATA);
				visitor.endVisit();
				break;
			}
		}
	}

	@Override
	public boolean _readField(final short fieldId,
	                         final Object context,
	                         final Reader reader) throws java.io.IOException {
		switch(fieldId) {
			case (_reason_ID):
				setReason((String)reader.readStringField(_reason_METADATA, context));
				return true;
			case (_winner_ID):
				setWinner((String)reader.readStringField(_winner_METADATA, context));
				return true;
			case (_loser_ID):
				setLoser((String)reader.readStringField(_loser_METADATA, context));
				return true;
			case (_board_ID):
				setBoard((GameState)reader.readMgenObjectField(_board_METADATA, context));
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

	public boolean _isReasonSet(final FieldSetDepth fieldSetDepth) {
		return m_reason != null;
	}

	public boolean _isWinnerSet(final FieldSetDepth fieldSetDepth) {
		return m_winner != null;
	}

	public boolean _isLoserSet(final FieldSetDepth fieldSetDepth) {
		return m_loser != null;
	}

	public boolean _isBoardSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_board != null;
		} else {
			return m_board != null && Validator.validateFieldDeep(getBoard(), _board_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_reason_ID):
				return _isReasonSet(depth);
			case (_winner_ID):
				return _isWinnerSet(depth);
			case (_loser_ID):
				return _isLoserSet(depth);
			case (_board_ID):
				return _isBoardSet(depth);
			default:
				return false;
		}
	}

	public GameOver _setReasonSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_reason = m_reason != null ? m_reason : "";
		else
			m_reason = null;
		return this;
	}

	public GameOver _setWinnerSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_winner = m_winner != null ? m_winner : "";
		else
			m_winner = null;
		return this;
	}

	public GameOver _setLoserSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_loser = m_loser != null ? m_loser : "";
		else
			m_loser = null;
		return this;
	}

	public GameOver _setBoardSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_board = m_board != null ? m_board : new GameState();
		else
			m_board = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getBoard(), _board_METADATA.typ());
		return this;
	}

	public GameOver _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setReasonSet(state, depth);
		_setWinnerSet(state, depth);
		_setLoserSet(state, depth);
		_setBoardSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isBoardSet(FieldSetDepth.SHALLOW) || _isBoardSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isReasonSet(depth) ? 1 : 0;
		out += _isWinnerSet(depth) ? 1 : 0;
		out += _isLoserSet(depth) ? 1 : 0;
		out += _isBoardSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_reason_ID):
				return _reason_METADATA;
			case (_winner_ID):
				return _winner_METADATA;
			case (_loser_ID):
				return _loser_METADATA;
			case (_board_ID):
				return _board_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("reason"):
				return _reason_METADATA;
			case ("winner"):
				return _winner_METADATA;
			case ("loser"):
				return _loser_METADATA;
			case ("board"):
				return _board_METADATA;
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
		  

	public static final long _TYPE_ID = 1789310646936949934L;

	public static final long[] _TYPE_IDS = { se.yabs.aichallenge.Message._TYPE_ID, se.yabs.aichallenge.GameMessage._TYPE_ID, se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_ID, se.yabs.aichallenge.battleship.GameOver._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -7695;

	public static final short[] _TYPE_IDS_16BIT = { se.yabs.aichallenge.Message._TYPE_ID_16BIT, se.yabs.aichallenge.GameMessage._TYPE_ID_16BIT, se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_ID_16BIT, se.yabs.aichallenge.battleship.GameOver._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "4fE";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.yabs.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.yabs.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64, se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_ID_16BIT_BASE64, se.yabs.aichallenge.battleship.GameOver._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.yabs.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.yabs.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64 + se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_ID_16BIT_BASE64 + se.yabs.aichallenge.battleship.GameOver._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.yabs.aichallenge.battleship.GameOver";

	public static final String[] _TYPE_NAMES = { se.yabs.aichallenge.Message._TYPE_NAME, se.yabs.aichallenge.GameMessage._TYPE_NAME, se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_NAME, se.yabs.aichallenge.battleship.GameOver._TYPE_NAME };

	public static final Field _reason_METADATA = new Field("se.yabs.aichallenge.battleship.GameOver", "reason", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-15867);
	public static final Field _winner_METADATA = new Field("se.yabs.aichallenge.battleship.GameOver", "winner", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-7291);
	public static final Field _loser_METADATA = new Field("se.yabs.aichallenge.battleship.GameOver", "loser", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)9621);
	public static final Field _board_METADATA = new Field("se.yabs.aichallenge.battleship.GameOver", "board", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.yabs.aichallenge.battleship.GameState", 7830028132583391513L), null, (short)12077);

	public static final short _reason_ID = (short)-15867;
	public static final short _winner_ID = (short)-7291;
	public static final short _loser_ID = (short)9621;
	public static final short _board_ID = (short)12077;

	public static final Field[] _FIELDS = { _reason_METADATA, _winner_METADATA, _loser_METADATA, _board_METADATA };

}
