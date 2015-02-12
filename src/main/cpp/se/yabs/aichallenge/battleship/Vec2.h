/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_BATTLESHIP_VEC2
#define SE_YABS_AICHALLENGE_BATTLESHIP_VEC2

#include "mgen/classes/MGenBase.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

class Vec2 : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	int m_x;
	int m_y;
	bool _m_x_isSet;
	bool _m_y_isSet;

public:
	Vec2();
	Vec2(const int& x,
			const int& y);
	virtual ~Vec2();

	const int& getX() const;
	const int& getY() const;

	int& getXMutable();
	int& getYMutable();

	Vec2& setX(const int& x);
	Vec2& setY(const int& y);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasX() const;
	bool hasY() const;

	Vec2& unsetX();
	Vec2& unsetY();

	bool operator==(const Vec2& other) const;
	bool operator!=(const Vec2& other) const;


							
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
		case _field_x_id:
			reader.readField(_field_x_metadata(), context, getXMutable());
			break;
		case _field_y_id:
			reader.readField(_field_y_metadata(), context, getYMutable());
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
				visitor.visit(getX(), _field_x_metadata());
				visitor.visit(getY(), _field_y_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isXSet(mgen::SHALLOW))
					visitor.visit(getX(), _field_x_metadata());
				if (_isYSet(mgen::SHALLOW))
					visitor.visit(getY(), _field_y_metadata());
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
				visitor.visit(getXMutable(), _field_x_metadata());
				visitor.visit(getYMutable(), _field_y_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isXSet(mgen::SHALLOW))
					visitor.visit(getXMutable(), _field_x_metadata());
				if (_isYSet(mgen::SHALLOW))
					visitor.visit(getYMutable(), _field_y_metadata());
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

	Vec2& _setXSet(const bool state, const mgen::FieldSetDepth depth);
	Vec2& _setYSet(const bool state, const mgen::FieldSetDepth depth);

	Vec2& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isXSet(const mgen::FieldSetDepth depth) const;
	bool _isYSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	Vec2 * _deepCopy() const;

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
		  
	static const long long _type_id = 5114268100851014382LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -25884;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_x_metadata();
	static const mgen::Field& _field_y_metadata();

	static const short _field_x_id = 7791;
	static const short _field_y_id = 3662;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class Vec2

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
