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

public class Player extends se.culvertsoft.mgen.javapack.classes.MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private String m_uuid;
	private String m_name;
	private Team m_team;
	private java.util.ArrayList<Shot> m_shots;

	public Player() {
		super();
		m_uuid = null;
		m_name = null;
		m_team = null;
		m_shots = null;
	}

	public Player(final String uuid,
				final String name,
				final Team team,
				final java.util.ArrayList<Shot> shots) {
		m_uuid = uuid;
		m_name = name;
		m_team = team;
		m_shots = shots;
	}

	public String getUuid() {
		return m_uuid;
	}

	public String getName() {
		return m_name;
	}

	public Team getTeam() {
		return m_team;
	}

	public java.util.ArrayList<Shot> getShots() {
		return m_shots;
	}

	public boolean hasUuid() {
		return _isUuidSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasName() {
		return _isNameSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasTeam() {
		return _isTeamSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasShots() {
		return _isShotsSet(FieldSetDepth.SHALLOW);
	}

	public Player unsetUuid() {
		_setUuidSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Player unsetName() {
		_setNameSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Player unsetTeam() {
		_setTeamSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Player unsetShots() {
		_setShotsSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Player setUuid(final String uuid) {
		m_uuid = uuid;
		return this;
	}

	public Player setName(final String name) {
		m_name = name;
		return this;
	}

	public Player setTeam(final Team team) {
		m_team = team;
		return this;
	}

	public Player setShots(final java.util.ArrayList<Shot> shots) {
		m_shots = shots;
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
		int result = 443059343;
		result = _isUuidSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getUuid(), _uuid_METADATA.typ())) : result;
		result = _isNameSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getName(), _name_METADATA.typ())) : result;
		result = _isTeamSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getTeam(), _team_METADATA.typ())) : result;
		result = _isShotsSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getShots(), _shots_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Player.class != other.getClass()) return false;
		final Player o = (Player)other;
		return true
		  && hasUuid() == o.hasUuid()
		  && hasName() == o.hasName()
		  && hasTeam() == o.hasTeam()
		  && hasShots() == o.hasShots()
		  && EqualityTester.areEqual(getUuid(), o.getUuid(), _uuid_METADATA.typ())
		  && EqualityTester.areEqual(getName(), o.getName(), _name_METADATA.typ())
		  && getTeam() == o.getTeam()
		  && EqualityTester.areEqual(getShots(), o.getShots(), _shots_METADATA.typ());
	}

	@Override
	public Player deepCopy() {
		final Player out = new Player(
			getUuid(),
			getName(),
			getTeam(),
			DeepCopyer.deepCopy(getShots(), _shots_METADATA.typ()));
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
				visitor.visit(getUuid(), _uuid_METADATA);
				visitor.visit(getName(), _name_METADATA);
				visitor.visit(getTeam(), _team_METADATA);
				visitor.visit(getShots(), _shots_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isUuidSet(FieldSetDepth.SHALLOW))
					visitor.visit(getUuid(), _uuid_METADATA);
				if (_isNameSet(FieldSetDepth.SHALLOW))
					visitor.visit(getName(), _name_METADATA);
				if (_isTeamSet(FieldSetDepth.SHALLOW))
					visitor.visit(getTeam(), _team_METADATA);
				if (_isShotsSet(FieldSetDepth.SHALLOW))
					visitor.visit(getShots(), _shots_METADATA);
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
			case (_uuid_ID):
				setUuid((String)reader.readStringField(_uuid_METADATA, context));
				return true;
			case (_name_ID):
				setName((String)reader.readStringField(_name_METADATA, context));
				return true;
			case (_team_ID):
				setTeam((Team)reader.readEnumField(_team_METADATA, context));
				return true;
			case (_shots_ID):
				setShots((java.util.ArrayList<Shot>)reader.readListField(_shots_METADATA, context));
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

	public boolean _isUuidSet(final FieldSetDepth fieldSetDepth) {
		return m_uuid != null;
	}

	public boolean _isNameSet(final FieldSetDepth fieldSetDepth) {
		return m_name != null;
	}

	public boolean _isTeamSet(final FieldSetDepth fieldSetDepth) {
		return m_team != null;
	}

	public boolean _isShotsSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_shots != null;
		} else {
			return m_shots != null && Validator.validateFieldDeep(getShots(), _shots_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_uuid_ID):
				return _isUuidSet(depth);
			case (_name_ID):
				return _isNameSet(depth);
			case (_team_ID):
				return _isTeamSet(depth);
			case (_shots_ID):
				return _isShotsSet(depth);
			default:
				return false;
		}
	}

	public Player _setUuidSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_uuid = m_uuid != null ? m_uuid : "";
		else
			m_uuid = null;
		return this;
	}

	public Player _setNameSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_name = m_name != null ? m_name : "";
		else
			m_name = null;
		return this;
	}

	public Player _setTeamSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_team = m_team != null ? m_team : Team.UNKNOWN;
		else
			m_team = null;
		return this;
	}

	public Player _setShotsSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_shots = m_shots != null ? m_shots : new java.util.ArrayList<Shot>();
		else
			m_shots = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getShots(), _shots_METADATA.typ());
		return this;
	}

	public Player _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setUuidSet(state, depth);
		_setNameSet(state, depth);
		_setTeamSet(state, depth);
		_setShotsSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isShotsSet(FieldSetDepth.SHALLOW) || _isShotsSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isUuidSet(depth) ? 1 : 0;
		out += _isNameSet(depth) ? 1 : 0;
		out += _isTeamSet(depth) ? 1 : 0;
		out += _isShotsSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_uuid_ID):
				return _uuid_METADATA;
			case (_name_ID):
				return _name_METADATA;
			case (_team_ID):
				return _team_METADATA;
			case (_shots_ID):
				return _shots_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("uuid"):
				return _uuid_METADATA;
			case ("name"):
				return _name_METADATA;
			case ("team"):
				return _team_METADATA;
			case ("shots"):
				return _shots_METADATA;
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
		  

	public static final long _TYPE_ID = 5600893473471973514L;

	public static final long[] _TYPE_IDS = { se.yabs.aichallenge.battleship.Player._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -15063;

	public static final short[] _TYPE_IDS_16BIT = { se.yabs.aichallenge.battleship.Player._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "xSk";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.yabs.aichallenge.battleship.Player._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.yabs.aichallenge.battleship.Player._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.yabs.aichallenge.battleship.Player";

	public static final String[] _TYPE_NAMES = { se.yabs.aichallenge.battleship.Player._TYPE_NAME };

	public static final Field _uuid_METADATA = new Field("se.yabs.aichallenge.battleship.Player", "uuid", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-11112);
	public static final Field _name_METADATA = new Field("se.yabs.aichallenge.battleship.Player", "name", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-28058);
	public static final Field _team_METADATA = new Field("se.yabs.aichallenge.battleship.Player", "team", se.yabs.aichallenge.battleship.Team._TYPE, null, (short)-1585);
	public static final Field _shots_METADATA = new Field("se.yabs.aichallenge.battleship.Player", "shots", new se.culvertsoft.mgen.api.model.ListType(new se.culvertsoft.mgen.api.model.RuntimeClassType("se.yabs.aichallenge.battleship.Shot", 5723027387374372704L)), null, (short)890);

	public static final short _uuid_ID = (short)-11112;
	public static final short _name_ID = (short)-28058;
	public static final short _team_ID = (short)-1585;
	public static final short _shots_ID = (short)890;

	public static final Field[] _FIELDS = { _uuid_METADATA, _name_METADATA, _team_METADATA, _shots_METADATA };

}
