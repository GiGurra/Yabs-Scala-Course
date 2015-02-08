/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/ErrorMessage.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

ErrorMessage::ErrorMessage() : 
		_m_msg_isSet(false) {
}

ErrorMessage::ErrorMessage(const std::string& msg) : 
		m_msg(msg),
		_m_msg_isSet(true) {
}

ErrorMessage::~ErrorMessage() {
}

const std::string& ErrorMessage::getMsg() const {
	return m_msg;
}

std::string& ErrorMessage::getMsgMutable() {
	_m_msg_isSet = true;
	return m_msg;
}

ErrorMessage& ErrorMessage::setMsg(const std::string& msg) {
	m_msg = msg;
	_m_msg_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool ErrorMessage::hasMsg() const {
	return _isMsgSet(mgen::SHALLOW);
}

ErrorMessage& ErrorMessage::unsetMsg() {
	_setMsgSet(false, mgen::SHALLOW);
	return *this;
}

bool ErrorMessage::operator==(const ErrorMessage& other) const {
	return true
		 && _isMsgSet(mgen::SHALLOW) == other._isMsgSet(mgen::SHALLOW)
		 && getMsg() == other.getMsg();
}

bool ErrorMessage::operator!=(const ErrorMessage& other) const {
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
		  
const mgen::Field * ErrorMessage::_fieldById(const short id) const {
	switch (id) {
	case _field_msg_id:
		return &_field_msg_metadata();
	default:
		return 0;
	}
}

const mgen::Field * ErrorMessage::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("msg", &ErrorMessage::_field_msg_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long ErrorMessage::_typeId() const {
	return _type_id;
}

const std::string& ErrorMessage::_typeName() const {
	return _type_name();
}

const short ErrorMessage::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& ErrorMessage::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& ErrorMessage::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& ErrorMessage::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& ErrorMessage::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& ErrorMessage::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& ErrorMessage::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& ErrorMessage::_fieldMetadatas() const {
	return _field_metadatas();
}

ErrorMessage& ErrorMessage::_setMsgSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_msg = "";
	_m_msg_isSet = state;
	return *this;
}

ErrorMessage& ErrorMessage::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setMsgSet(state, depth);
	return *this;
}

int ErrorMessage::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isMsgSet(depth) ? 1 : 0;
	return out;
}

bool ErrorMessage::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_msg_id):
			return _isMsgSet(depth);
		default:
			return false;
	}
}

bool ErrorMessage::_isMsgSet(const mgen::FieldSetDepth depth) const {
	return _m_msg_isSet;
}

bool ErrorMessage::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool ErrorMessage::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const ErrorMessage&>(other) == *this;
}

ErrorMessage * ErrorMessage::_deepCopy() const {
	return new ErrorMessage(*this);
}

mgen::MGenBase * ErrorMessage::_newInstance() {
	return new ErrorMessage;
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
		  
const std::string& ErrorMessage::_type_name() {
	static const std::string out("se.yabs.aichallenge.ErrorMessage");
	return out;
}

const std::vector<long long>& ErrorMessage::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6843908126517847773LL << 4495102748553798680LL;
	return out;
}

const std::vector<short>& ErrorMessage::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -23638 << -6007;
	return out;
}

const std::vector<std::string>& ErrorMessage::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Message" << "se.yabs.aichallenge.ErrorMessage";
	return out;
}

const std::vector<std::string>& ErrorMessage::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "o6o" << "6Ik";
	return out;
}

const std::string& ErrorMessage::_type_ids_16bit_base64_string() {
	static const std::string out("o6o6Ik");
	return out;
}

const std::string& ErrorMessage::_type_id_16bit_base64() {
	static const std::string out("6Ik");
	return out;
}

const std::vector<mgen::Field>& ErrorMessage::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_msg_metadata();
	return out;
}

const mgen::Field& ErrorMessage::_field_msg_metadata() {
	static const mgen::Field out(21741, "msg");
	return out;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

