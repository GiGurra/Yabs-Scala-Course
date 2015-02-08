/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/Segment.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

Segment::Segment() : 
		m_alive(false),
		_m_alive_isSet(false),
		_m_pos_isSet(false) {
}

Segment::Segment(const bool& alive, 
			const Vec2& pos) : 
		m_alive(alive),
		m_pos(pos),
		_m_alive_isSet(true),
		_m_pos_isSet(true) {
}

Segment::~Segment() {
}

const bool& Segment::getAlive() const {
	return m_alive;
}

const Vec2& Segment::getPos() const {
	return m_pos;
}

bool& Segment::getAliveMutable() {
	_m_alive_isSet = true;
	return m_alive;
}

Vec2& Segment::getPosMutable() {
	_m_pos_isSet = true;
	return m_pos;
}

Segment& Segment::setAlive(const bool& alive) {
	m_alive = alive;
	_m_alive_isSet = true;
	return *this;
}

Segment& Segment::setPos(const Vec2& pos) {
	m_pos = pos;
	_m_pos_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Segment::hasAlive() const {
	return _isAliveSet(mgen::SHALLOW);
}

bool Segment::hasPos() const {
	return _isPosSet(mgen::SHALLOW);
}

Segment& Segment::unsetAlive() {
	_setAliveSet(false, mgen::SHALLOW);
	return *this;
}

Segment& Segment::unsetPos() {
	_setPosSet(false, mgen::SHALLOW);
	return *this;
}

bool Segment::operator==(const Segment& other) const {
	return true
		 && _isAliveSet(mgen::SHALLOW) == other._isAliveSet(mgen::SHALLOW)
		 && _isPosSet(mgen::SHALLOW) == other._isPosSet(mgen::SHALLOW)
		 && getAlive() == other.getAlive()
		 && getPos() == other.getPos();
}

bool Segment::operator!=(const Segment& other) const {
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
		  
const mgen::Field * Segment::_fieldById(const short id) const {
	switch (id) {
	case _field_alive_id:
		return &_field_alive_metadata();
	case _field_pos_id:
		return &_field_pos_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Segment::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("alive", &Segment::_field_alive_metadata())("pos", &Segment::_field_pos_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Segment::_typeId() const {
	return _type_id;
}

const std::string& Segment::_typeName() const {
	return _type_name();
}

const short Segment::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Segment::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Segment::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Segment::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Segment::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Segment::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Segment::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Segment::_fieldMetadatas() const {
	return _field_metadatas();
}

Segment& Segment::_setAliveSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_alive = false;
	_m_alive_isSet = state;
	return *this;
}

Segment& Segment::_setPosSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_pos._setAllFieldsSet(state, mgen::DEEP);
	_m_pos_isSet = state;
	return *this;
}

Segment& Segment::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setAliveSet(state, depth);
	_setPosSet(state, depth);
	return *this;
}

int Segment::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isAliveSet(depth) ? 1 : 0;
	out += _isPosSet(depth) ? 1 : 0;
	return out;
}

bool Segment::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_alive_id):
			return _isAliveSet(depth);
		case (_field_pos_id):
			return _isPosSet(depth);
		default:
			return false;
	}
}

bool Segment::_isAliveSet(const mgen::FieldSetDepth depth) const {
	return _m_alive_isSet;
}

bool Segment::_isPosSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_pos_isSet;
	} else {
		return _m_pos_isSet && mgen::validation::validateFieldDeep(getPos());
	}
}

bool Segment::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isPosSet(mgen::SHALLOW) || _isPosSet(mgen::DEEP));
	}
}

bool Segment::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Segment&>(other) == *this;
}

Segment * Segment::_deepCopy() const {
	return new Segment(*this);
}

mgen::MGenBase * Segment::_newInstance() {
	return new Segment;
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
		  
const std::string& Segment::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.Segment");
	return out;
}

const std::vector<long long>& Segment::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 9066045619354066259LL;
	return out;
}

const std::vector<short>& Segment::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 21591;
	return out;
}

const std::vector<std::string>& Segment::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.battleship.Segment";
	return out;
}

const std::vector<std::string>& Segment::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "VFc";
	return out;
}

const std::string& Segment::_type_ids_16bit_base64_string() {
	static const std::string out("VFc");
	return out;
}

const std::string& Segment::_type_id_16bit_base64() {
	static const std::string out("VFc");
	return out;
}

const std::vector<mgen::Field>& Segment::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_alive_metadata() << _field_pos_metadata();
	return out;
}

const mgen::Field& Segment::_field_alive_metadata() {
	static const mgen::Field out(12135, "alive");
	return out;
}

const mgen::Field& Segment::_field_pos_metadata() {
	static const mgen::Field out(16756, "pos");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

