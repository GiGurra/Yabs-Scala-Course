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
/* custom_imports_begin *//* custom_imports_end */

public class Vec2 extends se.culvertsoft.mgen.javapack.classes.MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private int m_x;
	private int m_y;
	private boolean _m_x_isSet;
	private boolean _m_y_isSet;

	public Vec2() {
		super();
		m_x = 0;
		m_y = 0;
		_m_x_isSet = false;
		_m_y_isSet = false;
	}

	public Vec2(final int x,
				final int y) {
		m_x = x;
		m_y = y;
		_m_x_isSet = true;
		_m_y_isSet = true;
	}

	public int getX() {
		return m_x;
	}

	public int getY() {
		return m_y;
	}

	public boolean hasX() {
		return _isXSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasY() {
		return _isYSet(FieldSetDepth.SHALLOW);
	}

	public Vec2 unsetX() {
		_setXSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Vec2 unsetY() {
		_setYSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Vec2 setX(final int x) {
		m_x = x;
		_m_x_isSet = true;
		return this;
	}

	public Vec2 setY(final int y) {
		m_y = y;
		_m_y_isSet = true;
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
		int result = -1460817844;
		result = _isXSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getX(), _x_METADATA.typ())) : result;
		result = _isYSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getY(), _y_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Vec2.class != other.getClass()) return false;
		final Vec2 o = (Vec2)other;
		return true
		  && hasX() == o.hasX()
		  && hasY() == o.hasY()
		  && getX() == o.getX()
		  && getY() == o.getY();
	}

	@Override
	public Vec2 deepCopy() {
		final Vec2 out = new Vec2(
			getX(),
			getY());
		if (!hasX()) out.unsetX();
		if (!hasY()) out.unsetY();
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
				visitor.visit(getX(), _x_METADATA);
				visitor.visit(getY(), _y_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isXSet(FieldSetDepth.SHALLOW))
					visitor.visit(getX(), _x_METADATA);
				if (_isYSet(FieldSetDepth.SHALLOW))
					visitor.visit(getY(), _y_METADATA);
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
			case (_x_ID):
				setX((int)reader.readInt32Field(_x_METADATA, context));
				return true;
			case (_y_ID):
				setY((int)reader.readInt32Field(_y_METADATA, context));
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

	public boolean _isXSet(final FieldSetDepth fieldSetDepth) {
		return _m_x_isSet;
	}

	public boolean _isYSet(final FieldSetDepth fieldSetDepth) {
		return _m_y_isSet;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_x_ID):
				return _isXSet(depth);
			case (_y_ID):
				return _isYSet(depth);
			default:
				return false;
		}
	}

	public Vec2 _setXSet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_x = 0;
		_m_x_isSet = state;
		return this;
	}

	public Vec2 _setYSet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_y = 0;
		_m_y_isSet = state;
		return this;
	}

	public Vec2 _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setXSet(state, depth);
		_setYSet(state, depth);
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
		out += _isXSet(depth) ? 1 : 0;
		out += _isYSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_x_ID):
				return _x_METADATA;
			case (_y_ID):
				return _y_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("x"):
				return _x_METADATA;
			case ("y"):
				return _y_METADATA;
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
		  

	public static final long _TYPE_ID = 5114268100851014382L;

	public static final long[] _TYPE_IDS = { se.yabs.aichallenge.battleship.Vec2._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -25884;

	public static final short[] _TYPE_IDS_16BIT = { se.yabs.aichallenge.battleship.Vec2._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "muQ";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.yabs.aichallenge.battleship.Vec2._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.yabs.aichallenge.battleship.Vec2._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.yabs.aichallenge.battleship.Vec2";

	public static final String[] _TYPE_NAMES = { se.yabs.aichallenge.battleship.Vec2._TYPE_NAME };

	public static final Field _x_METADATA = new Field("se.yabs.aichallenge.battleship.Vec2", "x", se.culvertsoft.mgen.api.model.Int32Type.INSTANCE, null, (short)7791);
	public static final Field _y_METADATA = new Field("se.yabs.aichallenge.battleship.Vec2", "y", se.culvertsoft.mgen.api.model.Int32Type.INSTANCE, null, (short)3662);

	public static final short _x_ID = (short)7791;
	public static final short _y_ID = (short)3662;

	public static final Field[] _FIELDS = { _x_METADATA, _y_METADATA };

}
