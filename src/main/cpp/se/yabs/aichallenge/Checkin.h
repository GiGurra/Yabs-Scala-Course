/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_CHECKIN
#define SE_YABS_AICHALLENGE_CHECKIN

#include "se/yabs/aichallenge/GameSelection.h"
#include "se/yabs/aichallenge/Message.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

class Checkin : public Message /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::string m_name;
	GameSelection m_game;
	bool _m_name_isSet;
	bool _m_game_isSet;

public:
	Checkin();
	Checkin(const std::string& name,
			const GameSelection& game);
	virtual ~Checkin();

	const std::string& getName() const;
	const GameSelection& getGame() const;

	std::string& getNameMutable();
	GameSelection& getGameMutable();

	Checkin& setName(const std::string& name);
	Checkin& setGame(const GameSelection& game);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasName() const;
	bool hasGame() const;

	Checkin& unsetName();
	Checkin& unsetGame();

	bool operator==(const Checkin& other) const;
	bool operator!=(const Checkin& other) const;


							
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
		case _field_game_id:
			reader.readField(_field_game_metadata(), context, getGameMutable());
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
				visitor.visit(getGame(), _field_game_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isNameSet(mgen::SHALLOW))
					visitor.visit(getName(), _field_name_metadata());
				if (_isGameSet(mgen::SHALLOW))
					visitor.visit(getGame(), _field_game_metadata());
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
				visitor.visit(getGameMutable(), _field_game_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isNameSet(mgen::SHALLOW))
					visitor.visit(getNameMutable(), _field_name_metadata());
				if (_isGameSet(mgen::SHALLOW))
					visitor.visit(getGameMutable(), _field_game_metadata());
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

	Checkin& _setNameSet(const bool state, const mgen::FieldSetDepth depth);
	Checkin& _setGameSet(const bool state, const mgen::FieldSetDepth depth);

	Checkin& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isNameSet(const mgen::FieldSetDepth depth) const;
	bool _isGameSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	Checkin * _deepCopy() const;

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
		  
	static const long long _type_id = 4589873252555491528LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 22716;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_name_metadata();
	static const mgen::Field& _field_game_metadata();

	static const short _field_name_id = -28058;
	static const short _field_game_id = 24849;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class Checkin

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
