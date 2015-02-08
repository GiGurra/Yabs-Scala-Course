/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/GamePlayed.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

GamePlayed::GamePlayed() : 
		m_gameType(GameSelection_UNKNOWN),
		_m_gameType_isSet(false),
		_m_players_isSet(false),
		_m_winners_isSet(false) {
}

GamePlayed::GamePlayed(const GameSelection& gameType, 
			const std::vector<std::string> & players, 
			const std::vector<std::string> & winners) : 
		m_gameType(gameType),
		m_players(players),
		m_winners(winners),
		_m_gameType_isSet(true),
		_m_players_isSet(true),
		_m_winners_isSet(true) {
}

GamePlayed::~GamePlayed() {
}

const GameSelection& GamePlayed::getGameType() const {
	return m_gameType;
}

const std::vector<std::string> & GamePlayed::getPlayers() const {
	return m_players;
}

const std::vector<std::string> & GamePlayed::getWinners() const {
	return m_winners;
}

GameSelection& GamePlayed::getGameTypeMutable() {
	_m_gameType_isSet = true;
	return m_gameType;
}

std::vector<std::string> & GamePlayed::getPlayersMutable() {
	_m_players_isSet = true;
	return m_players;
}

std::vector<std::string> & GamePlayed::getWinnersMutable() {
	_m_winners_isSet = true;
	return m_winners;
}

GamePlayed& GamePlayed::setGameType(const GameSelection& gameType) {
	m_gameType = gameType;
	_m_gameType_isSet = true;
	return *this;
}

GamePlayed& GamePlayed::setPlayers(const std::vector<std::string> & players) {
	m_players = players;
	_m_players_isSet = true;
	return *this;
}

GamePlayed& GamePlayed::setWinners(const std::vector<std::string> & winners) {
	m_winners = winners;
	_m_winners_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool GamePlayed::hasGameType() const {
	return _isGameTypeSet(mgen::SHALLOW);
}

bool GamePlayed::hasPlayers() const {
	return _isPlayersSet(mgen::SHALLOW);
}

bool GamePlayed::hasWinners() const {
	return _isWinnersSet(mgen::SHALLOW);
}

GamePlayed& GamePlayed::unsetGameType() {
	_setGameTypeSet(false, mgen::SHALLOW);
	return *this;
}

GamePlayed& GamePlayed::unsetPlayers() {
	_setPlayersSet(false, mgen::SHALLOW);
	return *this;
}

GamePlayed& GamePlayed::unsetWinners() {
	_setWinnersSet(false, mgen::SHALLOW);
	return *this;
}

bool GamePlayed::operator==(const GamePlayed& other) const {
	return true
		 && _isGameTypeSet(mgen::SHALLOW) == other._isGameTypeSet(mgen::SHALLOW)
		 && _isPlayersSet(mgen::SHALLOW) == other._isPlayersSet(mgen::SHALLOW)
		 && _isWinnersSet(mgen::SHALLOW) == other._isWinnersSet(mgen::SHALLOW)
		 && getGameType() == other.getGameType()
		 && getPlayers() == other.getPlayers()
		 && getWinners() == other.getWinners();
}

bool GamePlayed::operator!=(const GamePlayed& other) const {
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
		  
const mgen::Field * GamePlayed::_fieldById(const short id) const {
	switch (id) {
	case _field_gameType_id:
		return &_field_gameType_metadata();
	case _field_players_id:
		return &_field_players_metadata();
	case _field_winners_id:
		return &_field_winners_metadata();
	default:
		return 0;
	}
}

const mgen::Field * GamePlayed::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("gameType", &GamePlayed::_field_gameType_metadata())("players", &GamePlayed::_field_players_metadata())("winners", &GamePlayed::_field_winners_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long GamePlayed::_typeId() const {
	return _type_id;
}

const std::string& GamePlayed::_typeName() const {
	return _type_name();
}

const short GamePlayed::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& GamePlayed::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& GamePlayed::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& GamePlayed::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& GamePlayed::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& GamePlayed::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& GamePlayed::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& GamePlayed::_fieldMetadatas() const {
	return _field_metadatas();
}

GamePlayed& GamePlayed::_setGameTypeSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_gameType = GameSelection_UNKNOWN;
	_m_gameType_isSet = state;
	return *this;
}

GamePlayed& GamePlayed::_setPlayersSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_players.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_players);
	_m_players_isSet = state;
	return *this;
}

GamePlayed& GamePlayed::_setWinnersSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_winners.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_winners);
	_m_winners_isSet = state;
	return *this;
}

GamePlayed& GamePlayed::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setGameTypeSet(state, depth);
	_setPlayersSet(state, depth);
	_setWinnersSet(state, depth);
	return *this;
}

int GamePlayed::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isGameTypeSet(depth) ? 1 : 0;
	out += _isPlayersSet(depth) ? 1 : 0;
	out += _isWinnersSet(depth) ? 1 : 0;
	return out;
}

bool GamePlayed::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_gameType_id):
			return _isGameTypeSet(depth);
		case (_field_players_id):
			return _isPlayersSet(depth);
		case (_field_winners_id):
			return _isWinnersSet(depth);
		default:
			return false;
	}
}

bool GamePlayed::_isGameTypeSet(const mgen::FieldSetDepth depth) const {
	return _m_gameType_isSet;
}

bool GamePlayed::_isPlayersSet(const mgen::FieldSetDepth depth) const {
	return _m_players_isSet;
}

bool GamePlayed::_isWinnersSet(const mgen::FieldSetDepth depth) const {
	return _m_winners_isSet;
}

bool GamePlayed::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool GamePlayed::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const GamePlayed&>(other) == *this;
}

GamePlayed * GamePlayed::_deepCopy() const {
	return new GamePlayed(*this);
}

mgen::MGenBase * GamePlayed::_newInstance() {
	return new GamePlayed;
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
		  
const std::string& GamePlayed::_type_name() {
	static const std::string out("se.yabs.aichallenge.GamePlayed");
	return out;
}

const std::vector<long long>& GamePlayed::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 300559125798525147LL;
	return out;
}

const std::vector<short>& GamePlayed::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -1558;
	return out;
}

const std::vector<std::string>& GamePlayed::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.GamePlayed";
	return out;
}

const std::vector<std::string>& GamePlayed::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "+eo";
	return out;
}

const std::string& GamePlayed::_type_ids_16bit_base64_string() {
	static const std::string out("+eo");
	return out;
}

const std::string& GamePlayed::_type_id_16bit_base64() {
	static const std::string out("+eo");
	return out;
}

const std::vector<mgen::Field>& GamePlayed::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_gameType_metadata() << _field_players_metadata() << _field_winners_metadata();
	return out;
}

const mgen::Field& GamePlayed::_field_gameType_metadata() {
	static const mgen::Field out(-27076, "gameType");
	return out;
}

const mgen::Field& GamePlayed::_field_players_metadata() {
	static const mgen::Field out(29583, "players");
	return out;
}

const mgen::Field& GamePlayed::_field_winners_metadata() {
	static const mgen::Field out(1721, "winners");
	return out;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

