/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_WELCOMEMESSAGE
#define SE_YABS_AICHALLENGE_WELCOMEMESSAGE

#include "se/yabs/aichallenge/GameSelection.h"
#include "se/yabs/aichallenge/Message.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

class WelcomeMessage : public Message /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::string m_msg;
	std::vector<GameSelection>  m_availableGames;
	bool _m_msg_isSet;
	bool _m_availableGames_isSet;

public:
	WelcomeMessage();
	WelcomeMessage(const std::string& msg,
			const std::vector<GameSelection> & availableGames);
	virtual ~WelcomeMessage();

	const std::string& getMsg() const;
	const std::vector<GameSelection> & getAvailableGames() const;

	std::string& getMsgMutable();
	std::vector<GameSelection> & getAvailableGamesMutable();

	WelcomeMessage& setMsg(const std::string& msg);
	WelcomeMessage& setAvailableGames(const std::vector<GameSelection> & availableGames);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasMsg() const;
	bool hasAvailableGames() const;

	WelcomeMessage& unsetMsg();
	WelcomeMessage& unsetAvailableGames();

	bool operator==(const WelcomeMessage& other) const;
	bool operator!=(const WelcomeMessage& other) const;


							
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
		case _field_msg_id:
			reader.readField(_field_msg_metadata(), context, getMsgMutable());
			break;
		case _field_availableGames_id:
			reader.readField(_field_availableGames_metadata(), context, getAvailableGamesMutable());
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
				visitor.visit(getMsg(), _field_msg_metadata());
				visitor.visit(getAvailableGames(), _field_availableGames_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isMsgSet(mgen::SHALLOW))
					visitor.visit(getMsg(), _field_msg_metadata());
				if (_isAvailableGamesSet(mgen::SHALLOW))
					visitor.visit(getAvailableGames(), _field_availableGames_metadata());
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
				visitor.visit(getMsgMutable(), _field_msg_metadata());
				visitor.visit(getAvailableGamesMutable(), _field_availableGames_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isMsgSet(mgen::SHALLOW))
					visitor.visit(getMsgMutable(), _field_msg_metadata());
				if (_isAvailableGamesSet(mgen::SHALLOW))
					visitor.visit(getAvailableGamesMutable(), _field_availableGames_metadata());
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

	WelcomeMessage& _setMsgSet(const bool state, const mgen::FieldSetDepth depth);
	WelcomeMessage& _setAvailableGamesSet(const bool state, const mgen::FieldSetDepth depth);

	WelcomeMessage& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isMsgSet(const mgen::FieldSetDepth depth) const;
	bool _isAvailableGamesSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	WelcomeMessage * _deepCopy() const;

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
		  
	static const long long _type_id = 519923755957276911LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 1532;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_msg_metadata();
	static const mgen::Field& _field_availableGames_metadata();

	static const short _field_msg_id = 21741;
	static const short _field_availableGames_id = -11213;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class WelcomeMessage

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
