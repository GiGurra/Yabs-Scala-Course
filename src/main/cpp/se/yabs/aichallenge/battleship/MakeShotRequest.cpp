/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/MakeShotRequest.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

MakeShotRequest::MakeShotRequest() {
}

MakeShotRequest::~MakeShotRequest() {
}

/* custom_methods_begin *//* custom_methods_end */

bool MakeShotRequest::operator==(const MakeShotRequest& other) const {
	return true;
}

bool MakeShotRequest::operator!=(const MakeShotRequest& other) const {
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
		  
const mgen::Field * MakeShotRequest::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * MakeShotRequest::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long MakeShotRequest::_typeId() const {
	return _type_id;
}

const std::string& MakeShotRequest::_typeName() const {
	return _type_name();
}

const short MakeShotRequest::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& MakeShotRequest::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& MakeShotRequest::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& MakeShotRequest::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& MakeShotRequest::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& MakeShotRequest::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& MakeShotRequest::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& MakeShotRequest::_fieldMetadatas() const {
	return _field_metadatas();
}

MakeShotRequest& MakeShotRequest::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int MakeShotRequest::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool MakeShotRequest::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool MakeShotRequest::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool MakeShotRequest::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const MakeShotRequest&>(other) == *this;
}

MakeShotRequest * MakeShotRequest::_deepCopy() const {
	return new MakeShotRequest(*this);
}

mgen::MGenBase * MakeShotRequest::_newInstance() {
	return new MakeShotRequest;
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
		  
const std::string& MakeShotRequest::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.MakeShotRequest");
	return out;
}

const std::vector<long long>& MakeShotRequest::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6843908126517847773LL << 2246573734118294447LL << 2567022198048374295LL << 4376863526841852150LL << 6955157086289771592LL;
	return out;
}

const std::vector<short>& MakeShotRequest::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -23638 << -25529 << 29355 << -1088 << 14756;
	return out;
}

const std::vector<std::string>& MakeShotRequest::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Message" << "se.yabs.aichallenge.GameMessage" << "se.yabs.aichallenge.battleship.BattleshipMessage" << "se.yabs.aichallenge.battleship.RequestFromServer" << "se.yabs.aichallenge.battleship.MakeShotRequest";
	return out;
}

const std::vector<std::string>& MakeShotRequest::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "o6o" << "nEc" << "cqs" << "+8A" << "OaQ";
	return out;
}

const std::string& MakeShotRequest::_type_ids_16bit_base64_string() {
	static const std::string out("o6onEccqs+8AOaQ");
	return out;
}

const std::string& MakeShotRequest::_type_id_16bit_base64() {
	static const std::string out("OaQ");
	return out;
}

const std::vector<mgen::Field>& MakeShotRequest::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

