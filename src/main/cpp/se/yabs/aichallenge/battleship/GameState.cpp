/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/GameState.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

GameState::GameState() : 
		m_phase(Phase_UNKNOWN),
		m_currentTeam(Team_UNKNOWN),
		_m_redPlayer_isSet(false),
		_m_bluePlayer_isSet(false),
		_m_observers_isSet(false),
		_m_mapSize_isSet(false),
		_m_phase_isSet(false),
		_m_currentTeam_isSet(false) {
}

GameState::GameState(const Player& redPlayer, 
			const Player& bluePlayer, 
			const std::vector<Player> & observers, 
			const Vec2& mapSize, 
			const Phase& phase, 
			const Team& currentTeam) : 
		m_redPlayer(redPlayer),
		m_bluePlayer(bluePlayer),
		m_observers(observers),
		m_mapSize(mapSize),
		m_phase(phase),
		m_currentTeam(currentTeam),
		_m_redPlayer_isSet(true),
		_m_bluePlayer_isSet(true),
		_m_observers_isSet(true),
		_m_mapSize_isSet(true),
		_m_phase_isSet(true),
		_m_currentTeam_isSet(true) {
}

GameState::~GameState() {
}

const Player& GameState::getRedPlayer() const {
	return m_redPlayer;
}

const Player& GameState::getBluePlayer() const {
	return m_bluePlayer;
}

const std::vector<Player> & GameState::getObservers() const {
	return m_observers;
}

const Vec2& GameState::getMapSize() const {
	return m_mapSize;
}

const Phase& GameState::getPhase() const {
	return m_phase;
}

const Team& GameState::getCurrentTeam() const {
	return m_currentTeam;
}

Player& GameState::getRedPlayerMutable() {
	_m_redPlayer_isSet = true;
	return m_redPlayer;
}

Player& GameState::getBluePlayerMutable() {
	_m_bluePlayer_isSet = true;
	return m_bluePlayer;
}

std::vector<Player> & GameState::getObserversMutable() {
	_m_observers_isSet = true;
	return m_observers;
}

Vec2& GameState::getMapSizeMutable() {
	_m_mapSize_isSet = true;
	return m_mapSize;
}

Phase& GameState::getPhaseMutable() {
	_m_phase_isSet = true;
	return m_phase;
}

Team& GameState::getCurrentTeamMutable() {
	_m_currentTeam_isSet = true;
	return m_currentTeam;
}

GameState& GameState::setRedPlayer(const Player& redPlayer) {
	m_redPlayer = redPlayer;
	_m_redPlayer_isSet = true;
	return *this;
}

GameState& GameState::setBluePlayer(const Player& bluePlayer) {
	m_bluePlayer = bluePlayer;
	_m_bluePlayer_isSet = true;
	return *this;
}

GameState& GameState::setObservers(const std::vector<Player> & observers) {
	m_observers = observers;
	_m_observers_isSet = true;
	return *this;
}

GameState& GameState::setMapSize(const Vec2& mapSize) {
	m_mapSize = mapSize;
	_m_mapSize_isSet = true;
	return *this;
}

GameState& GameState::setPhase(const Phase& phase) {
	m_phase = phase;
	_m_phase_isSet = true;
	return *this;
}

GameState& GameState::setCurrentTeam(const Team& currentTeam) {
	m_currentTeam = currentTeam;
	_m_currentTeam_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool GameState::hasRedPlayer() const {
	return _isRedPlayerSet(mgen::SHALLOW);
}

bool GameState::hasBluePlayer() const {
	return _isBluePlayerSet(mgen::SHALLOW);
}

bool GameState::hasObservers() const {
	return _isObserversSet(mgen::SHALLOW);
}

bool GameState::hasMapSize() const {
	return _isMapSizeSet(mgen::SHALLOW);
}

bool GameState::hasPhase() const {
	return _isPhaseSet(mgen::SHALLOW);
}

bool GameState::hasCurrentTeam() const {
	return _isCurrentTeamSet(mgen::SHALLOW);
}

GameState& GameState::unsetRedPlayer() {
	_setRedPlayerSet(false, mgen::SHALLOW);
	return *this;
}

GameState& GameState::unsetBluePlayer() {
	_setBluePlayerSet(false, mgen::SHALLOW);
	return *this;
}

GameState& GameState::unsetObservers() {
	_setObserversSet(false, mgen::SHALLOW);
	return *this;
}

GameState& GameState::unsetMapSize() {
	_setMapSizeSet(false, mgen::SHALLOW);
	return *this;
}

GameState& GameState::unsetPhase() {
	_setPhaseSet(false, mgen::SHALLOW);
	return *this;
}

GameState& GameState::unsetCurrentTeam() {
	_setCurrentTeamSet(false, mgen::SHALLOW);
	return *this;
}

bool GameState::operator==(const GameState& other) const {
	return true
		 && _isRedPlayerSet(mgen::SHALLOW) == other._isRedPlayerSet(mgen::SHALLOW)
		 && _isBluePlayerSet(mgen::SHALLOW) == other._isBluePlayerSet(mgen::SHALLOW)
		 && _isObserversSet(mgen::SHALLOW) == other._isObserversSet(mgen::SHALLOW)
		 && _isMapSizeSet(mgen::SHALLOW) == other._isMapSizeSet(mgen::SHALLOW)
		 && _isPhaseSet(mgen::SHALLOW) == other._isPhaseSet(mgen::SHALLOW)
		 && _isCurrentTeamSet(mgen::SHALLOW) == other._isCurrentTeamSet(mgen::SHALLOW)
		 && getRedPlayer() == other.getRedPlayer()
		 && getBluePlayer() == other.getBluePlayer()
		 && getObservers() == other.getObservers()
		 && getMapSize() == other.getMapSize()
		 && getPhase() == other.getPhase()
		 && getCurrentTeam() == other.getCurrentTeam();
}

bool GameState::operator!=(const GameState& other) const {
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
		  
const mgen::Field * GameState::_fieldById(const short id) const {
	switch (id) {
	case _field_redPlayer_id:
		return &_field_redPlayer_metadata();
	case _field_bluePlayer_id:
		return &_field_bluePlayer_metadata();
	case _field_observers_id:
		return &_field_observers_metadata();
	case _field_mapSize_id:
		return &_field_mapSize_metadata();
	case _field_phase_id:
		return &_field_phase_metadata();
	case _field_currentTeam_id:
		return &_field_currentTeam_metadata();
	default:
		return 0;
	}
}

const mgen::Field * GameState::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("redPlayer", &GameState::_field_redPlayer_metadata())("bluePlayer", &GameState::_field_bluePlayer_metadata())("observers", &GameState::_field_observers_metadata())("mapSize", &GameState::_field_mapSize_metadata())("phase", &GameState::_field_phase_metadata())("currentTeam", &GameState::_field_currentTeam_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long GameState::_typeId() const {
	return _type_id;
}

const std::string& GameState::_typeName() const {
	return _type_name();
}

const short GameState::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& GameState::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& GameState::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& GameState::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& GameState::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& GameState::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& GameState::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& GameState::_fieldMetadatas() const {
	return _field_metadatas();
}

GameState& GameState::_setRedPlayerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_redPlayer._setAllFieldsSet(state, mgen::DEEP);
	_m_redPlayer_isSet = state;
	return *this;
}

GameState& GameState::_setBluePlayerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_bluePlayer._setAllFieldsSet(state, mgen::DEEP);
	_m_bluePlayer_isSet = state;
	return *this;
}

GameState& GameState::_setObserversSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_observers.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_observers);
	_m_observers_isSet = state;
	return *this;
}

GameState& GameState::_setMapSizeSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_mapSize._setAllFieldsSet(state, mgen::DEEP);
	_m_mapSize_isSet = state;
	return *this;
}

GameState& GameState::_setPhaseSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_phase = Phase_UNKNOWN;
	_m_phase_isSet = state;
	return *this;
}

GameState& GameState::_setCurrentTeamSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_currentTeam = Team_UNKNOWN;
	_m_currentTeam_isSet = state;
	return *this;
}

GameState& GameState::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setRedPlayerSet(state, depth);
	_setBluePlayerSet(state, depth);
	_setObserversSet(state, depth);
	_setMapSizeSet(state, depth);
	_setPhaseSet(state, depth);
	_setCurrentTeamSet(state, depth);
	return *this;
}

int GameState::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isRedPlayerSet(depth) ? 1 : 0;
	out += _isBluePlayerSet(depth) ? 1 : 0;
	out += _isObserversSet(depth) ? 1 : 0;
	out += _isMapSizeSet(depth) ? 1 : 0;
	out += _isPhaseSet(depth) ? 1 : 0;
	out += _isCurrentTeamSet(depth) ? 1 : 0;
	return out;
}

bool GameState::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_redPlayer_id):
			return _isRedPlayerSet(depth);
		case (_field_bluePlayer_id):
			return _isBluePlayerSet(depth);
		case (_field_observers_id):
			return _isObserversSet(depth);
		case (_field_mapSize_id):
			return _isMapSizeSet(depth);
		case (_field_phase_id):
			return _isPhaseSet(depth);
		case (_field_currentTeam_id):
			return _isCurrentTeamSet(depth);
		default:
			return false;
	}
}

bool GameState::_isRedPlayerSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_redPlayer_isSet;
	} else {
		return _m_redPlayer_isSet && mgen::validation::validateFieldDeep(getRedPlayer());
	}
}

bool GameState::_isBluePlayerSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_bluePlayer_isSet;
	} else {
		return _m_bluePlayer_isSet && mgen::validation::validateFieldDeep(getBluePlayer());
	}
}

bool GameState::_isObserversSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_observers_isSet;
	} else {
		return _m_observers_isSet && mgen::validation::validateFieldDeep(getObservers());
	}
}

bool GameState::_isMapSizeSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_mapSize_isSet;
	} else {
		return _m_mapSize_isSet && mgen::validation::validateFieldDeep(getMapSize());
	}
}

bool GameState::_isPhaseSet(const mgen::FieldSetDepth depth) const {
	return _m_phase_isSet;
}

bool GameState::_isCurrentTeamSet(const mgen::FieldSetDepth depth) const {
	return _m_currentTeam_isSet;
}

bool GameState::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isRedPlayerSet(mgen::SHALLOW) || _isRedPlayerSet(mgen::DEEP))
				&& (!_isBluePlayerSet(mgen::SHALLOW) || _isBluePlayerSet(mgen::DEEP))
				&& (!_isObserversSet(mgen::SHALLOW) || _isObserversSet(mgen::DEEP))
				&& (!_isMapSizeSet(mgen::SHALLOW) || _isMapSizeSet(mgen::DEEP));
	}
}

bool GameState::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const GameState&>(other) == *this;
}

GameState * GameState::_deepCopy() const {
	return new GameState(*this);
}

mgen::MGenBase * GameState::_newInstance() {
	return new GameState;
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
		  
const std::string& GameState::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.GameState");
	return out;
}

const std::vector<long long>& GameState::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 7830028132583391513LL;
	return out;
}

const std::vector<short>& GameState::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 13427;
	return out;
}

const std::vector<std::string>& GameState::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.battleship.GameState";
	return out;
}

const std::vector<std::string>& GameState::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "NHM";
	return out;
}

const std::string& GameState::_type_ids_16bit_base64_string() {
	static const std::string out("NHM");
	return out;
}

const std::string& GameState::_type_id_16bit_base64() {
	static const std::string out("NHM");
	return out;
}

const std::vector<mgen::Field>& GameState::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_redPlayer_metadata() << _field_bluePlayer_metadata() << _field_observers_metadata() << _field_mapSize_metadata() << _field_phase_metadata() << _field_currentTeam_metadata();
	return out;
}

const mgen::Field& GameState::_field_redPlayer_metadata() {
	static const mgen::Field out(-7294, "redPlayer");
	return out;
}

const mgen::Field& GameState::_field_bluePlayer_metadata() {
	static const mgen::Field out(10760, "bluePlayer");
	return out;
}

const mgen::Field& GameState::_field_observers_metadata() {
	static const mgen::Field out(22106, "observers");
	return out;
}

const mgen::Field& GameState::_field_mapSize_metadata() {
	static const mgen::Field out(-24724, "mapSize");
	return out;
}

const mgen::Field& GameState::_field_phase_metadata() {
	static const mgen::Field out(7625, "phase");
	return out;
}

const mgen::Field& GameState::_field_currentTeam_metadata() {
	static const mgen::Field out(-14726, "currentTeam");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

