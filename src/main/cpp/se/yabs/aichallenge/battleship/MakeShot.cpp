/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/MakeShot.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

MakeShot::MakeShot() : 
		_m_shot_isSet(false) {
}

MakeShot::MakeShot(const Shot& shot) : 
		m_shot(shot),
		_m_shot_isSet(true) {
}

MakeShot::~MakeShot() {
}

const Shot& MakeShot::getShot() const {
	return m_shot;
}

Shot& MakeShot::getShotMutable() {
	_m_shot_isSet = true;
	return m_shot;
}

MakeShot& MakeShot::setShot(const Shot& shot) {
	m_shot = shot;
	_m_shot_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool MakeShot::hasShot() const {
	return _isShotSet(mgen::SHALLOW);
}

MakeShot& MakeShot::unsetShot() {
	_setShotSet(false, mgen::SHALLOW);
	return *this;
}

bool MakeShot::operator==(const MakeShot& other) const {
	return true
		 && _isShotSet(mgen::SHALLOW) == other._isShotSet(mgen::SHALLOW)
		 && getShot() == other.getShot();
}

bool MakeShot::operator!=(const MakeShot& other) const {
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
		  
const mgen::Field * MakeShot::_fieldById(const short id) const {
	switch (id) {
	case _field_shot_id:
		return &_field_shot_metadata();
	default:
		return 0;
	}
}

const mgen::Field * MakeShot::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("shot", &MakeShot::_field_shot_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long MakeShot::_typeId() const {
	return _type_id;
}

const std::string& MakeShot::_typeName() const {
	return _type_name();
}

const short MakeShot::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& MakeShot::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& MakeShot::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& MakeShot::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& MakeShot::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& MakeShot::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& MakeShot::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& MakeShot::_fieldMetadatas() const {
	return _field_metadatas();
}

MakeShot& MakeShot::_setShotSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_shot._setAllFieldsSet(state, mgen::DEEP);
	_m_shot_isSet = state;
	return *this;
}

MakeShot& MakeShot::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setShotSet(state, depth);
	return *this;
}

int MakeShot::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isShotSet(depth) ? 1 : 0;
	return out;
}

bool MakeShot::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_shot_id):
			return _isShotSet(depth);
		default:
			return false;
	}
}

bool MakeShot::_isShotSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_shot_isSet;
	} else {
		return _m_shot_isSet && mgen::validation::validateFieldDeep(getShot());
	}
}

bool MakeShot::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isShotSet(mgen::SHALLOW) || _isShotSet(mgen::DEEP));
	}
}

bool MakeShot::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const MakeShot&>(other) == *this;
}

MakeShot * MakeShot::_deepCopy() const {
	return new MakeShot(*this);
}

mgen::MGenBase * MakeShot::_newInstance() {
	return new MakeShot;
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
		  
const std::string& MakeShot::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.MakeShot");
	return out;
}

const std::vector<long long>& MakeShot::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6843908126517847773LL << 2246573734118294447LL << 2567022198048374295LL << 3005587010339637453LL;
	return out;
}

const std::vector<short>& MakeShot::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -23638 << -25529 << 29355 << 32406;
	return out;
}

const std::vector<std::string>& MakeShot::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Message" << "se.yabs.aichallenge.GameMessage" << "se.yabs.aichallenge.battleship.BattleshipMessage" << "se.yabs.aichallenge.battleship.MakeShot";
	return out;
}

const std::vector<std::string>& MakeShot::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "o6o" << "nEc" << "cqs" << "fpY";
	return out;
}

const std::string& MakeShot::_type_ids_16bit_base64_string() {
	static const std::string out("o6onEccqsfpY");
	return out;
}

const std::string& MakeShot::_type_id_16bit_base64() {
	static const std::string out("fpY");
	return out;
}

const std::vector<mgen::Field>& MakeShot::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_shot_metadata();
	return out;
}

const mgen::Field& MakeShot::_field_shot_metadata() {
	static const mgen::Field out(19108, "shot");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

