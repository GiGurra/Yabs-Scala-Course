/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/Ship.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

Ship::Ship() : 
		m_points(std::vector<Segment>()),
		_m_points_isSet(true) {
}

Ship::Ship(const std::vector<Segment> & points) : 
		m_points(points),
		_m_points_isSet(true) {
}

Ship::~Ship() {
}

const std::vector<Segment> & Ship::getPoints() const {
	return m_points;
}

std::vector<Segment> & Ship::getPointsMutable() {
	_m_points_isSet = true;
	return m_points;
}

Ship& Ship::setPoints(const std::vector<Segment> & points) {
	m_points = points;
	_m_points_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Ship::hasPoints() const {
	return _isPointsSet(mgen::SHALLOW);
}

Ship& Ship::unsetPoints() {
	_setPointsSet(false, mgen::SHALLOW);
	return *this;
}

bool Ship::operator==(const Ship& other) const {
	return true
		 && _isPointsSet(mgen::SHALLOW) == other._isPointsSet(mgen::SHALLOW)
		 && getPoints() == other.getPoints();
}

bool Ship::operator!=(const Ship& other) const {
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
		  
const mgen::Field * Ship::_fieldById(const short id) const {
	switch (id) {
	case _field_points_id:
		return &_field_points_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Ship::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("points", &Ship::_field_points_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Ship::_typeId() const {
	return _type_id;
}

const std::string& Ship::_typeName() const {
	return _type_name();
}

const short Ship::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Ship::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Ship::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Ship::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Ship::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Ship::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Ship::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Ship::_fieldMetadatas() const {
	return _field_metadatas();
}

Ship& Ship::_setPointsSet(const bool state, const mgen::FieldSetDepth depth) {
	if (state && !_isPointsSet(mgen::SHALLOW))
		m_points = std::vector<Segment>();
	if (!state)
		m_points.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_points);
	_m_points_isSet = state;
	return *this;
}

Ship& Ship::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setPointsSet(state, depth);
	return *this;
}

int Ship::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPointsSet(depth) ? 1 : 0;
	return out;
}

bool Ship::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_points_id):
			return _isPointsSet(depth);
		default:
			return false;
	}
}

bool Ship::_isPointsSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_points_isSet;
	} else {
		return _m_points_isSet && mgen::validation::validateFieldDeep(getPoints());
	}
}

bool Ship::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isPointsSet(mgen::SHALLOW) || _isPointsSet(mgen::DEEP));
	}
}

bool Ship::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Ship&>(other) == *this;
}

Ship * Ship::_deepCopy() const {
	return new Ship(*this);
}

mgen::MGenBase * Ship::_newInstance() {
	return new Ship;
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
		  
const std::string& Ship::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.Ship");
	return out;
}

const std::vector<long long>& Ship::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6060363830252660056LL;
	return out;
}

const std::vector<short>& Ship::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -7235;
	return out;
}

const std::vector<std::string>& Ship::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.battleship.Ship";
	return out;
}

const std::vector<std::string>& Ship::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "470";
	return out;
}

const std::string& Ship::_type_ids_16bit_base64_string() {
	static const std::string out("470");
	return out;
}

const std::string& Ship::_type_id_16bit_base64() {
	static const std::string out("470");
	return out;
}

const std::vector<mgen::Field>& Ship::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_points_metadata();
	return out;
}

const mgen::Field& Ship::_field_points_metadata() {
	static const mgen::Field out(-26865, "points");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

