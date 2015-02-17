/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/User.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

User::User() : 
		_m_name_isSet(false),
		_m_password_isSet(false) {
}

User::User(const std::string& name, 
			const std::string& password) : 
		m_name(name),
		m_password(password),
		_m_name_isSet(true),
		_m_password_isSet(true) {
}

User::~User() {
}

const std::string& User::getName() const {
	return m_name;
}

const std::string& User::getPassword() const {
	return m_password;
}

std::string& User::getNameMutable() {
	_m_name_isSet = true;
	return m_name;
}

std::string& User::getPasswordMutable() {
	_m_password_isSet = true;
	return m_password;
}

User& User::setName(const std::string& name) {
	m_name = name;
	_m_name_isSet = true;
	return *this;
}

User& User::setPassword(const std::string& password) {
	m_password = password;
	_m_password_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool User::hasName() const {
	return _isNameSet(mgen::SHALLOW);
}

bool User::hasPassword() const {
	return _isPasswordSet(mgen::SHALLOW);
}

User& User::unsetName() {
	_setNameSet(false, mgen::SHALLOW);
	return *this;
}

User& User::unsetPassword() {
	_setPasswordSet(false, mgen::SHALLOW);
	return *this;
}

bool User::operator==(const User& other) const {
	return true
		 && _isNameSet(mgen::SHALLOW) == other._isNameSet(mgen::SHALLOW)
		 && _isPasswordSet(mgen::SHALLOW) == other._isPasswordSet(mgen::SHALLOW)
		 && getName() == other.getName()
		 && getPassword() == other.getPassword();
}

bool User::operator!=(const User& other) const {
	return !(*this == other);
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
		  
const mgen::Field * User::_fieldById(const short id) const {
	switch (id) {
	case _field_name_id:
		return &_field_name_metadata();
	case _field_password_id:
		return &_field_password_metadata();
	default:
		return 0;
	}
}

const mgen::Field * User::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("name", &User::_field_name_metadata())("password", &User::_field_password_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long User::_typeId() const {
	return _type_id;
}

const std::string& User::_typeName() const {
	return _type_name();
}

const short User::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& User::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& User::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& User::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& User::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& User::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& User::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& User::_fieldMetadatas() const {
	return _field_metadatas();
}

User& User::_setNameSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_name = "";
	_m_name_isSet = state;
	return *this;
}

User& User::_setPasswordSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_password = "";
	_m_password_isSet = state;
	return *this;
}

User& User::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setNameSet(state, depth);
	_setPasswordSet(state, depth);
	return *this;
}

int User::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isNameSet(depth) ? 1 : 0;
	out += _isPasswordSet(depth) ? 1 : 0;
	return out;
}

bool User::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_name_id):
			return _isNameSet(depth);
		case (_field_password_id):
			return _isPasswordSet(depth);
		default:
			return false;
	}
}

bool User::_isNameSet(const mgen::FieldSetDepth depth) const {
	return _m_name_isSet;
}

bool User::_isPasswordSet(const mgen::FieldSetDepth depth) const {
	return _m_password_isSet;
}

bool User::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool User::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const User&>(other) == *this;
}

User * User::_deepCopy() const {
	return new User(*this);
}

mgen::MGenBase * User::_newInstance() {
	return new User;
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
		  
const std::string& User::_type_name() {
	static const std::string out("se.yabs.aichallenge.User");
	return out;
}

const std::vector<long long>& User::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5020658785704657625LL;
	return out;
}

const std::vector<short>& User::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -29120;
	return out;
}

const std::vector<std::string>& User::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.User";
	return out;
}

const std::vector<std::string>& User::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "jkA";
	return out;
}

const std::string& User::_type_ids_16bit_base64_string() {
	static const std::string out("jkA");
	return out;
}

const std::string& User::_type_id_16bit_base64() {
	static const std::string out("jkA");
	return out;
}

const std::vector<mgen::Field>& User::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_name_metadata() << _field_password_metadata();
	return out;
}

const mgen::Field& User::_field_name_metadata() {
	static const mgen::Field out(-28058, "name");
	return out;
}

const mgen::Field& User::_field_password_metadata() {
	static const mgen::Field out(5242, "password");
	return out;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

