/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/BattleshipMessage.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

BattleshipMessage::BattleshipMessage() {
}

BattleshipMessage::~BattleshipMessage() {
}

/* custom_methods_begin *//* custom_methods_end */

bool BattleshipMessage::operator==(const BattleshipMessage& other) const {
	return true;
}

bool BattleshipMessage::operator!=(const BattleshipMessage& other) const {
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
		  
const mgen::Field * BattleshipMessage::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * BattleshipMessage::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long BattleshipMessage::_typeId() const {
	return _type_id;
}

const std::string& BattleshipMessage::_typeName() const {
	return _type_name();
}

const short BattleshipMessage::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& BattleshipMessage::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& BattleshipMessage::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& BattleshipMessage::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& BattleshipMessage::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& BattleshipMessage::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& BattleshipMessage::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& BattleshipMessage::_fieldMetadatas() const {
	return _field_metadatas();
}

BattleshipMessage& BattleshipMessage::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int BattleshipMessage::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool BattleshipMessage::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool BattleshipMessage::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool BattleshipMessage::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const BattleshipMessage&>(other) == *this;
}

BattleshipMessage * BattleshipMessage::_deepCopy() const {
	return new BattleshipMessage(*this);
}

mgen::MGenBase * BattleshipMessage::_newInstance() {
	return new BattleshipMessage;
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
		  
const std::string& BattleshipMessage::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.BattleshipMessage");
	return out;
}

const std::vector<long long>& BattleshipMessage::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6843908126517847773LL << 2567022198048374295LL;
	return out;
}

const std::vector<short>& BattleshipMessage::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -23638 << 29355;
	return out;
}

const std::vector<std::string>& BattleshipMessage::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Message" << "se.yabs.aichallenge.battleship.BattleshipMessage";
	return out;
}

const std::vector<std::string>& BattleshipMessage::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "o6o" << "cqs";
	return out;
}

const std::string& BattleshipMessage::_type_ids_16bit_base64_string() {
	static const std::string out("o6ocqs");
	return out;
}

const std::string& BattleshipMessage::_type_id_16bit_base64() {
	static const std::string out("cqs");
	return out;
}

const std::vector<mgen::Field>& BattleshipMessage::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

