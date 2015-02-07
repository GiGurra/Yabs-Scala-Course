/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_CLASSREGISTRY
#define SE_YABS_AICHALLENGE_CLASSREGISTRY

#include "mgen/classes/ClassRegistryBase.h"
#include "se/yabs/aichallenge/battleship/Ship.h"
#include "se/yabs/aichallenge/battleship/Segment.h"
#include "se/yabs/aichallenge/battleship/Map.h"
#include "se/yabs/aichallenge/battleship/Player.h"
#include "se/yabs/aichallenge/battleship/Game.h"
#include "se/yabs/aichallenge/battleship/Vec2.h"
#include "se/yabs/aichallenge/battleship/Shot.h"

namespace se {
namespace yabs {
namespace aichallenge {

class ClassRegistry : public mgen::ClassRegistryBase  {
public:

	ClassRegistry();
	virtual ~ClassRegistry();

	template<typename ContextType, typename ReaderType>
	void readObjectFields(mgen::MGenBase& o, ContextType& context, ReaderType& reader) const {

		const std::vector<short>& ids = o._typeIds16Bit();

		std::size_t i = 0;
		switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
			case se::yabs::aichallenge::battleship::Ship::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::battleship::Ship&>(o), context);
				break;
			case se::yabs::aichallenge::battleship::Segment::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::battleship::Segment&>(o), context);
				break;
			case se::yabs::aichallenge::battleship::Map::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::battleship::Map&>(o), context);
				break;
			case se::yabs::aichallenge::battleship::Player::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::battleship::Player&>(o), context);
				break;
			case se::yabs::aichallenge::battleship::Game::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::battleship::Game&>(o), context);
				break;
			case se::yabs::aichallenge::battleship::Vec2::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::battleship::Vec2&>(o), context);
				break;
			case se::yabs::aichallenge::battleship::Shot::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::battleship::Shot&>(o), context);
				break;
			default:
				return;
				break;
		}
		return;
	}

	template<typename VisitorType>
	void visitObject(mgen::MGenBase& o, VisitorType& visitor, const mgen::FieldVisitSelection selection) const {

		const std::vector<short>& ids = o._typeIds16Bit();

		std::size_t i = 0;
		switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
			case se::yabs::aichallenge::battleship::Ship::_type_id_16bit:
				static_cast<se::yabs::aichallenge::battleship::Ship&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Segment::_type_id_16bit:
				static_cast<se::yabs::aichallenge::battleship::Segment&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Map::_type_id_16bit:
				static_cast<se::yabs::aichallenge::battleship::Map&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Player::_type_id_16bit:
				static_cast<se::yabs::aichallenge::battleship::Player&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Game::_type_id_16bit:
				static_cast<se::yabs::aichallenge::battleship::Game&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Vec2::_type_id_16bit:
				static_cast<se::yabs::aichallenge::battleship::Vec2&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Shot::_type_id_16bit:
				static_cast<se::yabs::aichallenge::battleship::Shot&>(o)._accept<VisitorType>(visitor, selection);
				break;
			default:
				return;
				break;
		}
		return;
	}

	template<typename VisitorType>
	void visitObject(const mgen::MGenBase& o, VisitorType& visitor, const mgen::FieldVisitSelection selection) const {

		const std::vector<short>& ids = o._typeIds16Bit();

		std::size_t i = 0;
		switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
			case se::yabs::aichallenge::battleship::Ship::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::battleship::Ship&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Segment::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::battleship::Segment&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Map::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::battleship::Map&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Player::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::battleship::Player&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Game::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::battleship::Game&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Vec2::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::battleship::Vec2&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Shot::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::battleship::Shot&>(o)._accept<VisitorType>(visitor, selection);
				break;
			default:
				return;
				break;
		}
		return;
	}

	const mgen::ClassRegistryEntry * getByIds(const std::vector<short>& ids) const;

	const mgen::ClassRegistryEntry * getByIds(const std::vector<std::string>& base64ids_vector) const {
		return mgen::ClassRegistryBase::getByIds(base64ids_vector);
	}

	const mgen::ClassRegistryEntry * getByIds(const std::string& base64ids_concatenated) const {
		return mgen::ClassRegistryBase::getByIds(base64ids_concatenated);
	}

}; // End class ClassRegistry

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
