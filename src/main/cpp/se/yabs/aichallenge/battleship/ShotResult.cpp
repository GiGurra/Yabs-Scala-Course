/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/ShotResult.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

ShotResult::ShotResult() : 
		_m_shooterName_isSet(false),
		_m_shot_isSet(false) {
}

ShotResult::ShotResult(const std::string& shooterName, 
			const Shot& shot) : 
		m_shooterName(shooterName),
		m_shot(shot),
		_m_shooterName_isSet(true),
		_m_shot_isSet(true) {
}

ShotResult::~ShotResult() {
}

const std::string& ShotResult::getShooterName() const {
	return m_shooterName;
}

const Shot& ShotResult::getShot() const {
	return m_shot;
}

std::string& ShotResult::getShooterNameMutable() {
	_m_shooterName_isSet = true;
	return m_shooterName;
}

Shot& ShotResult::getShotMutable() {
	_m_shot_isSet = true;
	return m_shot;
}

ShotResult& ShotResult::setShooterName(const std::string& shooterName) {
	m_shooterName = shooterName;
	_m_shooterName_isSet = true;
	return *this;
}

ShotResult& ShotResult::setShot(const Shot& shot) {
	m_shot = shot;
	_m_shot_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool ShotResult::hasShooterName() const {
	return _isShooterNameSet(mgen::SHALLOW);
}

bool ShotResult::hasShot() const {
	return _isShotSet(mgen::SHALLOW);
}

ShotResult& ShotResult::unsetShooterName() {
	_setShooterNameSet(false, mgen::SHALLOW);
	return *this;
}

ShotResult& ShotResult::unsetShot() {
	_setShotSet(false, mgen::SHALLOW);
	return *this;
}

bool ShotResult::operator==(const ShotResult& other) const {
	return true
		 && _isShooterNameSet(mgen::SHALLOW) == other._isShooterNameSet(mgen::SHALLOW)
		 && _isShotSet(mgen::SHALLOW) == other._isShotSet(mgen::SHALLOW)
		 && getShooterName() == other.getShooterName()
		 && getShot() == other.getShot();
}

bool ShotResult::operator!=(const ShotResult& other) const {
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
		  
const mgen::Field * ShotResult::_fieldById(const short id) const {
	switch (id) {
	case _field_shooterName_id:
		return &_field_shooterName_metadata();
	case _field_shot_id:
		return &_field_shot_metadata();
	default:
		return 0;
	}
}

const mgen::Field * ShotResult::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("shooterName", &ShotResult::_field_shooterName_metadata())("shot", &ShotResult::_field_shot_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long ShotResult::_typeId() const {
	return _type_id;
}

const std::string& ShotResult::_typeName() const {
	return _type_name();
}

const short ShotResult::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& ShotResult::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& ShotResult::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& ShotResult::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& ShotResult::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& ShotResult::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& ShotResult::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& ShotResult::_fieldMetadatas() const {
	return _field_metadatas();
}

ShotResult& ShotResult::_setShooterNameSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_shooterName = "";
	_m_shooterName_isSet = state;
	return *this;
}

ShotResult& ShotResult::_setShotSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_shot._setAllFieldsSet(state, mgen::DEEP);
	_m_shot_isSet = state;
	return *this;
}

ShotResult& ShotResult::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setShooterNameSet(state, depth);
	_setShotSet(state, depth);
	return *this;
}

int ShotResult::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isShooterNameSet(depth) ? 1 : 0;
	out += _isShotSet(depth) ? 1 : 0;
	return out;
}

bool ShotResult::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_shooterName_id):
			return _isShooterNameSet(depth);
		case (_field_shot_id):
			return _isShotSet(depth);
		default:
			return false;
	}
}

bool ShotResult::_isShooterNameSet(const mgen::FieldSetDepth depth) const {
	return _m_shooterName_isSet;
}

bool ShotResult::_isShotSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_shot_isSet;
	} else {
		return _m_shot_isSet && mgen::validation::validateFieldDeep(getShot());
	}
}

bool ShotResult::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isShotSet(mgen::SHALLOW) || _isShotSet(mgen::DEEP));
	}
}

bool ShotResult::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const ShotResult&>(other) == *this;
}

ShotResult * ShotResult::_deepCopy() const {
	return new ShotResult(*this);
}

mgen::MGenBase * ShotResult::_newInstance() {
	return new ShotResult;
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
		  
const std::string& ShotResult::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.ShotResult");
	return out;
}

const std::vector<long long>& ShotResult::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6843908126517847773LL << 2246573734118294447LL << 2567022198048374295LL << 1236274293076590984LL;
	return out;
}

const std::vector<short>& ShotResult::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -23638 << -25529 << 29355 << 20683;
	return out;
}

const std::vector<std::string>& ShotResult::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Message" << "se.yabs.aichallenge.GameMessage" << "se.yabs.aichallenge.battleship.BattleshipMessage" << "se.yabs.aichallenge.battleship.ShotResult";
	return out;
}

const std::vector<std::string>& ShotResult::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "o6o" << "nEc" << "cqs" << "UMs";
	return out;
}

const std::string& ShotResult::_type_ids_16bit_base64_string() {
	static const std::string out("o6onEccqsUMs");
	return out;
}

const std::string& ShotResult::_type_id_16bit_base64() {
	static const std::string out("UMs");
	return out;
}

const std::vector<mgen::Field>& ShotResult::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_shooterName_metadata() << _field_shot_metadata();
	return out;
}

const mgen::Field& ShotResult::_field_shooterName_metadata() {
	static const mgen::Field out(867, "shooterName");
	return out;
}

const mgen::Field& ShotResult::_field_shot_metadata() {
	static const mgen::Field out(19108, "shot");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

