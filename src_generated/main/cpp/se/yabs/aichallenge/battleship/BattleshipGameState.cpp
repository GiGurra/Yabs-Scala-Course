/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/BattleshipGameState.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

BattleshipGameState::BattleshipGameState() : 
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

BattleshipGameState::BattleshipGameState(const Player& redPlayer, 
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

BattleshipGameState::~BattleshipGameState() {
}

const Player& BattleshipGameState::getRedPlayer() const {
	return m_redPlayer;
}

const Player& BattleshipGameState::getBluePlayer() const {
	return m_bluePlayer;
}

const std::vector<Player> & BattleshipGameState::getObservers() const {
	return m_observers;
}

const Map& BattleshipGameState::getRedMap() const {
	return m_redMap;
}

const Map& BattleshipGameState::getBlueMap() const {
	return m_blueMap;
}

const Phase& BattleshipGameState::getPhase() const {
	return m_phase;
}

const Team& BattleshipGameState::getCurrentTeam() const {
	return m_currentTeam;
}

Player& BattleshipGameState::getRedPlayerMutable() {
	_m_redPlayer_isSet = true;
	return m_redPlayer;
}

Player& BattleshipGameState::getBluePlayerMutable() {
	_m_bluePlayer_isSet = true;
	return m_bluePlayer;
}

std::vector<Player> & BattleshipGameState::getObserversMutable() {
	_m_observers_isSet = true;
	return m_observers;
}

Map& BattleshipGameState::getRedMapMutable() {
	_m_redMap_isSet = true;
	return m_redMap;
}

Map& BattleshipGameState::getBlueMapMutable() {
	_m_blueMap_isSet = true;
	return m_blueMap;
}

Phase& BattleshipGameState::getPhaseMutable() {
	_m_phase_isSet = true;
	return m_phase;
}

Team& BattleshipGameState::getCurrentTeamMutable() {
	_m_currentTeam_isSet = true;
	return m_currentTeam;
}

BattleshipGameState& BattleshipGameState::setRedPlayer(const Player& redPlayer) {
	m_redPlayer = redPlayer;
	_m_redPlayer_isSet = true;
	return *this;
}

BattleshipGameState& BattleshipGameState::setBluePlayer(const Player& bluePlayer) {
	m_bluePlayer = bluePlayer;
	_m_bluePlayer_isSet = true;
	return *this;
}

BattleshipGameState& BattleshipGameState::setObservers(const std::vector<Player> & observers) {
	m_observers = observers;
	_m_observers_isSet = true;
	return *this;
}

BattleshipGameState& BattleshipGameState::setRedMap(const Map& redMap) {
	m_redMap = redMap;
	_m_redMap_isSet = true;
	return *this;
}

BattleshipGameState& BattleshipGameState::setBlueMap(const Map& blueMap) {
	m_blueMap = blueMap;
	_m_blueMap_isSet = true;
	return *this;
}

BattleshipGameState& BattleshipGameState::setPhase(const Phase& phase) {
	m_phase = phase;
	_m_phase_isSet = true;
	return *this;
}

BattleshipGameState& BattleshipGameState::setCurrentTeam(const Team& currentTeam) {
	m_currentTeam = currentTeam;
	_m_currentTeam_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool BattleshipGameState::hasRedPlayer() const {
	return _isRedPlayerSet(mgen::SHALLOW);
}

bool BattleshipGameState::hasBluePlayer() const {
	return _isBluePlayerSet(mgen::SHALLOW);
}

bool BattleshipGameState::hasObservers() const {
	return _isObserversSet(mgen::SHALLOW);
}

bool BattleshipGameState::hasRedMap() const {
	return _isRedMapSet(mgen::SHALLOW);
}

bool BattleshipGameState::hasBlueMap() const {
	return _isBlueMapSet(mgen::SHALLOW);
}

bool BattleshipGameState::hasPhase() const {
	return _isPhaseSet(mgen::SHALLOW);
}

bool BattleshipGameState::hasCurrentTeam() const {
	return _isCurrentTeamSet(mgen::SHALLOW);
}

BattleshipGameState& BattleshipGameState::unsetRedPlayer() {
	_setRedPlayerSet(false, mgen::SHALLOW);
	return *this;
}

BattleshipGameState& BattleshipGameState::unsetBluePlayer() {
	_setBluePlayerSet(false, mgen::SHALLOW);
	return *this;
}

BattleshipGameState& BattleshipGameState::unsetObservers() {
	_setObserversSet(false, mgen::SHALLOW);
	return *this;
}

BattleshipGameState& BattleshipGameState::unsetRedMap() {
	_setRedMapSet(false, mgen::SHALLOW);
	return *this;
}

BattleshipGameState& BattleshipGameState::unsetBlueMap() {
	_setBlueMapSet(false, mgen::SHALLOW);
	return *this;
}

BattleshipGameState& BattleshipGameState::unsetPhase() {
	_setPhaseSet(false, mgen::SHALLOW);
	return *this;
}

BattleshipGameState& BattleshipGameState::unsetCurrentTeam() {
	_setCurrentTeamSet(false, mgen::SHALLOW);
	return *this;
}

bool BattleshipGameState::operator==(const BattleshipGameState& other) const {
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

bool BattleshipGameState::operator!=(const BattleshipGameState& other) const {
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
		  
const mgen::Field * BattleshipGameState::_fieldById(const short id) const {
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

const mgen::Field * BattleshipGameState::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("redPlayer", &BattleshipGameState::_field_redPlayer_metadata())("bluePlayer", &BattleshipGameState::_field_bluePlayer_metadata())("observers", &BattleshipGameState::_field_observers_metadata())("redMap", &BattleshipGameState::_field_redMap_metadata())("blueMap", &BattleshipGameState::_field_blueMap_metadata())("phase", &BattleshipGameState::_field_phase_metadata())("currentTeam", &BattleshipGameState::_field_currentTeam_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long BattleshipGameState::_typeId() const {
	return _type_id;
}

const std::string& BattleshipGameState::_typeName() const {
	return _type_name();
}

const short BattleshipGameState::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& BattleshipGameState::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& BattleshipGameState::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& BattleshipGameState::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& BattleshipGameState::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& BattleshipGameState::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& BattleshipGameState::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& BattleshipGameState::_fieldMetadatas() const {
	return _field_metadatas();
}

BattleshipGameState& BattleshipGameState::_setRedPlayerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_redPlayer._setAllFieldsSet(state, mgen::DEEP);
	_m_redPlayer_isSet = state;
	return *this;
}

BattleshipGameState& BattleshipGameState::_setBluePlayerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_bluePlayer._setAllFieldsSet(state, mgen::DEEP);
	_m_bluePlayer_isSet = state;
	return *this;
}

BattleshipGameState& BattleshipGameState::_setObserversSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_observers.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_observers);
	_m_observers_isSet = state;
	return *this;
}

BattleshipGameState& BattleshipGameState::_setRedMapSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_redMap._setAllFieldsSet(state, mgen::DEEP);
	_m_redMap_isSet = state;
	return *this;
}

BattleshipGameState& BattleshipGameState::_setBlueMapSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_blueMap._setAllFieldsSet(state, mgen::DEEP);
	_m_blueMap_isSet = state;
	return *this;
}

BattleshipGameState& BattleshipGameState::_setPhaseSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_phase = Phase_UNKNOWN;
	_m_phase_isSet = state;
	return *this;
}

BattleshipGameState& BattleshipGameState::_setCurrentTeamSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_currentTeam = Team_UNKNOWN;
	_m_currentTeam_isSet = state;
	return *this;
}

BattleshipGameState& BattleshipGameState::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setRedPlayerSet(state, depth);
	_setBluePlayerSet(state, depth);
	_setObserversSet(state, depth);
	_setRedMapSet(state, depth);
	_setBlueMapSet(state, depth);
	_setPhaseSet(state, depth);
	_setCurrentTeamSet(state, depth);
	return *this;
}

int BattleshipGameState::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
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

bool BattleshipGameState::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
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

bool BattleshipGameState::_isRedPlayerSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_redPlayer_isSet;
	} else {
		return _m_redPlayer_isSet && mgen::validation::validateFieldDeep(getRedPlayer());
	}
}

bool BattleshipGameState::_isBluePlayerSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_bluePlayer_isSet;
	} else {
		return _m_bluePlayer_isSet && mgen::validation::validateFieldDeep(getBluePlayer());
	}
}

bool BattleshipGameState::_isObserversSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_observers_isSet;
	} else {
		return _m_observers_isSet && mgen::validation::validateFieldDeep(getObservers());
	}
}

bool BattleshipGameState::_isRedMapSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_redMap_isSet;
	} else {
		return _m_redMap_isSet && mgen::validation::validateFieldDeep(getRedMap());
	}
}

bool BattleshipGameState::_isBlueMapSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_blueMap_isSet;
	} else {
		return _m_blueMap_isSet && mgen::validation::validateFieldDeep(getBlueMap());
	}
}

bool BattleshipGameState::_isPhaseSet(const mgen::FieldSetDepth depth) const {
	return _m_phase_isSet;
}

bool BattleshipGameState::_isCurrentTeamSet(const mgen::FieldSetDepth depth) const {
	return _m_currentTeam_isSet;
}

bool BattleshipGameState::_validate(const mgen::FieldSetDepth depth) const { 
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

bool BattleshipGameState::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const BattleshipGameState&>(other) == *this;
}

BattleshipGameState * BattleshipGameState::_deepCopy() const {
	return new BattleshipGameState(*this);
}

mgen::MGenBase * BattleshipGameState::_newInstance() {
	return new BattleshipGameState;
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
		  
const std::string& BattleshipGameState::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.BattleshipGameState");
	return out;
}

const std::vector<long long>& BattleshipGameState::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 3745151566608547621LL;
	return out;
}

const std::vector<short>& BattleshipGameState::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -2927;
	return out;
}

const std::vector<std::string>& BattleshipGameState::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.battleship.BattleshipGameState";
	return out;
}

const std::vector<std::string>& BattleshipGameState::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "9JE";
	return out;
}

const std::string& BattleshipGameState::_type_ids_16bit_base64_string() {
	static const std::string out("9JE");
	return out;
}

const std::string& BattleshipGameState::_type_id_16bit_base64() {
	static const std::string out("9JE");
	return out;
}

const std::vector<mgen::Field>& BattleshipGameState::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_redPlayer_metadata() << _field_bluePlayer_metadata() << _field_observers_metadata() << _field_redMap_metadata() << _field_blueMap_metadata() << _field_phase_metadata() << _field_currentTeam_metadata();
	return out;
}

const mgen::Field& BattleshipGameState::_field_redPlayer_metadata() {
	static const mgen::Field out(-7294, "redPlayer");
	return out;
}

const mgen::Field& BattleshipGameState::_field_bluePlayer_metadata() {
	static const mgen::Field out(10760, "bluePlayer");
	return out;
}

const mgen::Field& BattleshipGameState::_field_observers_metadata() {
	static const mgen::Field out(22106, "observers");
	return out;
}

const mgen::Field& BattleshipGameState::_field_redMap_metadata() {
	static const mgen::Field out(28692, "redMap");
	return out;
}

const mgen::Field& BattleshipGameState::_field_blueMap_metadata() {
	static const mgen::Field out(-19206, "blueMap");
	return out;
}

const mgen::Field& BattleshipGameState::_field_phase_metadata() {
	static const mgen::Field out(7625, "phase");
	return out;
}

const mgen::Field& BattleshipGameState::_field_currentTeam_metadata() {
	static const mgen::Field out(-14726, "currentTeam");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

