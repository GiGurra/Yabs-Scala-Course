/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/GameOver.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

GameOver::GameOver() : 
		m_result(BattleshipResult_UNKNOWN),
		_m_result_isSet(false) {
}

GameOver::GameOver(const BattleshipResult& result) : 
		m_result(result),
		_m_result_isSet(true) {
}

GameOver::~GameOver() {
}

const BattleshipResult& GameOver::getResult() const {
	return m_result;
}

BattleshipResult& GameOver::getResultMutable() {
	_m_result_isSet = true;
	return m_result;
}

GameOver& GameOver::setResult(const BattleshipResult& result) {
	m_result = result;
	_m_result_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool GameOver::hasResult() const {
	return _isResultSet(mgen::SHALLOW);
}

GameOver& GameOver::unsetResult() {
	_setResultSet(false, mgen::SHALLOW);
	return *this;
}

bool GameOver::operator==(const GameOver& other) const {
	return true
		 && _isResultSet(mgen::SHALLOW) == other._isResultSet(mgen::SHALLOW)
		 && getResult() == other.getResult();
}

bool GameOver::operator!=(const GameOver& other) const {
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
		  
const mgen::Field * GameOver::_fieldById(const short id) const {
	switch (id) {
	case _field_result_id:
		return &_field_result_metadata();
	default:
		return 0;
	}
}

const mgen::Field * GameOver::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("result", &GameOver::_field_result_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long GameOver::_typeId() const {
	return _type_id;
}

const std::string& GameOver::_typeName() const {
	return _type_name();
}

const short GameOver::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& GameOver::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& GameOver::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& GameOver::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& GameOver::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& GameOver::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& GameOver::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& GameOver::_fieldMetadatas() const {
	return _field_metadatas();
}

GameOver& GameOver::_setResultSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_result = BattleshipResult_UNKNOWN;
	_m_result_isSet = state;
	return *this;
}

GameOver& GameOver::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setResultSet(state, depth);
	return *this;
}

int GameOver::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isResultSet(depth) ? 1 : 0;
	return out;
}

bool GameOver::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_result_id):
			return _isResultSet(depth);
		default:
			return false;
	}
}

bool GameOver::_isResultSet(const mgen::FieldSetDepth depth) const {
	return _m_result_isSet;
}

bool GameOver::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool GameOver::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const GameOver&>(other) == *this;
}

GameOver * GameOver::_deepCopy() const {
	return new GameOver(*this);
}

mgen::MGenBase * GameOver::_newInstance() {
	return new GameOver;
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
		  
const std::string& GameOver::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.GameOver");
	return out;
}

const std::vector<long long>& GameOver::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6843908126517847773LL << 2246573734118294447LL << 2567022198048374295LL << 1789310646936949934LL;
	return out;
}

const std::vector<short>& GameOver::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -23638 << -25529 << 29355 << -7695;
	return out;
}

const std::vector<std::string>& GameOver::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Message" << "se.yabs.aichallenge.GameMessage" << "se.yabs.aichallenge.battleship.BattleshipMessage" << "se.yabs.aichallenge.battleship.GameOver";
	return out;
}

const std::vector<std::string>& GameOver::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "o6o" << "nEc" << "cqs" << "4fE";
	return out;
}

const std::string& GameOver::_type_ids_16bit_base64_string() {
	static const std::string out("o6onEccqs4fE");
	return out;
}

const std::string& GameOver::_type_id_16bit_base64() {
	static const std::string out("4fE");
	return out;
}

const std::vector<mgen::Field>& GameOver::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_result_metadata();
	return out;
}

const mgen::Field& GameOver::_field_result_metadata() {
	static const mgen::Field out(24642, "result");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

