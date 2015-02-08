/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_GAMEPLAYED
#define SE_YABS_AICHALLENGE_GAMEPLAYED

#include "mgen/classes/MGenBase.h"
#include "se/yabs/aichallenge/GameSelection.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {

class GamePlayed : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	GameSelection m_gameType;
	std::vector<std::string>  m_players;
	std::vector<std::string>  m_winners;
	bool _m_gameType_isSet;
	bool _m_players_isSet;
	bool _m_winners_isSet;

public:
	GamePlayed();
	GamePlayed(const GameSelection& gameType,
			const std::vector<std::string> & players,
			const std::vector<std::string> & winners);
	virtual ~GamePlayed();

	const GameSelection& getGameType() const;
	const std::vector<std::string> & getPlayers() const;
	const std::vector<std::string> & getWinners() const;

	GameSelection& getGameTypeMutable();
	std::vector<std::string> & getPlayersMutable();
	std::vector<std::string> & getWinnersMutable();

	GamePlayed& setGameType(const GameSelection& gameType);
	GamePlayed& setPlayers(const std::vector<std::string> & players);
	GamePlayed& setWinners(const std::vector<std::string> & winners);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasGameType() const;
	bool hasPlayers() const;
	bool hasWinners() const;

	GamePlayed& unsetGameType();
	GamePlayed& unsetPlayers();
	GamePlayed& unsetWinners();

	bool operator==(const GamePlayed& other) const;
	bool operator!=(const GamePlayed& other) const;


							
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
		case _field_gameType_id:
			reader.readField(_field_gameType_metadata(), context, getGameTypeMutable());
			break;
		case _field_players_id:
			reader.readField(_field_players_metadata(), context, getPlayersMutable());
			break;
		case _field_winners_id:
			reader.readField(_field_winners_metadata(), context, getWinnersMutable());
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
				visitor.beginVisit(*this, 3);
				visitor.visit(getGameType(), _field_gameType_metadata());
				visitor.visit(getPlayers(), _field_players_metadata());
				visitor.visit(getWinners(), _field_winners_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isGameTypeSet(mgen::SHALLOW))
					visitor.visit(getGameType(), _field_gameType_metadata());
				if (_isPlayersSet(mgen::SHALLOW))
					visitor.visit(getPlayers(), _field_players_metadata());
				if (_isWinnersSet(mgen::SHALLOW))
					visitor.visit(getWinners(), _field_winners_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 3);
				visitor.visit(getGameTypeMutable(), _field_gameType_metadata());
				visitor.visit(getPlayersMutable(), _field_players_metadata());
				visitor.visit(getWinnersMutable(), _field_winners_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isGameTypeSet(mgen::SHALLOW))
					visitor.visit(getGameTypeMutable(), _field_gameType_metadata());
				if (_isPlayersSet(mgen::SHALLOW))
					visitor.visit(getPlayersMutable(), _field_players_metadata());
				if (_isWinnersSet(mgen::SHALLOW))
					visitor.visit(getWinnersMutable(), _field_winners_metadata());
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

	GamePlayed& _setGameTypeSet(const bool state, const mgen::FieldSetDepth depth);
	GamePlayed& _setPlayersSet(const bool state, const mgen::FieldSetDepth depth);
	GamePlayed& _setWinnersSet(const bool state, const mgen::FieldSetDepth depth);

	GamePlayed& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isGameTypeSet(const mgen::FieldSetDepth depth) const;
	bool _isPlayersSet(const mgen::FieldSetDepth depth) const;
	bool _isWinnersSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	GamePlayed * _deepCopy() const;

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
		  
	static const long long _type_id = 300559125798525147LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -1558;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_gameType_metadata();
	static const mgen::Field& _field_players_metadata();
	static const mgen::Field& _field_winners_metadata();

	static const short _field_gameType_id = -27076;
	static const short _field_players_id = 29583;
	static const short _field_winners_id = 1721;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class GamePlayed

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
