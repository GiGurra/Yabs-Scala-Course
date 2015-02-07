/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/Game.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

Game::Game() : 
		m_phase(Phase_UNKNOWN),
		m_currentTeam(Team_UNKNOWN),
		_m_redPlayer_isSet(false),
		_m_bluePlayer_isSet(false),
		_m_observers_isSet(false),
		_m_redMap_isSet(false),
		_m_blueMap_isSet(false),
		_m_phase_isSet(false),
		_m_currentTeam_isSet(false) {
}

Game::Game(const Player& redPlayer, 
			const Player& bluePlayer, 
			const std::vector<Player> & observers, 
			const Map& redMap, 
			const Map& blueMap, 
			const Phase& phase, 
			const Team& currentTeam) : 
		m_redPlayer(redPlayer),
		m_bluePlayer(bluePlayer),
		m_observers(observers),
		m_redMap(redMap),
		m_blueMap(blueMap),
		m_phase(phase),
		m_currentTeam(currentTeam),
		_m_redPlayer_isSet(true),
		_m_bluePlayer_isSet(true),
		_m_observers_isSet(true),
		_m_redMap_isSet(true),
		_m_blueMap_isSet(true),
		_m_phase_isSet(true),
		_m_currentTeam_isSet(true) {
}

Game::~Game() {
}

const Player& Game::getRedPlayer() const {
	return m_redPlayer;
}

const Player& Game::getBluePlayer() const {
	return m_bluePlayer;
}

const std::vector<Player> & Game::getObservers() const {
	return m_observers;
}

const Map& Game::getRedMap() const {
	return m_redMap;
}

const Map& Game::getBlueMap() const {
	return m_blueMap;
}

const Phase& Game::getPhase() const {
	return m_phase;
}

const Team& Game::getCurrentTeam() const {
	return m_currentTeam;
}

Player& Game::getRedPlayerMutable() {
	_m_redPlayer_isSet = true;
	return m_redPlayer;
}

Player& Game::getBluePlayerMutable() {
	_m_bluePlayer_isSet = true;
	return m_bluePlayer;
}

std::vector<Player> & Game::getObserversMutable() {
	_m_observers_isSet = true;
	return m_observers;
}

Map& Game::getRedMapMutable() {
	_m_redMap_isSet = true;
	return m_redMap;
}

Map& Game::getBlueMapMutable() {
	_m_blueMap_isSet = true;
	return m_blueMap;
}

Phase& Game::getPhaseMutable() {
	_m_phase_isSet = true;
	return m_phase;
}

Team& Game::getCurrentTeamMutable() {
	_m_currentTeam_isSet = true;
	return m_currentTeam;
}

Game& Game::setRedPlayer(const Player& redPlayer) {
	m_redPlayer = redPlayer;
	_m_redPlayer_isSet = true;
	return *this;
}

Game& Game::setBluePlayer(const Player& bluePlayer) {
	m_bluePlayer = bluePlayer;
	_m_bluePlayer_isSet = true;
	return *this;
}

Game& Game::setObservers(const std::vector<Player> & observers) {
	m_observers = observers;
	_m_observers_isSet = true;
	return *this;
}

Game& Game::setRedMap(const Map& redMap) {
	m_redMap = redMap;
	_m_redMap_isSet = true;
	return *this;
}

Game& Game::setBlueMap(const Map& blueMap) {
	m_blueMap = blueMap;
	_m_blueMap_isSet = true;
	return *this;
}

Game& Game::setPhase(const Phase& phase) {
	m_phase = phase;
	_m_phase_isSet = true;
	return *this;
}

Game& Game::setCurrentTeam(const Team& currentTeam) {
	m_currentTeam = currentTeam;
	_m_currentTeam_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Game::hasRedPlayer() const {
	return _isRedPlayerSet(mgen::SHALLOW);
}

bool Game::hasBluePlayer() const {
	return _isBluePlayerSet(mgen::SHALLOW);
}

bool Game::hasObservers() const {
	return _isObserversSet(mgen::SHALLOW);
}

bool Game::hasRedMap() const {
	return _isRedMapSet(mgen::SHALLOW);
}

bool Game::hasBlueMap() const {
	return _isBlueMapSet(mgen::SHALLOW);
}

bool Game::hasPhase() const {
	return _isPhaseSet(mgen::SHALLOW);
}

bool Game::hasCurrentTeam() const {
	return _isCurrentTeamSet(mgen::SHALLOW);
}

Game& Game::unsetRedPlayer() {
	_setRedPlayerSet(false, mgen::SHALLOW);
	return *this;
}

Game& Game::unsetBluePlayer() {
	_setBluePlayerSet(false, mgen::SHALLOW);
	return *this;
}

Game& Game::unsetObservers() {
	_setObserversSet(false, mgen::SHALLOW);
	return *this;
}

Game& Game::unsetRedMap() {
	_setRedMapSet(false, mgen::SHALLOW);
	return *this;
}

Game& Game::unsetBlueMap() {
	_setBlueMapSet(false, mgen::SHALLOW);
	return *this;
}

Game& Game::unsetPhase() {
	_setPhaseSet(false, mgen::SHALLOW);
	return *this;
}

Game& Game::unsetCurrentTeam() {
	_setCurrentTeamSet(false, mgen::SHALLOW);
	return *this;
}

bool Game::operator==(const Game& other) const {
	return true
		 && _isRedPlayerSet(mgen::SHALLOW) == other._isRedPlayerSet(mgen::SHALLOW)
		 && _isBluePlayerSet(mgen::SHALLOW) == other._isBluePlayerSet(mgen::SHALLOW)
		 && _isObserversSet(mgen::SHALLOW) == other._isObserversSet(mgen::SHALLOW)
		 && _isRedMapSet(mgen::SHALLOW) == other._isRedMapSet(mgen::SHALLOW)
		 && _isBlueMapSet(mgen::SHALLOW) == other._isBlueMapSet(mgen::SHALLOW)
		 && _isPhaseSet(mgen::SHALLOW) == other._isPhaseSet(mgen::SHALLOW)
		 && _isCurrentTeamSet(mgen::SHALLOW) == other._isCurrentTeamSet(mgen::SHALLOW)
		 && getRedPlayer() == other.getRedPlayer()
		 && getBluePlayer() == other.getBluePlayer()
		 && getObservers() == other.getObservers()
		 && getRedMap() == other.getRedMap()
		 && getBlueMap() == other.getBlueMap()
		 && getPhase() == other.getPhase()
		 && getCurrentTeam() == other.getCurrentTeam();
}

bool Game::operator!=(const Game& other) const {
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
		  
const mgen::Field * Game::_fieldById(const short id) const {
	switch (id) {
	case _field_redPlayer_id:
		return &_field_redPlayer_metadata();
	case _field_bluePlayer_id:
		return &_field_bluePlayer_metadata();
	case _field_observers_id:
		return &_field_observers_metadata();
	case _field_redMap_id:
		return &_field_redMap_metadata();
	case _field_blueMap_id:
		return &_field_blueMap_metadata();
	case _field_phase_id:
		return &_field_phase_metadata();
	case _field_currentTeam_id:
		return &_field_currentTeam_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Game::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("redPlayer", &Game::_field_redPlayer_metadata())("bluePlayer", &Game::_field_bluePlayer_metadata())("observers", &Game::_field_observers_metadata())("redMap", &Game::_field_redMap_metadata())("blueMap", &Game::_field_blueMap_metadata())("phase", &Game::_field_phase_metadata())("currentTeam", &Game::_field_currentTeam_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Game::_typeId() const {
	return _type_id;
}

const std::string& Game::_typeName() const {
	return _type_name();
}

const short Game::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Game::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Game::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Game::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Game::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Game::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Game::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Game::_fieldMetadatas() const {
	return _field_metadatas();
}

Game& Game::_setRedPlayerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_redPlayer._setAllFieldsSet(state, mgen::DEEP);
	_m_redPlayer_isSet = state;
	return *this;
}

Game& Game::_setBluePlayerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_bluePlayer._setAllFieldsSet(state, mgen::DEEP);
	_m_bluePlayer_isSet = state;
	return *this;
}

Game& Game::_setObserversSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_observers.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_observers);
	_m_observers_isSet = state;
	return *this;
}

Game& Game::_setRedMapSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_redMap._setAllFieldsSet(state, mgen::DEEP);
	_m_redMap_isSet = state;
	return *this;
}

Game& Game::_setBlueMapSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_blueMap._setAllFieldsSet(state, mgen::DEEP);
	_m_blueMap_isSet = state;
	return *this;
}

Game& Game::_setPhaseSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_phase = Phase_UNKNOWN;
	_m_phase_isSet = state;
	return *this;
}

Game& Game::_setCurrentTeamSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_currentTeam = Team_UNKNOWN;
	_m_currentTeam_isSet = state;
	return *this;
}

Game& Game::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setRedPlayerSet(state, depth);
	_setBluePlayerSet(state, depth);
	_setObserversSet(state, depth);
	_setRedMapSet(state, depth);
	_setBlueMapSet(state, depth);
	_setPhaseSet(state, depth);
	_setCurrentTeamSet(state, depth);
	return *this;
}

int Game::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isRedPlayerSet(depth) ? 1 : 0;
	out += _isBluePlayerSet(depth) ? 1 : 0;
	out += _isObserversSet(depth) ? 1 : 0;
	out += _isRedMapSet(depth) ? 1 : 0;
	out += _isBlueMapSet(depth) ? 1 : 0;
	out += _isPhaseSet(depth) ? 1 : 0;
	out += _isCurrentTeamSet(depth) ? 1 : 0;
	return out;
}

bool Game::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_redPlayer_id):
			return _isRedPlayerSet(depth);
		case (_field_bluePlayer_id):
			return _isBluePlayerSet(depth);
		case (_field_observers_id):
			return _isObserversSet(depth);
		case (_field_redMap_id):
			return _isRedMapSet(depth);
		case (_field_blueMap_id):
			return _isBlueMapSet(depth);
		case (_field_phase_id):
			return _isPhaseSet(depth);
		case (_field_currentTeam_id):
			return _isCurrentTeamSet(depth);
		default:
			return false;
	}
}

bool Game::_isRedPlayerSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_redPlayer_isSet;
	} else {
		return _m_redPlayer_isSet && mgen::validation::validateFieldDeep(getRedPlayer());
	}
}

bool Game::_isBluePlayerSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_bluePlayer_isSet;
	} else {
		return _m_bluePlayer_isSet && mgen::validation::validateFieldDeep(getBluePlayer());
	}
}

bool Game::_isObserversSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_observers_isSet;
	} else {
		return _m_observers_isSet && mgen::validation::validateFieldDeep(getObservers());
	}
}

bool Game::_isRedMapSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_redMap_isSet;
	} else {
		return _m_redMap_isSet && mgen::validation::validateFieldDeep(getRedMap());
	}
}

bool Game::_isBlueMapSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_blueMap_isSet;
	} else {
		return _m_blueMap_isSet && mgen::validation::validateFieldDeep(getBlueMap());
	}
}

bool Game::_isPhaseSet(const mgen::FieldSetDepth depth) const {
	return _m_phase_isSet;
}

bool Game::_isCurrentTeamSet(const mgen::FieldSetDepth depth) const {
	return _m_currentTeam_isSet;
}

bool Game::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isRedPlayerSet(mgen::SHALLOW) || _isRedPlayerSet(mgen::DEEP))
				&& (!_isBluePlayerSet(mgen::SHALLOW) || _isBluePlayerSet(mgen::DEEP))
				&& (!_isObserversSet(mgen::SHALLOW) || _isObserversSet(mgen::DEEP))
				&& (!_isRedMapSet(mgen::SHALLOW) || _isRedMapSet(mgen::DEEP))
				&& (!_isBlueMapSet(mgen::SHALLOW) || _isBlueMapSet(mgen::DEEP));
	}
}

bool Game::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Game&>(other) == *this;
}

Game * Game::_deepCopy() const {
	return new Game(*this);
}

mgen::MGenBase * Game::_newInstance() {
	return new Game;
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
		  
const std::string& Game::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.Game");
	return out;
}

const std::vector<long long>& Game::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 695257525138239013LL;
	return out;
}

const std::vector<short>& Game::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 8746;
	return out;
}

const std::vector<std::string>& Game::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.battleship.Game";
	return out;
}

const std::vector<std::string>& Game::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "Iio";
	return out;
}

const std::string& Game::_type_ids_16bit_base64_string() {
	static const std::string out("Iio");
	return out;
}

const std::string& Game::_type_id_16bit_base64() {
	static const std::string out("Iio");
	return out;
}

const std::vector<mgen::Field>& Game::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_redPlayer_metadata() << _field_bluePlayer_metadata() << _field_observers_metadata() << _field_redMap_metadata() << _field_blueMap_metadata() << _field_phase_metadata() << _field_currentTeam_metadata();
	return out;
}

const mgen::Field& Game::_field_redPlayer_metadata() {
	static const mgen::Field out(29583, "redPlayer");
	return out;
}

const mgen::Field& Game::_field_bluePlayer_metadata() {
	static const mgen::Field out(10760, "bluePlayer");
	return out;
}

const mgen::Field& Game::_field_observers_metadata() {
	static const mgen::Field out(22106, "observers");
	return out;
}

const mgen::Field& Game::_field_redMap_metadata() {
	static const mgen::Field out(21290, "redMap");
	return out;
}

const mgen::Field& Game::_field_blueMap_metadata() {
	static const mgen::Field out(-19206, "blueMap");
	return out;
}

const mgen::Field& Game::_field_phase_metadata() {
	static const mgen::Field out(7625, "phase");
	return out;
}

const mgen::Field& Game::_field_currentTeam_metadata() {
	static const mgen::Field out(-14726, "currentTeam");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

