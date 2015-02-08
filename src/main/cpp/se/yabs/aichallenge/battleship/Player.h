/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_BATTLESHIP_PLAYER
#define SE_YABS_AICHALLENGE_BATTLESHIP_PLAYER

#include "mgen/classes/MGenBase.h"
#include "se/yabs/aichallenge/battleship/Ship.h"
#include "se/yabs/aichallenge/battleship/Shot.h"
#include "se/yabs/aichallenge/battleship/Team.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

class Player : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::string m_name;
	Team m_team;
	std::vector<Shot>  m_shotsFired;
	std::vector<Shot>  m_shotsReceived;
	std::vector<Ship>  m_ships;
	bool _m_name_isSet;
	bool _m_team_isSet;
	bool _m_shotsFired_isSet;
	bool _m_shotsReceived_isSet;
	bool _m_ships_isSet;

public:
	Player();
	Player(const std::string& name,
			const Team& team,
			const std::vector<Shot> & shotsFired,
			const std::vector<Shot> & shotsReceived,
			const std::vector<Ship> & ships);
	virtual ~Player();

	const std::string& getName() const;
	const Team& getTeam() const;
	const std::vector<Shot> & getShotsFired() const;
	const std::vector<Shot> & getShotsReceived() const;
	const std::vector<Ship> & getShips() const;

	std::string& getNameMutable();
	Team& getTeamMutable();
	std::vector<Shot> & getShotsFiredMutable();
	std::vector<Shot> & getShotsReceivedMutable();
	std::vector<Ship> & getShipsMutable();

	Player& setName(const std::string& name);
	Player& setTeam(const Team& team);
	Player& setShotsFired(const std::vector<Shot> & shotsFired);
	Player& setShotsReceived(const std::vector<Shot> & shotsReceived);
	Player& setShips(const std::vector<Ship> & ships);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasName() const;
	bool hasTeam() const;
	bool hasShotsFired() const;
	bool hasShotsReceived() const;
	bool hasShips() const;

	Player& unsetName();
	Player& unsetTeam();
	Player& unsetShotsFired();
	Player& unsetShotsReceived();
	Player& unsetShips();

	bool operator==(const Player& other) const;
	bool operator!=(const Player& other) const;


							
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
		case _field_team_id:
			reader.readField(_field_team_metadata(), context, getTeamMutable());
			break;
		case _field_shotsFired_id:
			reader.readField(_field_shotsFired_metadata(), context, getShotsFiredMutable());
			break;
		case _field_shotsReceived_id:
			reader.readField(_field_shotsReceived_metadata(), context, getShotsReceivedMutable());
			break;
		case _field_ships_id:
			reader.readField(_field_ships_metadata(), context, getShipsMutable());
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
				visitor.visit(getName(), _field_name_metadata());
				visitor.visit(getTeam(), _field_team_metadata());
				visitor.visit(getShotsFired(), _field_shotsFired_metadata());
				visitor.visit(getShotsReceived(), _field_shotsReceived_metadata());
				visitor.visit(getShips(), _field_ships_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isNameSet(mgen::SHALLOW))
					visitor.visit(getName(), _field_name_metadata());
				if (_isTeamSet(mgen::SHALLOW))
					visitor.visit(getTeam(), _field_team_metadata());
				if (_isShotsFiredSet(mgen::SHALLOW))
					visitor.visit(getShotsFired(), _field_shotsFired_metadata());
				if (_isShotsReceivedSet(mgen::SHALLOW))
					visitor.visit(getShotsReceived(), _field_shotsReceived_metadata());
				if (_isShipsSet(mgen::SHALLOW))
					visitor.visit(getShips(), _field_ships_metadata());
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
				visitor.visit(getNameMutable(), _field_name_metadata());
				visitor.visit(getTeamMutable(), _field_team_metadata());
				visitor.visit(getShotsFiredMutable(), _field_shotsFired_metadata());
				visitor.visit(getShotsReceivedMutable(), _field_shotsReceived_metadata());
				visitor.visit(getShipsMutable(), _field_ships_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isNameSet(mgen::SHALLOW))
					visitor.visit(getNameMutable(), _field_name_metadata());
				if (_isTeamSet(mgen::SHALLOW))
					visitor.visit(getTeamMutable(), _field_team_metadata());
				if (_isShotsFiredSet(mgen::SHALLOW))
					visitor.visit(getShotsFiredMutable(), _field_shotsFired_metadata());
				if (_isShotsReceivedSet(mgen::SHALLOW))
					visitor.visit(getShotsReceivedMutable(), _field_shotsReceived_metadata());
				if (_isShipsSet(mgen::SHALLOW))
					visitor.visit(getShipsMutable(), _field_ships_metadata());
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

	Player& _setNameSet(const bool state, const mgen::FieldSetDepth depth);
	Player& _setTeamSet(const bool state, const mgen::FieldSetDepth depth);
	Player& _setShotsFiredSet(const bool state, const mgen::FieldSetDepth depth);
	Player& _setShotsReceivedSet(const bool state, const mgen::FieldSetDepth depth);
	Player& _setShipsSet(const bool state, const mgen::FieldSetDepth depth);

	Player& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isNameSet(const mgen::FieldSetDepth depth) const;
	bool _isTeamSet(const mgen::FieldSetDepth depth) const;
	bool _isShotsFiredSet(const mgen::FieldSetDepth depth) const;
	bool _isShotsReceivedSet(const mgen::FieldSetDepth depth) const;
	bool _isShipsSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	Player * _deepCopy() const;

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
		  
	static const long long _type_id = 5600893473471973514LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -15063;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_name_metadata();
	static const mgen::Field& _field_team_metadata();
	static const mgen::Field& _field_shotsFired_metadata();
	static const mgen::Field& _field_shotsReceived_metadata();
	static const mgen::Field& _field_ships_metadata();

	static const short _field_name_id = -28058;
	static const short _field_team_id = -1585;
	static const short _field_shotsFired_id = -9007;
	static const short _field_shotsReceived_id = -32090;
	static const short _field_ships_id = 32030;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class Player

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
