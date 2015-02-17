/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/UserDb.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

UserDb::UserDb() : 
		m_users(std::map<std::string, User>()),
		m_games(std::vector<GamePlayed>()),
		_m_users_isSet(true),
		_m_games_isSet(true) {
}

UserDb::UserDb(const std::map<std::string, User> & users, 
			const std::vector<GamePlayed> & games) : 
		m_users(users),
		m_games(games),
		_m_users_isSet(true),
		_m_games_isSet(true) {
}

UserDb::~UserDb() {
}

const std::map<std::string, User> & UserDb::getUsers() const {
	return m_users;
}

const std::vector<GamePlayed> & UserDb::getGames() const {
	return m_games;
}

std::map<std::string, User> & UserDb::getUsersMutable() {
	_m_users_isSet = true;
	return m_users;
}

std::vector<GamePlayed> & UserDb::getGamesMutable() {
	_m_games_isSet = true;
	return m_games;
}

UserDb& UserDb::setUsers(const std::map<std::string, User> & users) {
	m_users = users;
	_m_users_isSet = true;
	return *this;
}

UserDb& UserDb::setGames(const std::vector<GamePlayed> & games) {
	m_games = games;
	_m_games_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool UserDb::hasUsers() const {
	return _isUsersSet(mgen::SHALLOW);
}

bool UserDb::hasGames() const {
	return _isGamesSet(mgen::SHALLOW);
}

UserDb& UserDb::unsetUsers() {
	_setUsersSet(false, mgen::SHALLOW);
	return *this;
}

UserDb& UserDb::unsetGames() {
	_setGamesSet(false, mgen::SHALLOW);
	return *this;
}

bool UserDb::operator==(const UserDb& other) const {
	return true
		 && _isUsersSet(mgen::SHALLOW) == other._isUsersSet(mgen::SHALLOW)
		 && _isGamesSet(mgen::SHALLOW) == other._isGamesSet(mgen::SHALLOW)
		 && getUsers() == other.getUsers()
		 && getGames() == other.getGames();
}

bool UserDb::operator!=(const UserDb& other) const {
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
		  
const mgen::Field * UserDb::_fieldById(const short id) const {
	switch (id) {
	case _field_users_id:
		return &_field_users_metadata();
	case _field_games_id:
		return &_field_games_metadata();
	default:
		return 0;
	}
}

const mgen::Field * UserDb::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("users", &UserDb::_field_users_metadata())("games", &UserDb::_field_games_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long UserDb::_typeId() const {
	return _type_id;
}

const std::string& UserDb::_typeName() const {
	return _type_name();
}

const short UserDb::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& UserDb::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& UserDb::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& UserDb::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& UserDb::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& UserDb::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& UserDb::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& UserDb::_fieldMetadatas() const {
	return _field_metadatas();
}

UserDb& UserDb::_setUsersSet(const bool state, const mgen::FieldSetDepth depth) {
	if (state && !_isUsersSet(mgen::SHALLOW))
		m_users = std::map<std::string, User>();
	if (!state)
		m_users.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_users);
	_m_users_isSet = state;
	return *this;
}

UserDb& UserDb::_setGamesSet(const bool state, const mgen::FieldSetDepth depth) {
	if (state && !_isGamesSet(mgen::SHALLOW))
		m_games = std::vector<GamePlayed>();
	if (!state)
		m_games.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_games);
	_m_games_isSet = state;
	return *this;
}

UserDb& UserDb::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setUsersSet(state, depth);
	_setGamesSet(state, depth);
	return *this;
}

int UserDb::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isUsersSet(depth) ? 1 : 0;
	out += _isGamesSet(depth) ? 1 : 0;
	return out;
}

bool UserDb::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_users_id):
			return _isUsersSet(depth);
		case (_field_games_id):
			return _isGamesSet(depth);
		default:
			return false;
	}
}

bool UserDb::_isUsersSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_users_isSet;
	} else {
		return _m_users_isSet && mgen::validation::validateFieldDeep(getUsers());
	}
}

bool UserDb::_isGamesSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_games_isSet;
	} else {
		return _m_games_isSet && mgen::validation::validateFieldDeep(getGames());
	}
}

bool UserDb::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isUsersSet(mgen::SHALLOW) || _isUsersSet(mgen::DEEP))
				&& (!_isGamesSet(mgen::SHALLOW) || _isGamesSet(mgen::DEEP));
	}
}

bool UserDb::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const UserDb&>(other) == *this;
}

UserDb * UserDb::_deepCopy() const {
	return new UserDb(*this);
}

mgen::MGenBase * UserDb::_newInstance() {
	return new UserDb;
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
		  
const std::string& UserDb::_type_name() {
	static const std::string out("se.yabs.aichallenge.UserDb");
	return out;
}

const std::vector<long long>& UserDb::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 263403507581591043LL;
	return out;
}

const std::vector<short>& UserDb::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -577;
	return out;
}

const std::vector<std::string>& UserDb::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.UserDb";
	return out;
}

const std::vector<std::string>& UserDb::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "/b8";
	return out;
}

const std::string& UserDb::_type_ids_16bit_base64_string() {
	static const std::string out("/b8");
	return out;
}

const std::string& UserDb::_type_id_16bit_base64() {
	static const std::string out("/b8");
	return out;
}

const std::vector<mgen::Field>& UserDb::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_users_metadata() << _field_games_metadata();
	return out;
}

const mgen::Field& UserDb::_field_users_metadata() {
	static const mgen::Field out(-23008, "users");
	return out;
}

const mgen::Field& UserDb::_field_games_metadata() {
	static const mgen::Field out(9075, "games");
	return out;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

