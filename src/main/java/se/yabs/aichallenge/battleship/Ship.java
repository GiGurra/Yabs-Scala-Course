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

public class Ship extends se.culvertsoft.mgen.javapack.classes.MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private java.util.List<Segment> m_points;

	public Ship() {
		super();
		m_points = new java.util.ArrayList<Segment>();
	}

	public Ship(final java.util.List<Segment> points) {
		m_points = points;
	}

	public java.util.List<Segment> getPoints() {
		return m_points;
	}

	public boolean hasPoints() {
		return _isPointsSet(FieldSetDepth.SHALLOW);
	}

	public Ship unsetPoints() {
		_setPointsSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Ship setPoints(final java.util.List<Segment> points) {
		m_points = points;
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
		int result = -1460904086;
		result = _isPointsSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPoints(), _points_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Ship.class != other.getClass()) return false;
		final Ship o = (Ship)other;
		return true
		  && hasPoints() == o.hasPoints()
		  && EqualityTester.areEqual(getPoints(), o.getPoints(), _points_METADATA.typ());
	}

	@Override
	public Ship deepCopy() {
		final Ship out = new Ship(
			DeepCopyer.deepCopy(getPoints(), _points_METADATA.typ()));
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
				visitor.visit(getPoints(), _points_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isPointsSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPoints(), _points_METADATA);
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
			case (_points_ID):
				setPoints((java.util.List<Segment>)reader.readListField(_points_METADATA, context));
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

	public boolean _isPointsSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_points != null;
		} else {
			return m_points != null && Validator.validateFieldDeep(getPoints(), _points_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_points_ID):
				return _isPointsSet(depth);
			default:
				return false;
		}
	}

	public Ship _setPointsSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_points = m_points != null ? m_points : new java.util.ArrayList<Segment>();
		else
			m_points = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getPoints(), _points_METADATA.typ());
		return this;
	}

	public Ship _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setPointsSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isPointsSet(FieldSetDepth.SHALLOW) || _isPointsSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isPointsSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_points_ID):
				return _points_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("points"):
				return _points_METADATA;
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
		  

	public static final long _TYPE_ID = 6060363830252660056L;

	public static final long[] _TYPE_IDS = { se.yabs.aichallenge.battleship.Ship._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -7235;

	public static final short[] _TYPE_IDS_16BIT = { se.yabs.aichallenge.battleship.Ship._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "470";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.yabs.aichallenge.battleship.Ship._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.yabs.aichallenge.battleship.Ship._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.yabs.aichallenge.battleship.Ship";

	public static final String[] _TYPE_NAMES = { se.yabs.aichallenge.battleship.Ship._TYPE_NAME };

	public static final Field _points_METADATA = new Field("se.yabs.aichallenge.battleship.Ship", "points", new se.culvertsoft.mgen.api.model.ListType(new se.culvertsoft.mgen.api.model.RuntimeClassType("se.yabs.aichallenge.battleship.Segment", 9066045619354066259L)), null, (short)-26865);

	public static final short _points_ID = (short)-26865;

	public static final Field[] _FIELDS = { _points_METADATA };

}
