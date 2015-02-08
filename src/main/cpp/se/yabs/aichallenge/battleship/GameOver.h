/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_BATTLESHIP_GAMEOVER
#define SE_YABS_AICHALLENGE_BATTLESHIP_GAMEOVER

#include "se/yabs/aichallenge/battleship/BattleshipMessage.h"
#include "se/yabs/aichallenge/battleship/BattleshipResult.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

class GameOver : public BattleshipMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	BattleshipResult m_result;
	bool _m_result_isSet;

public:
	GameOver();
	GameOver(const BattleshipResult& result);
	virtual ~GameOver();

	const BattleshipResult& getResult() const;

	BattleshipResult& getResultMutable();

	GameOver& setResult(const BattleshipResult& result);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasResult() const;

	GameOver& unsetResult();

	bool operator==(const GameOver& other) const;
	bool operator!=(const GameOver& other) const;


							
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
		case _field_result_id:
			reader.readField(_field_result_metadata(), context, getResultMutable());
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
				visitor.beginVisit(*this, 1);
				visitor.visit(getResult(), _field_result_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isResultSet(mgen::SHALLOW))
					visitor.visit(getResult(), _field_result_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 1);
				visitor.visit(getResultMutable(), _field_result_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isResultSet(mgen::SHALLOW))
					visitor.visit(getResultMutable(), _field_result_metadata());
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

	GameOver& _setResultSet(const bool state, const mgen::FieldSetDepth depth);

	GameOver& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isResultSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	GameOver * _deepCopy() const;

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
		  
	static const long long _type_id = 1789310646936949934LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -7695;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_result_metadata();

	static const short _field_result_id = 24642;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class GameOver

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
