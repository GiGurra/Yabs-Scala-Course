/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/SelectGame.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

SelectGame::SelectGame() : 
		m_game(GameSelection_UNKNOWN),
		_m_game_isSet(false) {
}

SelectGame::SelectGame(const GameSelection& game) : 
		m_game(game),
		_m_game_isSet(true) {
}

SelectGame::~SelectGame() {
}

const GameSelection& SelectGame::getGame() const {
	return m_game;
}

GameSelection& SelectGame::getGameMutable() {
	_m_game_isSet = true;
	return m_game;
}

SelectGame& SelectGame::setGame(const GameSelection& game) {
	m_game = game;
	_m_game_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool SelectGame::hasGame() const {
	return _isGameSet(mgen::SHALLOW);
}

SelectGame& SelectGame::unsetGame() {
	_setGameSet(false, mgen::SHALLOW);
	return *this;
}

bool SelectGame::operator==(const SelectGame& other) const {
	return true
		 && _isGameSet(mgen::SHALLOW) == other._isGameSet(mgen::SHALLOW)
		 && getGame() == other.getGame();
}

bool SelectGame::operator!=(const SelectGame& other) const {
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
		  
const mgen::Field * SelectGame::_fieldById(const short id) const {
	switch (id) {
	case _field_game_id:
		return &_field_game_metadata();
	default:
		return 0;
	}
}

const mgen::Field * SelectGame::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("game", &SelectGame::_field_game_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long SelectGame::_typeId() const {
	return _type_id;
}

const std::string& SelectGame::_typeName() const {
	return _type_name();
}

const short SelectGame::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& SelectGame::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& SelectGame::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& SelectGame::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& SelectGame::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& SelectGame::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& SelectGame::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& SelectGame::_fieldMetadatas() const {
	return _field_metadatas();
}

SelectGame& SelectGame::_setGameSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_game = GameSelection_UNKNOWN;
	_m_game_isSet = state;
	return *this;
}

SelectGame& SelectGame::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setGameSet(state, depth);
	return *this;
}

int SelectGame::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isGameSet(depth) ? 1 : 0;
	return out;
}

bool SelectGame::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_game_id):
			return _isGameSet(depth);
		default:
			return false;
	}
}

bool SelectGame::_isGameSet(const mgen::FieldSetDepth depth) const {
	return _m_game_isSet;
}

bool SelectGame::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool SelectGame::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const SelectGame&>(other) == *this;
}

SelectGame * SelectGame::_deepCopy() const {
	return new SelectGame(*this);
}

mgen::MGenBase * SelectGame::_newInstance() {
	return new SelectGame;
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
		  
const std::string& SelectGame::_type_name() {
	static const std::string out("se.yabs.aichallenge.SelectGame");
	return out;
}

const std::vector<long long>& SelectGame::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1274239888315237626LL;
	return out;
}

const std::vector<short>& SelectGame::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -24589;
	return out;
}

const std::vector<std::string>& SelectGame::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.SelectGame";
	return out;
}

const std::vector<std::string>& SelectGame::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "n/M";
	return out;
}

const std::string& SelectGame::_type_ids_16bit_base64_string() {
	static const std::string out("n/M");
	return out;
}

const std::string& SelectGame::_type_id_16bit_base64() {
	static const std::string out("n/M");
	return out;
}

const std::vector<mgen::Field>& SelectGame::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_game_metadata();
	return out;
}

const mgen::Field& SelectGame::_field_game_metadata() {
	static const mgen::Field out(24849, "game");
	return out;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

