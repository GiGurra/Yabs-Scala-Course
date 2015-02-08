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
/* custom_imports_begin *//* custom_imports_end */

public class PlaceShipsRequest extends BattleshipMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {

	public PlaceShipsRequest() {
		super();
	}

	/* custom_methods_begin *//* custom_methods_end */

	@Override
	public String toString() {
		return se.culvertsoft.mgen.javapack.util.Stringifyer.toString(this);
	}

	@Override
	public int hashCode() {
		return -883408623;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (PlaceShipsRequest.class != other.getClass()) return false;
		return true;
	}

	@Override
	public PlaceShipsRequest deepCopy() {
		return new PlaceShipsRequest();
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
				visitor.beginVisit(this, 0);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
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
			default:
				reader.handleUnknownField(null, context);
				return false;
		}
	}

	@Override
	public Field[] _fields() {
		return _FIELDS;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			default:
				return false;
		}
	}

	public PlaceShipsRequest _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
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
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
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
		  

	public static final long _TYPE_ID = 1314895258813520762L;

	public static final long[] _TYPE_IDS = { se.yabs.aichallenge.Message._TYPE_ID, se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_ID, se.yabs.aichallenge.battleship.PlaceShipsRequest._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -11413;

	public static final short[] _TYPE_IDS_16BIT = { se.yabs.aichallenge.Message._TYPE_ID_16BIT, se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_ID_16BIT, se.yabs.aichallenge.battleship.PlaceShipsRequest._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "02s";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.yabs.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_ID_16BIT_BASE64, se.yabs.aichallenge.battleship.PlaceShipsRequest._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.yabs.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_ID_16BIT_BASE64 + se.yabs.aichallenge.battleship.PlaceShipsRequest._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.yabs.aichallenge.battleship.PlaceShipsRequest";

	public static final String[] _TYPE_NAMES = { se.yabs.aichallenge.Message._TYPE_NAME, se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_NAME, se.yabs.aichallenge.battleship.PlaceShipsRequest._TYPE_NAME };

	public static final Field[] _FIELDS = {  };

}
