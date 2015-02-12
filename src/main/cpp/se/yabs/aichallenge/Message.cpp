/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/Message.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

Message::Message() {
}

Message::~Message() {
}

/* custom_methods_begin *//* custom_methods_end */

bool Message::operator==(const Message& other) const {
	return true;
}

bool Message::operator!=(const Message& other) const {
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
		  
const mgen::Field * Message::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * Message::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Message::_typeId() const {
	return _type_id;
}

const std::string& Message::_typeName() const {
	return _type_name();
}

const short Message::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Message::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Message::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Message::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Message::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Message::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Message::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Message::_fieldMetadatas() const {
	return _field_metadatas();
}

Message& Message::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int Message::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool Message::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool Message::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool Message::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Message&>(other) == *this;
}

Message * Message::_deepCopy() const {
	return new Message(*this);
}

mgen::MGenBase * Message::_newInstance() {
	return new Message;
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
		  
const std::string& Message::_type_name() {
	static const std::string out("se.yabs.aichallenge.Message");
	return out;
}

const std::vector<long long>& Message::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6843908126517847773LL;
	return out;
}

const std::vector<short>& Message::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -23638;
	return out;
}

const std::vector<std::string>& Message::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Message";
	return out;
}

const std::vector<std::string>& Message::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "o6o";
	return out;
}

const std::string& Message::_type_ids_16bit_base64_string() {
	static const std::string out("o6o");
	return out;
}

const std::string& Message::_type_id_16bit_base64() {
	static const std::string out("o6o");
	return out;
}

const std::vector<mgen::Field>& Message::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

