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

public class Segment extends se.culvertsoft.mgen.javapack.classes.MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private boolean m_alive;
	private Vec2 m_pos;
	private boolean _m_alive_isSet;

	public Segment() {
		super();
		m_alive = false;
		m_pos = null;
		_m_alive_isSet = false;
	}

	public Segment(final boolean alive,
				final Vec2 pos) {
		m_alive = alive;
		m_pos = pos;
		_m_alive_isSet = true;
	}

	public boolean getAlive() {
		return m_alive;
	}

	public Vec2 getPos() {
		return m_pos;
	}

	public boolean hasAlive() {
		return _isAliveSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasPos() {
		return _isPosSet(FieldSetDepth.SHALLOW);
	}

	public Segment unsetAlive() {
		_setAliveSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Segment unsetPos() {
		_setPosSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Segment setAlive(final boolean alive) {
		m_alive = alive;
		_m_alive_isSet = true;
		return this;
	}

	public Segment setPos(final Vec2 pos) {
		m_pos = pos;
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
		int result = -977738939;
		result = _isAliveSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getAlive(), _alive_METADATA.typ())) : result;
		result = _isPosSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPos(), _pos_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Segment.class != other.getClass()) return false;
		final Segment o = (Segment)other;
		return true
		  && hasAlive() == o.hasAlive()
		  && hasPos() == o.hasPos()
		  && getAlive() == o.getAlive()
		  && EqualityTester.areEqual(getPos(), o.getPos(), _pos_METADATA.typ());
	}

	@Override
	public Segment deepCopy() {
		final Segment out = new Segment(
			getAlive(),
			DeepCopyer.deepCopy(getPos(), _pos_METADATA.typ()));
		if (!hasAlive()) out.unsetAlive();
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
				visitor.visit(getAlive(), _alive_METADATA);
				visitor.visit(getPos(), _pos_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isAliveSet(FieldSetDepth.SHALLOW))
					visitor.visit(getAlive(), _alive_METADATA);
				if (_isPosSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPos(), _pos_METADATA);
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
			case (_alive_ID):
				setAlive((boolean)reader.readBooleanField(_alive_METADATA, context));
				return true;
			case (_pos_ID):
				setPos((Vec2)reader.readMgenObjectField(_pos_METADATA, context));
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

	public boolean _isAliveSet(final FieldSetDepth fieldSetDepth) {
		return _m_alive_isSet;
	}

	public boolean _isPosSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_pos != null;
		} else {
			return m_pos != null && Validator.validateFieldDeep(getPos(), _pos_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_alive_ID):
				return _isAliveSet(depth);
			case (_pos_ID):
				return _isPosSet(depth);
			default:
				return false;
		}
	}

	public Segment _setAliveSet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_alive = false;
		_m_alive_isSet = state;
		return this;
	}

	public Segment _setPosSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_pos = m_pos != null ? m_pos : new Vec2();
		else
			m_pos = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getPos(), _pos_METADATA.typ());
		return this;
	}

	public Segment _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setAliveSet(state, depth);
		_setPosSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isPosSet(FieldSetDepth.SHALLOW) || _isPosSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isAliveSet(depth) ? 1 : 0;
		out += _isPosSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_alive_ID):
				return _alive_METADATA;
			case (_pos_ID):
				return _pos_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("alive"):
				return _alive_METADATA;
			case ("pos"):
				return _pos_METADATA;
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
		  

	public static final long _TYPE_ID = 9066045619354066259L;

	public static final long[] _TYPE_IDS = { se.yabs.aichallenge.battleship.Segment._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 21591;

	public static final short[] _TYPE_IDS_16BIT = { se.yabs.aichallenge.battleship.Segment._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "VFc";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.yabs.aichallenge.battleship.Segment._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.yabs.aichallenge.battleship.Segment._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.yabs.aichallenge.battleship.Segment";

	public static final String[] _TYPE_NAMES = { se.yabs.aichallenge.battleship.Segment._TYPE_NAME };

	public static final Field _alive_METADATA = new Field("se.yabs.aichallenge.battleship.Segment", "alive", se.culvertsoft.mgen.api.model.BoolType.INSTANCE, null, (short)12135);
	public static final Field _pos_METADATA = new Field("se.yabs.aichallenge.battleship.Segment", "pos", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.yabs.aichallenge.battleship.Vec2", 5114268100851014382L), null, (short)16756);

	public static final short _alive_ID = (short)12135;
	public static final short _pos_ID = (short)16756;

	public static final Field[] _FIELDS = { _alive_METADATA, _pos_METADATA };

}
