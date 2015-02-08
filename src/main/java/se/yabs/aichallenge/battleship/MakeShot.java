/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
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

public class MakeShot extends BattleshipMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private Shot m_shot;

	public MakeShot() {
		super();
		m_shot = null;
	}

	public MakeShot(final Shot shot) {
		m_shot = shot;
	}

	public Shot getShot() {
		return m_shot;
	}

	public boolean hasShot() {
		return _isShotSet(FieldSetDepth.SHALLOW);
	}

	public MakeShot unsetShot() {
		_setShotSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public MakeShot setShot(final Shot shot) {
		m_shot = shot;
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
		int result = -1260524490;
		result = _isShotSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getShot(), _shot_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (MakeShot.class != other.getClass()) return false;
		final MakeShot o = (MakeShot)other;
		return true
		  && hasShot() == o.hasShot()
		  && EqualityTester.areEqual(getShot(), o.getShot(), _shot_METADATA.typ());
	}

	@Override
	public MakeShot deepCopy() {
		final MakeShot out = new MakeShot(
			DeepCopyer.deepCopy(getShot(), _shot_METADATA.typ()));
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
				visitor.beginVisit(this, 1);
				visitor.visit(getShot(), _shot_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isShotSet(FieldSetDepth.SHALLOW))
					visitor.visit(getShot(), _shot_METADATA);
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
			case (_shot_ID):
				setShot((Shot)reader.readMgenObjectField(_shot_METADATA, context));
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

	public boolean _isShotSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_shot != null;
		} else {
			return m_shot != null && Validator.validateFieldDeep(getShot(), _shot_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_shot_ID):
				return _isShotSet(depth);
			default:
				return false;
		}
	}

	public MakeShot _setShotSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_shot = m_shot != null ? m_shot : new Shot();
		else
			m_shot = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getShot(), _shot_METADATA.typ());
		return this;
	}

	public MakeShot _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setShotSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isShotSet(FieldSetDepth.SHALLOW) || _isShotSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isShotSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_shot_ID):
				return _shot_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("shot"):
				return _shot_METADATA;
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
		  

	public static final long _TYPE_ID = 3005587010339637453L;

	public static final long[] _TYPE_IDS = { se.yabs.aichallenge.Message._TYPE_ID, se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_ID, se.yabs.aichallenge.battleship.MakeShot._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 32406;

	public static final short[] _TYPE_IDS_16BIT = { se.yabs.aichallenge.Message._TYPE_ID_16BIT, se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_ID_16BIT, se.yabs.aichallenge.battleship.MakeShot._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "fpY";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.yabs.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_ID_16BIT_BASE64, se.yabs.aichallenge.battleship.MakeShot._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.yabs.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_ID_16BIT_BASE64 + se.yabs.aichallenge.battleship.MakeShot._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.yabs.aichallenge.battleship.MakeShot";

	public static final String[] _TYPE_NAMES = { se.yabs.aichallenge.Message._TYPE_NAME, se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_NAME, se.yabs.aichallenge.battleship.MakeShot._TYPE_NAME };

	public static final Field _shot_METADATA = new Field("se.yabs.aichallenge.battleship.MakeShot", "shot", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.yabs.aichallenge.battleship.Shot", 5723027387374372704L), null, (short)19108);

	public static final short _shot_ID = (short)19108;

	public static final Field[] _FIELDS = { _shot_METADATA };

}
