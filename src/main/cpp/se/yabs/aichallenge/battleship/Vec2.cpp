/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/Vec2.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

Vec2::Vec2() : 
		m_x(0),
		m_y(0),
		_m_x_isSet(false),
		_m_y_isSet(false) {
}

Vec2::Vec2(const int& x, 
			const int& y) : 
		m_x(x),
		m_y(y),
		_m_x_isSet(true),
		_m_y_isSet(true) {
}

Vec2::~Vec2() {
}

const int& Vec2::getX() const {
	return m_x;
}

const int& Vec2::getY() const {
	return m_y;
}

int& Vec2::getXMutable() {
	_m_x_isSet = true;
	return m_x;
}

int& Vec2::getYMutable() {
	_m_y_isSet = true;
	return m_y;
}

Vec2& Vec2::setX(const int& x) {
	m_x = x;
	_m_x_isSet = true;
	return *this;
}

Vec2& Vec2::setY(const int& y) {
	m_y = y;
	_m_y_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Vec2::hasX() const {
	return _isXSet(mgen::SHALLOW);
}

bool Vec2::hasY() const {
	return _isYSet(mgen::SHALLOW);
}

Vec2& Vec2::unsetX() {
	_setXSet(false, mgen::SHALLOW);
	return *this;
}

Vec2& Vec2::unsetY() {
	_setYSet(false, mgen::SHALLOW);
	return *this;
}

bool Vec2::operator==(const Vec2& other) const {
	return true
		 && _isXSet(mgen::SHALLOW) == other._isXSet(mgen::SHALLOW)
		 && _isYSet(mgen::SHALLOW) == other._isYSet(mgen::SHALLOW)
		 && getX() == other.getX()
		 && getY() == other.getY();
}

bool Vec2::operator!=(const Vec2& other) const {
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
		  
const mgen::Field * Vec2::_fieldById(const short id) const {
	switch (id) {
	case _field_x_id:
		return &_field_x_metadata();
	case _field_y_id:
		return &_field_y_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Vec2::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("x", &Vec2::_field_x_metadata())("y", &Vec2::_field_y_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Vec2::_typeId() const {
	return _type_id;
}

const std::string& Vec2::_typeName() const {
	return _type_name();
}

const short Vec2::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Vec2::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Vec2::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Vec2::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Vec2::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Vec2::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Vec2::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Vec2::_fieldMetadatas() const {
	return _field_metadatas();
}

Vec2& Vec2::_setXSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_x = 0;
	_m_x_isSet = state;
	return *this;
}

Vec2& Vec2::_setYSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_y = 0;
	_m_y_isSet = state;
	return *this;
}

Vec2& Vec2::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setXSet(state, depth);
	_setYSet(state, depth);
	return *this;
}

int Vec2::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isXSet(depth) ? 1 : 0;
	out += _isYSet(depth) ? 1 : 0;
	return out;
}

bool Vec2::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_x_id):
			return _isXSet(depth);
		case (_field_y_id):
			return _isYSet(depth);
		default:
			return false;
	}
}

bool Vec2::_isXSet(const mgen::FieldSetDepth depth) const {
	return _m_x_isSet;
}

bool Vec2::_isYSet(const mgen::FieldSetDepth depth) const {
	return _m_y_isSet;
}

bool Vec2::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool Vec2::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Vec2&>(other) == *this;
}

Vec2 * Vec2::_deepCopy() const {
	return new Vec2(*this);
}

mgen::MGenBase * Vec2::_newInstance() {
	return new Vec2;
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
		  
const std::string& Vec2::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.Vec2");
	return out;
}

const std::vector<long long>& Vec2::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5114268100851014382LL;
	return out;
}

const std::vector<short>& Vec2::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -25884;
	return out;
}

const std::vector<std::string>& Vec2::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.battleship.Vec2";
	return out;
}

const std::vector<std::string>& Vec2::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "muQ";
	return out;
}

const std::string& Vec2::_type_ids_16bit_base64_string() {
	static const std::string out("muQ");
	return out;
}

const std::string& Vec2::_type_id_16bit_base64() {
	static const std::string out("muQ");
	return out;
}

const std::vector<mgen::Field>& Vec2::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_x_metadata() << _field_y_metadata();
	return out;
}

const mgen::Field& Vec2::_field_x_metadata() {
	static const mgen::Field out(7791, "x");
	return out;
}

const mgen::Field& Vec2::_field_y_metadata() {
	static const mgen::Field out(3662, "y");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

