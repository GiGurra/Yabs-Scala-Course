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
import se.culvertsoft.mgen.javapack.util.DeepCopyer;
import se.culvertsoft.mgen.javapack.util.EqualityTester;
/* custom_imports_begin *//* custom_imports_end */

public class WelcomeMessage extends Message /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private String m_msg;
	private java.util.ArrayList<GameSelection> m_availableGames;

	public WelcomeMessage() {
		super();
		m_msg = null;
		m_availableGames = null;
	}

	public WelcomeMessage(final String msg,
				final java.util.ArrayList<GameSelection> availableGames) {
		m_msg = msg;
		m_availableGames = availableGames;
	}

	public String getMsg() {
		return m_msg;
	}

	public java.util.ArrayList<GameSelection> getAvailableGames() {
		return m_availableGames;
	}

	public boolean hasMsg() {
		return _isMsgSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasAvailableGames() {
		return _isAvailableGamesSet(FieldSetDepth.SHALLOW);
	}

	public WelcomeMessage unsetMsg() {
		_setMsgSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public WelcomeMessage unsetAvailableGames() {
		_setAvailableGamesSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public WelcomeMessage setMsg(final String msg) {
		m_msg = msg;
		return this;
	}

	public WelcomeMessage setAvailableGames(final java.util.ArrayList<GameSelection> availableGames) {
		m_availableGames = availableGames;
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
		int result = 261344657;
		result = _isMsgSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getMsg(), _msg_METADATA.typ())) : result;
		result = _isAvailableGamesSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getAvailableGames(), _availableGames_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (WelcomeMessage.class != other.getClass()) return false;
		final WelcomeMessage o = (WelcomeMessage)other;
		return true
		  && hasMsg() == o.hasMsg()
		  && hasAvailableGames() == o.hasAvailableGames()
		  && EqualityTester.areEqual(getMsg(), o.getMsg(), _msg_METADATA.typ())
		  && EqualityTester.areEqual(getAvailableGames(), o.getAvailableGames(), _availableGames_METADATA.typ());
	}

	@Override
	public WelcomeMessage deepCopy() {
		final WelcomeMessage out = new WelcomeMessage(
			getMsg(),
			DeepCopyer.deepCopy(getAvailableGames(), _availableGames_METADATA.typ()));
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
				visitor.visit(getMsg(), _msg_METADATA);
				visitor.visit(getAvailableGames(), _availableGames_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isMsgSet(FieldSetDepth.SHALLOW))
					visitor.visit(getMsg(), _msg_METADATA);
				if (_isAvailableGamesSet(FieldSetDepth.SHALLOW))
					visitor.visit(getAvailableGames(), _availableGames_METADATA);
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
			case (_msg_ID):
				setMsg((String)reader.readStringField(_msg_METADATA, context));
				return true;
			case (_availableGames_ID):
				setAvailableGames((java.util.ArrayList<GameSelection>)reader.readListField(_availableGames_METADATA, context));
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

	public boolean _isMsgSet(final FieldSetDepth fieldSetDepth) {
		return m_msg != null;
	}

	public boolean _isAvailableGamesSet(final FieldSetDepth fieldSetDepth) {
		return m_availableGames != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_msg_ID):
				return _isMsgSet(depth);
			case (_availableGames_ID):
				return _isAvailableGamesSet(depth);
			default:
				return false;
		}
	}

	public WelcomeMessage _setMsgSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_msg = m_msg != null ? m_msg : "";
		else
			m_msg = null;
		return this;
	}

	public WelcomeMessage _setAvailableGamesSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_availableGames = m_availableGames != null ? m_availableGames : new java.util.ArrayList<GameSelection>();
		else
			m_availableGames = null;
		return this;
	}

	public WelcomeMessage _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setMsgSet(state, depth);
		_setAvailableGamesSet(state, depth);
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
		out += _isMsgSet(depth) ? 1 : 0;
		out += _isAvailableGamesSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_msg_ID):
				return _msg_METADATA;
			case (_availableGames_ID):
				return _availableGames_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("msg"):
				return _msg_METADATA;
			case ("availableGames"):
				return _availableGames_METADATA;
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
		  

	public static final long _TYPE_ID = 519923755957276911L;

	public static final long[] _TYPE_IDS = { se.yabs.aichallenge.Message._TYPE_ID, se.yabs.aichallenge.WelcomeMessage._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 1532;

	public static final short[] _TYPE_IDS_16BIT = { se.yabs.aichallenge.Message._TYPE_ID_16BIT, se.yabs.aichallenge.WelcomeMessage._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "Bfw";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.yabs.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.yabs.aichallenge.WelcomeMessage._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.yabs.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.yabs.aichallenge.WelcomeMessage._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.yabs.aichallenge.WelcomeMessage";

	public static final String[] _TYPE_NAMES = { se.yabs.aichallenge.Message._TYPE_NAME, se.yabs.aichallenge.WelcomeMessage._TYPE_NAME };

	public static final Field _msg_METADATA = new Field("se.yabs.aichallenge.WelcomeMessage", "msg", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)21741);
	public static final Field _availableGames_METADATA = new Field("se.yabs.aichallenge.WelcomeMessage", "availableGames", new se.culvertsoft.mgen.api.model.ListType(se.yabs.aichallenge.GameSelection._TYPE), null, (short)-11213);

	public static final short _msg_ID = (short)21741;
	public static final short _availableGames_ID = (short)-11213;

	public static final Field[] _FIELDS = { _msg_METADATA, _availableGames_METADATA };

}
