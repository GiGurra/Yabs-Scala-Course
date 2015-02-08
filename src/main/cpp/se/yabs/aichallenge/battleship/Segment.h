/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_BATTLESHIP_SEGMENT
#define SE_YABS_AICHALLENGE_BATTLESHIP_SEGMENT

#include "mgen/classes/MGenBase.h"
#include "se/yabs/aichallenge/battleship/Vec2.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

class Segment : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	bool m_alive;
	Vec2 m_pos;
	bool _m_alive_isSet;
	bool _m_pos_isSet;

public:
	Segment();
	Segment(const bool& alive,
			const Vec2& pos);
	virtual ~Segment();

	const bool& getAlive() const;
	const Vec2& getPos() const;

	bool& getAliveMutable();
	Vec2& getPosMutable();

	Segment& setAlive(const bool& alive);
	Segment& setPos(const Vec2& pos);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasAlive() const;
	bool hasPos() const;

	Segment& unsetAlive();
	Segment& unsetPos();

	bool operator==(const Segment& other) const;
	bool operator!=(const Segment& other) const;


							
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
		case _field_alive_id:
			reader.readField(_field_alive_metadata(), context, getAliveMutable());
			break;
		case _field_pos_id:
			reader.readField(_field_pos_metadata(), context, getPosMutable());
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
				visitor.visit(getAlive(), _field_alive_metadata());
				visitor.visit(getPos(), _field_pos_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isAliveSet(mgen::SHALLOW))
					visitor.visit(getAlive(), _field_alive_metadata());
				if (_isPosSet(mgen::SHALLOW))
					visitor.visit(getPos(), _field_pos_metadata());
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
				visitor.visit(getAliveMutable(), _field_alive_metadata());
				visitor.visit(getPosMutable(), _field_pos_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isAliveSet(mgen::SHALLOW))
					visitor.visit(getAliveMutable(), _field_alive_metadata());
				if (_isPosSet(mgen::SHALLOW))
					visitor.visit(getPosMutable(), _field_pos_metadata());
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

	Segment& _setAliveSet(const bool state, const mgen::FieldSetDepth depth);
	Segment& _setPosSet(const bool state, const mgen::FieldSetDepth depth);

	Segment& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isAliveSet(const mgen::FieldSetDepth depth) const;
	bool _isPosSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	Segment * _deepCopy() const;

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
		  
	static const long long _type_id = 9066045619354066259LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 21591;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_alive_metadata();
	static const mgen::Field& _field_pos_metadata();

	static const short _field_alive_id = 12135;
	static const short _field_pos_id = 16756;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class Segment

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
