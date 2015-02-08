/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_BATTLESHIP_MAP
#define SE_YABS_AICHALLENGE_BATTLESHIP_MAP

#include "mgen/classes/MGenBase.h"
#include "se/yabs/aichallenge/battleship/Ship.h"
#include "se/yabs/aichallenge/battleship/Vec2.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

class Map : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::vector<Ship>  m_ships;
	Vec2 m_size;
	bool _m_ships_isSet;
	bool _m_size_isSet;

public:
	Map();
	Map(const std::vector<Ship> & ships,
			const Vec2& size);
	virtual ~Map();

	const std::vector<Ship> & getShips() const;
	const Vec2& getSize() const;

	std::vector<Ship> & getShipsMutable();
	Vec2& getSizeMutable();

	Map& setShips(const std::vector<Ship> & ships);
	Map& setSize(const Vec2& size);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasShips() const;
	bool hasSize() const;

	Map& unsetShips();
	Map& unsetSize();

	bool operator==(const Map& other) const;
	bool operator!=(const Map& other) const;


							
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
		case _field_ships_id:
			reader.readField(_field_ships_metadata(), context, getShipsMutable());
			break;
		case _field_size_id:
			reader.readField(_field_size_metadata(), context, getSizeMutable());
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
				visitor.visit(getShips(), _field_ships_metadata());
				visitor.visit(getSize(), _field_size_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isShipsSet(mgen::SHALLOW))
					visitor.visit(getShips(), _field_ships_metadata());
				if (_isSizeSet(mgen::SHALLOW))
					visitor.visit(getSize(), _field_size_metadata());
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
				visitor.visit(getShipsMutable(), _field_ships_metadata());
				visitor.visit(getSizeMutable(), _field_size_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isShipsSet(mgen::SHALLOW))
					visitor.visit(getShipsMutable(), _field_ships_metadata());
				if (_isSizeSet(mgen::SHALLOW))
					visitor.visit(getSizeMutable(), _field_size_metadata());
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

	Map& _setShipsSet(const bool state, const mgen::FieldSetDepth depth);
	Map& _setSizeSet(const bool state, const mgen::FieldSetDepth depth);

	Map& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isShipsSet(const mgen::FieldSetDepth depth) const;
	bool _isSizeSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	Map * _deepCopy() const;

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
		  
	static const long long _type_id = 6892640198302983990LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 3538;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_ships_metadata();
	static const mgen::Field& _field_size_metadata();

	static const short _field_ships_id = 32030;
	static const short _field_size_id = -31998;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class Map

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
