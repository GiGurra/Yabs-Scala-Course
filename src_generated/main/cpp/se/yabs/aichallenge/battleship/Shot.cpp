/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/Shot.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

Shot::Shot() : 
		m_isHit(false),
		_m_pos_isSet(false),
		_m_isHit_isSet(false) {
}

Shot::Shot(const Vec2& pos, 
			const bool& isHit) : 
		m_pos(pos),
		m_isHit(isHit),
		_m_pos_isSet(true),
		_m_isHit_isSet(true) {
}

Shot::~Shot() {
}

const Vec2& Shot::getPos() const {
	return m_pos;
}

const bool& Shot::getIsHit() const {
	return m_isHit;
}

Vec2& Shot::getPosMutable() {
	_m_pos_isSet = true;
	return m_pos;
}

bool& Shot::getIsHitMutable() {
	_m_isHit_isSet = true;
	return m_isHit;
}

Shot& Shot::setPos(const Vec2& pos) {
	m_pos = pos;
	_m_pos_isSet = true;
	return *this;
}

Shot& Shot::setIsHit(const bool& isHit) {
	m_isHit = isHit;
	_m_isHit_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Shot::hasPos() const {
	return _isPosSet(mgen::SHALLOW);
}

bool Shot::hasIsHit() const {
	return _isIsHitSet(mgen::SHALLOW);
}

Shot& Shot::unsetPos() {
	_setPosSet(false, mgen::SHALLOW);
	return *this;
}

Shot& Shot::unsetIsHit() {
	_setIsHitSet(false, mgen::SHALLOW);
	return *this;
}

bool Shot::operator==(const Shot& other) const {
	return true
		 && _isPosSet(mgen::SHALLOW) == other._isPosSet(mgen::SHALLOW)
		 && _isIsHitSet(mgen::SHALLOW) == other._isIsHitSet(mgen::SHALLOW)
		 && getPos() == other.getPos()
		 && getIsHit() == other.getIsHit();
}

bool Shot::operator!=(const Shot& other) const {
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
		  
const mgen::Field * Shot::_fieldById(const short id) const {
	switch (id) {
	case _field_pos_id:
		return &_field_pos_metadata();
	case _field_isHit_id:
		return &_field_isHit_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Shot::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("pos", &Shot::_field_pos_metadata())("isHit", &Shot::_field_isHit_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Shot::_typeId() const {
	return _type_id;
}

const std::string& Shot::_typeName() const {
	return _type_name();
}

const short Shot::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Shot::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Shot::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Shot::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Shot::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Shot::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Shot::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Shot::_fieldMetadatas() const {
	return _field_metadatas();
}

Shot& Shot::_setPosSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_pos._setAllFieldsSet(state, mgen::DEEP);
	_m_pos_isSet = state;
	return *this;
}

Shot& Shot::_setIsHitSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_isHit = false;
	_m_isHit_isSet = state;
	return *this;
}

Shot& Shot::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setPosSet(state, depth);
	_setIsHitSet(state, depth);
	return *this;
}

int Shot::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPosSet(depth) ? 1 : 0;
	out += _isIsHitSet(depth) ? 1 : 0;
	return out;
}

bool Shot::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_pos_id):
			return _isPosSet(depth);
		case (_field_isHit_id):
			return _isIsHitSet(depth);
		default:
			return false;
	}
}

bool Shot::_isPosSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_pos_isSet;
	} else {
		return _m_pos_isSet && mgen::validation::validateFieldDeep(getPos());
	}
}

bool Shot::_isIsHitSet(const mgen::FieldSetDepth depth) const {
	return _m_isHit_isSet;
}

bool Shot::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isPosSet(mgen::SHALLOW) || _isPosSet(mgen::DEEP));
	}
}

bool Shot::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Shot&>(other) == *this;
}

Shot * Shot::_deepCopy() const {
	return new Shot(*this);
}

mgen::MGenBase * Shot::_newInstance() {
	return new Shot;
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
		  
const std::string& Shot::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.Shot");
	return out;
}

const std::vector<long long>& Shot::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 5723027387374372704LL;
	return out;
}

const std::vector<short>& Shot::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 2463;
	return out;
}

const std::vector<std::string>& Shot::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.battleship.Shot";
	return out;
}

const std::vector<std::string>& Shot::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "CZ8";
	return out;
}

const std::string& Shot::_type_ids_16bit_base64_string() {
	static const std::string out("CZ8");
	return out;
}

const std::string& Shot::_type_id_16bit_base64() {
	static const std::string out("CZ8");
	return out;
}

const std::vector<mgen::Field>& Shot::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_pos_metadata() << _field_isHit_metadata();
	return out;
}

const mgen::Field& Shot::_field_pos_metadata() {
	static const mgen::Field out(16756, "pos");
	return out;
}

const mgen::Field& Shot::_field_isHit_metadata() {
	static const mgen::Field out(17064, "isHit");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

