/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/Login.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

Login::Login() : 
		_m_name_isSet(false) {
}

Login::Login(const std::string& name) : 
		m_name(name),
		_m_name_isSet(true) {
}

Login::~Login() {
}

const std::string& Login::getName() const {
	return m_name;
}

std::string& Login::getNameMutable() {
	_m_name_isSet = true;
	return m_name;
}

Login& Login::setName(const std::string& name) {
	m_name = name;
	_m_name_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Login::hasName() const {
	return _isNameSet(mgen::SHALLOW);
}

Login& Login::unsetName() {
	_setNameSet(false, mgen::SHALLOW);
	return *this;
}

bool Login::operator==(const Login& other) const {
	return true
		 && _isNameSet(mgen::SHALLOW) == other._isNameSet(mgen::SHALLOW)
		 && getName() == other.getName();
}

bool Login::operator!=(const Login& other) const {
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
		  
const mgen::Field * Login::_fieldById(const short id) const {
	switch (id) {
	case _field_name_id:
		return &_field_name_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Login::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("name", &Login::_field_name_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Login::_typeId() const {
	return _type_id;
}

const std::string& Login::_typeName() const {
	return _type_name();
}

const short Login::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Login::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Login::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Login::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Login::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Login::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Login::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Login::_fieldMetadatas() const {
	return _field_metadatas();
}

Login& Login::_setNameSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_name = "";
	_m_name_isSet = state;
	return *this;
}

Login& Login::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setNameSet(state, depth);
	return *this;
}

int Login::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isNameSet(depth) ? 1 : 0;
	return out;
}

bool Login::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_name_id):
			return _isNameSet(depth);
		default:
			return false;
	}
}

bool Login::_isNameSet(const mgen::FieldSetDepth depth) const {
	return _m_name_isSet;
}

bool Login::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool Login::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Login&>(other) == *this;
}

Login * Login::_deepCopy() const {
	return new Login(*this);
}

mgen::MGenBase * Login::_newInstance() {
	return new Login;
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
		  
const std::string& Login::_type_name() {
	static const std::string out("se.yabs.aichallenge.Login");
	return out;
}

const std::vector<long long>& Login::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5952888879920983659LL;
	return out;
}

const std::vector<short>& Login::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -2956;
	return out;
}

const std::vector<std::string>& Login::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Login";
	return out;
}

const std::vector<std::string>& Login::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "9HQ";
	return out;
}

const std::string& Login::_type_ids_16bit_base64_string() {
	static const std::string out("9HQ");
	return out;
}

const std::string& Login::_type_id_16bit_base64() {
	static const std::string out("9HQ");
	return out;
}

const std::vector<mgen::Field>& Login::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_name_metadata();
	return out;
}

const mgen::Field& Login::_field_name_metadata() {
	static const mgen::Field out(-28058, "name");
	return out;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

