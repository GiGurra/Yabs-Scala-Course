/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/GameChallengeFound.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

GameChallengeFound::GameChallengeFound() : 
		m_game(GameSelection_UNKNOWN),
		_m_game_isSet(false),
		_m_opponent_isSet(false) {
}

GameChallengeFound::GameChallengeFound(const GameSelection& game, 
			const std::string& opponent) : 
		m_game(game),
		m_opponent(opponent),
		_m_game_isSet(true),
		_m_opponent_isSet(true) {
}

GameChallengeFound::~GameChallengeFound() {
}

const GameSelection& GameChallengeFound::getGame() const {
	return m_game;
}

const std::string& GameChallengeFound::getOpponent() const {
	return m_opponent;
}

GameSelection& GameChallengeFound::getGameMutable() {
	_m_game_isSet = true;
	return m_game;
}

std::string& GameChallengeFound::getOpponentMutable() {
	_m_opponent_isSet = true;
	return m_opponent;
}

GameChallengeFound& GameChallengeFound::setGame(const GameSelection& game) {
	m_game = game;
	_m_game_isSet = true;
	return *this;
}

GameChallengeFound& GameChallengeFound::setOpponent(const std::string& opponent) {
	m_opponent = opponent;
	_m_opponent_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool GameChallengeFound::hasGame() const {
	return _isGameSet(mgen::SHALLOW);
}

bool GameChallengeFound::hasOpponent() const {
	return _isOpponentSet(mgen::SHALLOW);
}

GameChallengeFound& GameChallengeFound::unsetGame() {
	_setGameSet(false, mgen::SHALLOW);
	return *this;
}

GameChallengeFound& GameChallengeFound::unsetOpponent() {
	_setOpponentSet(false, mgen::SHALLOW);
	return *this;
}

bool GameChallengeFound::operator==(const GameChallengeFound& other) const {
	return true
		 && _isGameSet(mgen::SHALLOW) == other._isGameSet(mgen::SHALLOW)
		 && _isOpponentSet(mgen::SHALLOW) == other._isOpponentSet(mgen::SHALLOW)
		 && getGame() == other.getGame()
		 && getOpponent() == other.getOpponent();
}

bool GameChallengeFound::operator!=(const GameChallengeFound& other) const {
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
		  
const mgen::Field * GameChallengeFound::_fieldById(const short id) const {
	switch (id) {
	case _field_game_id:
		return &_field_game_metadata();
	case _field_opponent_id:
		return &_field_opponent_metadata();
	default:
		return 0;
	}
}

const mgen::Field * GameChallengeFound::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("game", &GameChallengeFound::_field_game_metadata())("opponent", &GameChallengeFound::_field_opponent_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long GameChallengeFound::_typeId() const {
	return _type_id;
}

const std::string& GameChallengeFound::_typeName() const {
	return _type_name();
}

const short GameChallengeFound::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& GameChallengeFound::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& GameChallengeFound::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& GameChallengeFound::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& GameChallengeFound::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& GameChallengeFound::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& GameChallengeFound::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& GameChallengeFound::_fieldMetadatas() const {
	return _field_metadatas();
}

GameChallengeFound& GameChallengeFound::_setGameSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_game = GameSelection_UNKNOWN;
	_m_game_isSet = state;
	return *this;
}

GameChallengeFound& GameChallengeFound::_setOpponentSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_opponent = "";
	_m_opponent_isSet = state;
	return *this;
}

GameChallengeFound& GameChallengeFound::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setGameSet(state, depth);
	_setOpponentSet(state, depth);
	return *this;
}

int GameChallengeFound::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isGameSet(depth) ? 1 : 0;
	out += _isOpponentSet(depth) ? 1 : 0;
	return out;
}

bool GameChallengeFound::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_game_id):
			return _isGameSet(depth);
		case (_field_opponent_id):
			return _isOpponentSet(depth);
		default:
			return false;
	}
}

bool GameChallengeFound::_isGameSet(const mgen::FieldSetDepth depth) const {
	return _m_game_isSet;
}

bool GameChallengeFound::_isOpponentSet(const mgen::FieldSetDepth depth) const {
	return _m_opponent_isSet;
}

bool GameChallengeFound::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool GameChallengeFound::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const GameChallengeFound&>(other) == *this;
}

GameChallengeFound * GameChallengeFound::_deepCopy() const {
	return new GameChallengeFound(*this);
}

mgen::MGenBase * GameChallengeFound::_newInstance() {
	return new GameChallengeFound;
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
		  
const std::string& GameChallengeFound::_type_name() {
	static const std::string out("se.yabs.aichallenge.GameChallengeFound");
	return out;
}

const std::vector<long long>& GameChallengeFound::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6843908126517847773LL << 7479712952545752927LL;
	return out;
}

const std::vector<short>& GameChallengeFound::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -23638 << 24590;
	return out;
}

const std::vector<std::string>& GameChallengeFound::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Message" << "se.yabs.aichallenge.GameChallengeFound";
	return out;
}

const std::vector<std::string>& GameChallengeFound::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "o6o" << "YA4";
	return out;
}

const std::string& GameChallengeFound::_type_ids_16bit_base64_string() {
	static const std::string out("o6oYA4");
	return out;
}

const std::string& GameChallengeFound::_type_id_16bit_base64() {
	static const std::string out("YA4");
	return out;
}

const std::vector<mgen::Field>& GameChallengeFound::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_game_metadata() << _field_opponent_metadata();
	return out;
}

const mgen::Field& GameChallengeFound::_field_game_metadata() {
	static const mgen::Field out(24849, "game");
	return out;
}

const mgen::Field& GameChallengeFound::_field_opponent_metadata() {
	static const mgen::Field out(17849, "opponent");
	return out;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

