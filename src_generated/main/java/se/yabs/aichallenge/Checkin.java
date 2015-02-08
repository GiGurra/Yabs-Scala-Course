/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
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
import se.culvertsoft.mgen.javapack.util.EqualityTester;
/* custom_imports_begin *//* custom_imports_end */

public class Checkin extends Message /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private String m_name;
	private GameSelection m_game;

	public Checkin() {
		super();
		m_name = null;
		m_game = null;
	}

	public Checkin(final String name,
				final GameSelection game) {
		m_name = name;
		m_game = game;
	}

	public String getName() {
		return m_name;
	}

	public GameSelection getGame() {
		return m_game;
	}

	public boolean hasName() {
		return _isNameSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasGame() {
		return _isGameSet(FieldSetDepth.SHALLOW);
	}

	public Checkin unsetName() {
		_setNameSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Checkin unsetGame() {
		_setGameSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Checkin setName(final String name) {
		m_name = name;
		return this;
	}

	public Checkin setGame(final GameSelection game) {
		m_game = game;
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
		int result = -1736332703;
		result = _isNameSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getName(), _name_METADATA.typ())) : result;
		result = _isGameSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getGame(), _game_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Checkin.class != other.getClass()) return false;
		final Checkin o = (Checkin)other;
		return true
		  && hasName() == o.hasName()
		  && hasGame() == o.hasGame()
		  && EqualityTester.areEqual(getName(), o.getName(), _name_METADATA.typ())
		  && getGame() == o.getGame();
	}

	@Override
	public Checkin deepCopy() {
		final Checkin out = new Checkin(
			getName(),
			getGame());
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
				visitor.beginVisit(this, 2);
				visitor.visit(getName(), _name_METADATA);
				visitor.visit(getGame(), _game_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isNameSet(FieldSetDepth.SHALLOW))
					visitor.visit(getName(), _name_METADATA);
				if (_isGameSet(FieldSetDepth.SHALLOW))
					visitor.visit(getGame(), _game_METADATA);
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
			case (_name_ID):
				setName((String)reader.readStringField(_name_METADATA, context));
				return true;
			case (_game_ID):
				setGame((GameSelection)reader.readEnumField(_game_METADATA, context));
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

	public boolean _isNameSet(final FieldSetDepth fieldSetDepth) {
		return m_name != null;
	}

	public boolean _isGameSet(final FieldSetDepth fieldSetDepth) {
		return m_game != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_name_ID):
				return _isNameSet(depth);
			case (_game_ID):
				return _isGameSet(depth);
			default:
				return false;
		}
	}

	public Checkin _setNameSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_name = m_name != null ? m_name : "";
		else
			m_name = null;
		return this;
	}

	public Checkin _setGameSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_game = m_game != null ? m_game : GameSelection.UNKNOWN;
		else
			m_game = null;
		return this;
	}

	public Checkin _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setNameSet(state, depth);
		_setGameSet(state, depth);
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
		out += _isNameSet(depth) ? 1 : 0;
		out += _isGameSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_name_ID):
				return _name_METADATA;
			case (_game_ID):
				return _game_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("name"):
				return _name_METADATA;
			case ("game"):
				return _game_METADATA;
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
		  

	public static final long _TYPE_ID = 4589873252555491528L;

	public static final long[] _TYPE_IDS = { se.yabs.aichallenge.Message._TYPE_ID, se.yabs.aichallenge.Checkin._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 22716;

	public static final short[] _TYPE_IDS_16BIT = { se.yabs.aichallenge.Message._TYPE_ID_16BIT, se.yabs.aichallenge.Checkin._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "WLw";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.yabs.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.yabs.aichallenge.Checkin._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.yabs.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.yabs.aichallenge.Checkin._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.yabs.aichallenge.Checkin";

	public static final String[] _TYPE_NAMES = { se.yabs.aichallenge.Message._TYPE_NAME, se.yabs.aichallenge.Checkin._TYPE_NAME };

	public static final Field _name_METADATA = new Field("se.yabs.aichallenge.Checkin", "name", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-28058);
	public static final Field _game_METADATA = new Field("se.yabs.aichallenge.Checkin", "game", se.yabs.aichallenge.GameSelection._TYPE, null, (short)24849);

	public static final short _name_ID = (short)-28058;
	public static final short _game_ID = (short)24849;

	public static final Field[] _FIELDS = { _name_METADATA, _game_METADATA };

}
