/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/Map.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

Map::Map() : 
		_m_ships_isSet(false),
		_m_size_isSet(false) {
}

Map::Map(const std::vector<Ship> & ships, 
			const Vec2& size) : 
		m_ships(ships),
		m_size(size),
		_m_ships_isSet(true),
		_m_size_isSet(true) {
}

Map::~Map() {
}

const std::vector<Ship> & Map::getShips() const {
	return m_ships;
}

const Vec2& Map::getSize() const {
	return m_size;
}

std::vector<Ship> & Map::getShipsMutable() {
	_m_ships_isSet = true;
	return m_ships;
}

Vec2& Map::getSizeMutable() {
	_m_size_isSet = true;
	return m_size;
}

Map& Map::setShips(const std::vector<Ship> & ships) {
	m_ships = ships;
	_m_ships_isSet = true;
	return *this;
}

Map& Map::setSize(const Vec2& size) {
	m_size = size;
	_m_size_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Map::hasShips() const {
	return _isShipsSet(mgen::SHALLOW);
}

bool Map::hasSize() const {
	return _isSizeSet(mgen::SHALLOW);
}

Map& Map::unsetShips() {
	_setShipsSet(false, mgen::SHALLOW);
	return *this;
}

Map& Map::unsetSize() {
	_setSizeSet(false, mgen::SHALLOW);
	return *this;
}

bool Map::operator==(const Map& other) const {
	return true
		 && _isShipsSet(mgen::SHALLOW) == other._isShipsSet(mgen::SHALLOW)
		 && _isSizeSet(mgen::SHALLOW) == other._isSizeSet(mgen::SHALLOW)
		 && getShips() == other.getShips()
		 && getSize() == other.getSize();
}

bool Map::operator!=(const Map& other) const {
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
		  
const mgen::Field * Map::_fieldById(const short id) const {
	switch (id) {
	case _field_ships_id:
		return &_field_ships_metadata();
	case _field_size_id:
		return &_field_size_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Map::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("ships", &Map::_field_ships_metadata())("size", &Map::_field_size_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Map::_typeId() const {
	return _type_id;
}

const std::string& Map::_typeName() const {
	return _type_name();
}

const short Map::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Map::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Map::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Map::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Map::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Map::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Map::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Map::_fieldMetadatas() const {
	return _field_metadatas();
}

Map& Map::_setShipsSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_ships.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_ships);
	_m_ships_isSet = state;
	return *this;
}

Map& Map::_setSizeSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_size._setAllFieldsSet(state, mgen::DEEP);
	_m_size_isSet = state;
	return *this;
}

Map& Map::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setShipsSet(state, depth);
	_setSizeSet(state, depth);
	return *this;
}

int Map::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isShipsSet(depth) ? 1 : 0;
	out += _isSizeSet(depth) ? 1 : 0;
	return out;
}

bool Map::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_ships_id):
			return _isShipsSet(depth);
		case (_field_size_id):
			return _isSizeSet(depth);
		default:
			return false;
	}
}

bool Map::_isShipsSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_ships_isSet;
	} else {
		return _m_ships_isSet && mgen::validation::validateFieldDeep(getShips());
	}
}

bool Map::_isSizeSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_size_isSet;
	} else {
		return _m_size_isSet && mgen::validation::validateFieldDeep(getSize());
	}
}

bool Map::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isShipsSet(mgen::SHALLOW) || _isShipsSet(mgen::DEEP))
				&& (!_isSizeSet(mgen::SHALLOW) || _isSizeSet(mgen::DEEP));
	}
}

bool Map::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Map&>(other) == *this;
}

Map * Map::_deepCopy() const {
	return new Map(*this);
}

mgen::MGenBase * Map::_newInstance() {
	return new Map;
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
		  
const std::string& Map::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.Map");
	return out;
}

const std::vector<long long>& Map::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6892640198302983990LL;
	return out;
}

const std::vector<short>& Map::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 3538;
	return out;
}

const std::vector<std::string>& Map::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.battleship.Map";
	return out;
}

const std::vector<std::string>& Map::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "DdI";
	return out;
}

const std::string& Map::_type_ids_16bit_base64_string() {
	static const std::string out("DdI");
	return out;
}

const std::string& Map::_type_id_16bit_base64() {
	static const std::string out("DdI");
	return out;
}

const std::vector<mgen::Field>& Map::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_ships_metadata() << _field_size_metadata();
	return out;
}

const mgen::Field& Map::_field_ships_metadata() {
	static const mgen::Field out(32030, "ships");
	return out;
}

const mgen::Field& Map::_field_size_metadata() {
	static const mgen::Field out(-31998, "size");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

