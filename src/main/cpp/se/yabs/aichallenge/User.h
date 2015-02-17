/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_USER
#define SE_YABS_AICHALLENGE_USER

#include "mgen/classes/MGenBase.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

class User : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::string m_name;
	std::string m_password;
	bool _m_name_isSet;
	bool _m_password_isSet;

public:
	User();
	User(const std::string& name,
			const std::string& password);
	virtual ~User();

	const std::string& getName() const;
	const std::string& getPassword() const;

	std::string& getNameMutable();
	std::string& getPasswordMutable();

	User& setName(const std::string& name);
	User& setPassword(const std::string& password);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasName() const;
	bool hasPassword() const;

	User& unsetName();
	User& unsetPassword();

	bool operator==(const User& other) const;
	bool operator!=(const User& other) const;


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                    TYPE METADATA ACCESS AND SERIALIZATION METHODS                    *****
           *****          (accessed primarily by (de-)serializers and for ORM functionality)          *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
public:
	template<typename ReaderType, typename ReadContextType>
	void _readField(const short fieldId, ReadContextType& context, ReaderType& reader) {
		switch (fieldId) {
		case _field_name_id:
			reader.readField(_field_name_metadata(), context, getNameMutable());
			break;
		case _field_password_id:
			reader.readField(_field_password_metadata(), context, getPasswordMutable());
			break;
		default:
			reader.handleUnknownField(fieldId, context);
			break;
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) const {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 2);
				visitor.visit(getName(), _field_name_metadata());
				visitor.visit(getPassword(), _field_password_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isNameSet(mgen::SHALLOW))
					visitor.visit(getName(), _field_name_metadata());
				if (_isPasswordSet(mgen::SHALLOW))
					visitor.visit(getPassword(), _field_password_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 2);
				visitor.visit(getNameMutable(), _field_name_metadata());
				visitor.visit(getPasswordMutable(), _field_password_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isNameSet(mgen::SHALLOW))
					visitor.visit(getNameMutable(), _field_name_metadata());
				if (_isPasswordSet(mgen::SHALLOW))
					visitor.visit(getPasswordMutable(), _field_password_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	const mgen::Field * _fieldById(const short id) const;
	const mgen::Field * _fieldByName(const std::string& name) const;
	const long long _typeId() const;
	const short _typeId16Bit() const;
	const std::string& _typeId16BitBase64() const;
	const std::string& _typeName() const;

	const std::vector<long long>& _typeIds() const;
	const std::vector<short>& _typeIds16Bit() const;
	const std::vector<std::string>& _typeIds16BitBase64() const;
	const std::string& _typeIds16BitBase64String() const;
	const std::vector<std::string>& _typeNames() const;

	const std::vector<mgen::Field>& _fieldMetadatas() const;

	bool _isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const;

	User& _setNameSet(const bool state, const mgen::FieldSetDepth depth);
	User& _setPasswordSet(const bool state, const mgen::FieldSetDepth depth);

	User& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isNameSet(const mgen::FieldSetDepth depth) const;
	bool _isPasswordSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	User * _deepCopy() const;

	static mgen::MGenBase * _newInstance();

							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                                    TYPE METADATA                                     *****
           *****             (generally speaking, it's a bad idea to edit this manually)              *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
	static const long long _type_id = 5020658785704657625LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -29120;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_name_metadata();
	static const mgen::Field& _field_password_metadata();

	static const short _field_name_id = -28058;
	static const short _field_password_id = 5242;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class User

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
