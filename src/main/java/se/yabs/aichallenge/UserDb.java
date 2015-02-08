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
import se.culvertsoft.mgen.javapack.util.Validator;
import se.culvertsoft.mgen.javapack.util.Marker;
/* custom_imports_begin *//* custom_imports_end */

public class UserDb extends se.culvertsoft.mgen.javapack.classes.MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private java.util.HashMap<String, User> m_users;

	public UserDb() {
		super();
		m_users = new java.util.HashMap<String, User>();
	}

	public UserDb(final java.util.HashMap<String, User> users) {
		m_users = users;
	}

	public java.util.HashMap<String, User> getUsers() {
		return m_users;
	}

	public boolean hasUsers() {
		return _isUsersSet(FieldSetDepth.SHALLOW);
	}

	public UserDb unsetUsers() {
		_setUsersSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public UserDb setUsers(final java.util.HashMap<String, User> users) {
		m_users = users;
		return this;
	}

	/* custom_methods_begin */
	
	public boolean login(final String userName, final String password) {
		if (m_users.containsKey(userName)) {
			return m_users.get(userName).getPassword().equals(password);
		} else {
			final User user = new User();
			user.setGameHistory(new java.util.ArrayList<GamePlayed>());
			user.setName(userName);
			user.setPassword(password);
			m_users.put(userName, user);
			return true;
		}
	}
	
	/* custom_methods_end */

	@Override
	public String toString() {
		return se.culvertsoft.mgen.javapack.util.Stringifyer.toString(this);
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1439317237;
		result = _isUsersSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getUsers(), _users_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (UserDb.class != other.getClass()) return false;
		final UserDb o = (UserDb)other;
		return true
		  && hasUsers() == o.hasUsers()
		  && EqualityTester.areEqual(getUsers(), o.getUsers(), _users_METADATA.typ());
	}

	@Override
	public UserDb deepCopy() {
		final UserDb out = new UserDb(
			DeepCopyer.deepCopy(getUsers(), _users_METADATA.typ()));
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
				visitor.visit(getUsers(), _users_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isUsersSet(FieldSetDepth.SHALLOW))
					visitor.visit(getUsers(), _users_METADATA);
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
			case (_users_ID):
				setUsers((java.util.HashMap<String, User>)reader.readMapField(_users_METADATA, context));
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

	public boolean _isUsersSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_users != null;
		} else {
			return m_users != null && Validator.validateFieldDeep(getUsers(), _users_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_users_ID):
				return _isUsersSet(depth);
			default:
				return false;
		}
	}

	public UserDb _setUsersSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_users = m_users != null ? m_users : new java.util.HashMap<String, User>();
		else
			m_users = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getUsers(), _users_METADATA.typ());
		return this;
	}

	public UserDb _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setUsersSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isUsersSet(FieldSetDepth.SHALLOW) || _isUsersSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isUsersSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_users_ID):
				return _users_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("users"):
				return _users_METADATA;
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
		  

	public static final long _TYPE_ID = 263403507581591043L;

	public static final long[] _TYPE_IDS = { se.yabs.aichallenge.UserDb._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -577;

	public static final short[] _TYPE_IDS_16BIT = { se.yabs.aichallenge.UserDb._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "/b8";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.yabs.aichallenge.UserDb._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.yabs.aichallenge.UserDb._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.yabs.aichallenge.UserDb";

	public static final String[] _TYPE_NAMES = { se.yabs.aichallenge.UserDb._TYPE_NAME };

	public static final Field _users_METADATA = new Field("se.yabs.aichallenge.UserDb", "users", new se.culvertsoft.mgen.api.model.MapType(se.culvertsoft.mgen.api.model.StringType.INSTANCE, new se.culvertsoft.mgen.api.model.RuntimeClassType("se.yabs.aichallenge.User", 5020658785704657625L)), null, (short)-23008);

	public static final short _users_ID = (short)-23008;

	public static final Field[] _FIELDS = { _users_METADATA };

}
