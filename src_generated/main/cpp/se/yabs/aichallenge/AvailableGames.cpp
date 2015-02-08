/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/AvailableGames.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

AvailableGames::AvailableGames() : 
		_m_games_isSet(false) {
}

AvailableGames::AvailableGames(const std::vector<GameSelection> & games) : 
		m_games(games),
		_m_games_isSet(true) {
}

AvailableGames::~AvailableGames() {
}

const std::vector<GameSelection> & AvailableGames::getGames() const {
	return m_games;
}

std::vector<GameSelection> & AvailableGames::getGamesMutable() {
	_m_games_isSet = true;
	return m_games;
}

AvailableGames& AvailableGames::setGames(const std::vector<GameSelection> & games) {
	m_games = games;
	_m_games_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool AvailableGames::hasGames() const {
	return _isGamesSet(mgen::SHALLOW);
}

AvailableGames& AvailableGames::unsetGames() {
	_setGamesSet(false, mgen::SHALLOW);
	return *this;
}

bool AvailableGames::operator==(const AvailableGames& other) const {
	return true
		 && _isGamesSet(mgen::SHALLOW) == other._isGamesSet(mgen::SHALLOW)
		 && getGames() == other.getGames();
}

bool AvailableGames::operator!=(const AvailableGames& other) const {
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
		  
const mgen::Field * AvailableGames::_fieldById(const short id) const {
	switch (id) {
	case _field_games_id:
		return &_field_games_metadata();
	default:
		return 0;
	}
}

const mgen::Field * AvailableGames::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("games", &AvailableGames::_field_games_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long AvailableGames::_typeId() const {
	return _type_id;
}

const std::string& AvailableGames::_typeName() const {
	return _type_name();
}

const short AvailableGames::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& AvailableGames::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& AvailableGames::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& AvailableGames::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& AvailableGames::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& AvailableGames::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& AvailableGames::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& AvailableGames::_fieldMetadatas() const {
	return _field_metadatas();
}

AvailableGames& AvailableGames::_setGamesSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_games.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_games);
	_m_games_isSet = state;
	return *this;
}

AvailableGames& AvailableGames::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setGamesSet(state, depth);
	return *this;
}

int AvailableGames::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isGamesSet(depth) ? 1 : 0;
	return out;
}

bool AvailableGames::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_games_id):
			return _isGamesSet(depth);
		default:
			return false;
	}
}

bool AvailableGames::_isGamesSet(const mgen::FieldSetDepth depth) const {
	return _m_games_isSet;
}

bool AvailableGames::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool AvailableGames::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const AvailableGames&>(other) == *this;
}

AvailableGames * AvailableGames::_deepCopy() const {
	return new AvailableGames(*this);
}

mgen::MGenBase * AvailableGames::_newInstance() {
	return new AvailableGames;
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
		  
const std::string& AvailableGames::_type_name() {
	static const std::string out("se.yabs.aichallenge.AvailableGames");
	return out;
}

const std::vector<long long>& AvailableGames::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 4665267659848057606LL;
	return out;
}

const std::vector<short>& AvailableGames::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 458;
	return out;
}

const std::vector<std::string>& AvailableGames::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.AvailableGames";
	return out;
}

const std::vector<std::string>& AvailableGames::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "Aco";
	return out;
}

const std::string& AvailableGames::_type_ids_16bit_base64_string() {
	static const std::string out("Aco");
	return out;
}

const std::string& AvailableGames::_type_id_16bit_base64() {
	static const std::string out("Aco");
	return out;
}

const std::vector<mgen::Field>& AvailableGames::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_games_metadata();
	return out;
}

const mgen::Field& AvailableGames::_field_games_metadata() {
	static const mgen::Field out(9075, "games");
	return out;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

