/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/WelcomeMessage.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

WelcomeMessage::WelcomeMessage() : 
		_m_msg_isSet(false),
		_m_availableGames_isSet(false) {
}

WelcomeMessage::WelcomeMessage(const std::string& msg, 
			const std::vector<GameSelection> & availableGames) : 
		m_msg(msg),
		m_availableGames(availableGames),
		_m_msg_isSet(true),
		_m_availableGames_isSet(true) {
}

WelcomeMessage::~WelcomeMessage() {
}

const std::string& WelcomeMessage::getMsg() const {
	return m_msg;
}

const std::vector<GameSelection> & WelcomeMessage::getAvailableGames() const {
	return m_availableGames;
}

std::string& WelcomeMessage::getMsgMutable() {
	_m_msg_isSet = true;
	return m_msg;
}

std::vector<GameSelection> & WelcomeMessage::getAvailableGamesMutable() {
	_m_availableGames_isSet = true;
	return m_availableGames;
}

WelcomeMessage& WelcomeMessage::setMsg(const std::string& msg) {
	m_msg = msg;
	_m_msg_isSet = true;
	return *this;
}

WelcomeMessage& WelcomeMessage::setAvailableGames(const std::vector<GameSelection> & availableGames) {
	m_availableGames = availableGames;
	_m_availableGames_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool WelcomeMessage::hasMsg() const {
	return _isMsgSet(mgen::SHALLOW);
}

bool WelcomeMessage::hasAvailableGames() const {
	return _isAvailableGamesSet(mgen::SHALLOW);
}

WelcomeMessage& WelcomeMessage::unsetMsg() {
	_setMsgSet(false, mgen::SHALLOW);
	return *this;
}

WelcomeMessage& WelcomeMessage::unsetAvailableGames() {
	_setAvailableGamesSet(false, mgen::SHALLOW);
	return *this;
}

bool WelcomeMessage::operator==(const WelcomeMessage& other) const {
	return true
		 && _isMsgSet(mgen::SHALLOW) == other._isMsgSet(mgen::SHALLOW)
		 && _isAvailableGamesSet(mgen::SHALLOW) == other._isAvailableGamesSet(mgen::SHALLOW)
		 && getMsg() == other.getMsg()
		 && getAvailableGames() == other.getAvailableGames();
}

bool WelcomeMessage::operator!=(const WelcomeMessage& other) const {
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
		  
const mgen::Field * WelcomeMessage::_fieldById(const short id) const {
	switch (id) {
	case _field_msg_id:
		return &_field_msg_metadata();
	case _field_availableGames_id:
		return &_field_availableGames_metadata();
	default:
		return 0;
	}
}

const mgen::Field * WelcomeMessage::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("msg", &WelcomeMessage::_field_msg_metadata())("availableGames", &WelcomeMessage::_field_availableGames_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long WelcomeMessage::_typeId() const {
	return _type_id;
}

const std::string& WelcomeMessage::_typeName() const {
	return _type_name();
}

const short WelcomeMessage::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& WelcomeMessage::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& WelcomeMessage::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& WelcomeMessage::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& WelcomeMessage::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& WelcomeMessage::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& WelcomeMessage::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& WelcomeMessage::_fieldMetadatas() const {
	return _field_metadatas();
}

WelcomeMessage& WelcomeMessage::_setMsgSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_msg = "";
	_m_msg_isSet = state;
	return *this;
}

WelcomeMessage& WelcomeMessage::_setAvailableGamesSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_availableGames.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_availableGames);
	_m_availableGames_isSet = state;
	return *this;
}

WelcomeMessage& WelcomeMessage::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setMsgSet(state, depth);
	_setAvailableGamesSet(state, depth);
	return *this;
}

int WelcomeMessage::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isMsgSet(depth) ? 1 : 0;
	out += _isAvailableGamesSet(depth) ? 1 : 0;
	return out;
}

bool WelcomeMessage::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_msg_id):
			return _isMsgSet(depth);
		case (_field_availableGames_id):
			return _isAvailableGamesSet(depth);
		default:
			return false;
	}
}

bool WelcomeMessage::_isMsgSet(const mgen::FieldSetDepth depth) const {
	return _m_msg_isSet;
}

bool WelcomeMessage::_isAvailableGamesSet(const mgen::FieldSetDepth depth) const {
	return _m_availableGames_isSet;
}

bool WelcomeMessage::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool WelcomeMessage::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const WelcomeMessage&>(other) == *this;
}

WelcomeMessage * WelcomeMessage::_deepCopy() const {
	return new WelcomeMessage(*this);
}

mgen::MGenBase * WelcomeMessage::_newInstance() {
	return new WelcomeMessage;
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
		  
const std::string& WelcomeMessage::_type_name() {
	static const std::string out("se.yabs.aichallenge.WelcomeMessage");
	return out;
}

const std::vector<long long>& WelcomeMessage::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6843908126517847773LL << 519923755957276911LL;
	return out;
}

const std::vector<short>& WelcomeMessage::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -23638 << 1532;
	return out;
}

const std::vector<std::string>& WelcomeMessage::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Message" << "se.yabs.aichallenge.WelcomeMessage";
	return out;
}

const std::vector<std::string>& WelcomeMessage::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "o6o" << "Bfw";
	return out;
}

const std::string& WelcomeMessage::_type_ids_16bit_base64_string() {
	static const std::string out("o6oBfw");
	return out;
}

const std::string& WelcomeMessage::_type_id_16bit_base64() {
	static const std::string out("Bfw");
	return out;
}

const std::vector<mgen::Field>& WelcomeMessage::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_msg_metadata() << _field_availableGames_metadata();
	return out;
}

const mgen::Field& WelcomeMessage::_field_msg_metadata() {
	static const mgen::Field out(21741, "msg");
	return out;
}

const mgen::Field& WelcomeMessage::_field_availableGames_metadata() {
	static const mgen::Field out(-11213, "availableGames");
	return out;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

