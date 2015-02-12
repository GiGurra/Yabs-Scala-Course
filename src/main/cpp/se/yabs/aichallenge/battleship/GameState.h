/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_BATTLESHIP_GAMESTATE
#define SE_YABS_AICHALLENGE_BATTLESHIP_GAMESTATE

#include "mgen/classes/MGenBase.h"
#include "se/yabs/aichallenge/battleship/GamePhase.h"
#include "se/yabs/aichallenge/battleship/Player.h"
#include "se/yabs/aichallenge/battleship/Team.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

class GameState : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	Player m_redPlayer;
	Player m_bluePlayer;
	std::vector<Player>  m_observers;
	GamePhase m_phase;
	Team m_currentTeam;
	bool _m_redPlayer_isSet;
	bool _m_bluePlayer_isSet;
	bool _m_observers_isSet;
	bool _m_phase_isSet;
	bool _m_currentTeam_isSet;

public:
	GameState();
	GameState(const Player& redPlayer,
			const Player& bluePlayer,
			const std::vector<Player> & observers,
			const GamePhase& phase,
			const Team& currentTeam);
	virtual ~GameState();

	const Player& getRedPlayer() const;
	const Player& getBluePlayer() const;
	const std::vector<Player> & getObservers() const;
	const GamePhase& getPhase() const;
	const Team& getCurrentTeam() const;

	Player& getRedPlayerMutable();
	Player& getBluePlayerMutable();
	std::vector<Player> & getObserversMutable();
	GamePhase& getPhaseMutable();
	Team& getCurrentTeamMutable();

	GameState& setRedPlayer(const Player& redPlayer);
	GameState& setBluePlayer(const Player& bluePlayer);
	GameState& setObservers(const std::vector<Player> & observers);
	GameState& setPhase(const GamePhase& phase);
	GameState& setCurrentTeam(const Team& currentTeam);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasRedPlayer() const;
	bool hasBluePlayer() const;
	bool hasObservers() const;
	bool hasPhase() const;
	bool hasCurrentTeam() const;

	GameState& unsetRedPlayer();
	GameState& unsetBluePlayer();
	GameState& unsetObservers();
	GameState& unsetPhase();
	GameState& unsetCurrentTeam();

	bool operator==(const GameState& other) const;
	bool operator!=(const GameState& other) const;


							
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
		case _field_redPlayer_id:
			reader.readField(_field_redPlayer_metadata(), context, getRedPlayerMutable());
			break;
		case _field_bluePlayer_id:
			reader.readField(_field_bluePlayer_metadata(), context, getBluePlayerMutable());
			break;
		case _field_observers_id:
			reader.readField(_field_observers_metadata(), context, getObserversMutable());
			break;
		case _field_phase_id:
			reader.readField(_field_phase_metadata(), context, getPhaseMutable());
			break;
		case _field_currentTeam_id:
			reader.readField(_field_currentTeam_metadata(), context, getCurrentTeamMutable());
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
				visitor.beginVisit(*this, 5);
				visitor.visit(getRedPlayer(), _field_redPlayer_metadata());
				visitor.visit(getBluePlayer(), _field_bluePlayer_metadata());
				visitor.visit(getObservers(), _field_observers_metadata());
				visitor.visit(getPhase(), _field_phase_metadata());
				visitor.visit(getCurrentTeam(), _field_currentTeam_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isRedPlayerSet(mgen::SHALLOW))
					visitor.visit(getRedPlayer(), _field_redPlayer_metadata());
				if (_isBluePlayerSet(mgen::SHALLOW))
					visitor.visit(getBluePlayer(), _field_bluePlayer_metadata());
				if (_isObserversSet(mgen::SHALLOW))
					visitor.visit(getObservers(), _field_observers_metadata());
				if (_isPhaseSet(mgen::SHALLOW))
					visitor.visit(getPhase(), _field_phase_metadata());
				if (_isCurrentTeamSet(mgen::SHALLOW))
					visitor.visit(getCurrentTeam(), _field_currentTeam_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 5);
				visitor.visit(getRedPlayerMutable(), _field_redPlayer_metadata());
				visitor.visit(getBluePlayerMutable(), _field_bluePlayer_metadata());
				visitor.visit(getObserversMutable(), _field_observers_metadata());
				visitor.visit(getPhaseMutable(), _field_phase_metadata());
				visitor.visit(getCurrentTeamMutable(), _field_currentTeam_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isRedPlayerSet(mgen::SHALLOW))
					visitor.visit(getRedPlayerMutable(), _field_redPlayer_metadata());
				if (_isBluePlayerSet(mgen::SHALLOW))
					visitor.visit(getBluePlayerMutable(), _field_bluePlayer_metadata());
				if (_isObserversSet(mgen::SHALLOW))
					visitor.visit(getObserversMutable(), _field_observers_metadata());
				if (_isPhaseSet(mgen::SHALLOW))
					visitor.visit(getPhaseMutable(), _field_phase_metadata());
				if (_isCurrentTeamSet(mgen::SHALLOW))
					visitor.visit(getCurrentTeamMutable(), _field_currentTeam_metadata());
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

	GameState& _setRedPlayerSet(const bool state, const mgen::FieldSetDepth depth);
	GameState& _setBluePlayerSet(const bool state, const mgen::FieldSetDepth depth);
	GameState& _setObserversSet(const bool state, const mgen::FieldSetDepth depth);
	GameState& _setPhaseSet(const bool state, const mgen::FieldSetDepth depth);
	GameState& _setCurrentTeamSet(const bool state, const mgen::FieldSetDepth depth);

	GameState& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isRedPlayerSet(const mgen::FieldSetDepth depth) const;
	bool _isBluePlayerSet(const mgen::FieldSetDepth depth) const;
	bool _isObserversSet(const mgen::FieldSetDepth depth) const;
	bool _isPhaseSet(const mgen::FieldSetDepth depth) const;
	bool _isCurrentTeamSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	GameState * _deepCopy() const;

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
		  
	static const long long _type_id = 7830028132583391513LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 13427;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_redPlayer_metadata();
	static const mgen::Field& _field_bluePlayer_metadata();
	static const mgen::Field& _field_observers_metadata();
	static const mgen::Field& _field_phase_metadata();
	static const mgen::Field& _field_currentTeam_metadata();

	static const short _field_redPlayer_id = -7294;
	static const short _field_bluePlayer_id = 10760;
	static const short _field_observers_id = 22106;
	static const short _field_phase_id = 7625;
	static const short _field_currentTeam_id = -14726;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class GameState

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
