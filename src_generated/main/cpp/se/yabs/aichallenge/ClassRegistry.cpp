/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "ClassRegistry.h"
#include "se/yabs/aichallenge/battleship/Ship.cpp"
#include "se/yabs/aichallenge/battleship/Segment.cpp"
#include "se/yabs/aichallenge/battleship/Map.cpp"
#include "se/yabs/aichallenge/battleship/Player.cpp"
#include "se/yabs/aichallenge/battleship/Game.cpp"
#include "se/yabs/aichallenge/battleship/Vec2.cpp"
#include "se/yabs/aichallenge/battleship/Shot.cpp"
#include "se/yabs/aichallenge/battleship/Team.cpp"
#include "se/yabs/aichallenge/battleship/Phase.cpp"
#include "se/yabs/aichallenge/Dispatcher.cpp"
#include "se/yabs/aichallenge/Handler.cpp"

namespace se {
namespace yabs {
namespace aichallenge {

ClassRegistry::ClassRegistry() {
	add<se::yabs::aichallenge::battleship::Ship>();
	add<se::yabs::aichallenge::battleship::Segment>();
	add<se::yabs::aichallenge::battleship::Map>();
	add<se::yabs::aichallenge::battleship::Player>();
	add<se::yabs::aichallenge::battleship::Game>();
	add<se::yabs::aichallenge::battleship::Vec2>();
	add<se::yabs::aichallenge::battleship::Shot>();
}

ClassRegistry::~ClassRegistry() {
}

const mgen::ClassRegistryEntry * se::yabs::aichallenge::ClassRegistry::getByIds(const std::vector<short>& ids) const {
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Ship(se::yabs::aichallenge::battleship::Ship::_type_ids(), se::yabs::aichallenge::battleship::Ship::_type_name(), se::yabs::aichallenge::battleship::Ship::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Segment(se::yabs::aichallenge::battleship::Segment::_type_ids(), se::yabs::aichallenge::battleship::Segment::_type_name(), se::yabs::aichallenge::battleship::Segment::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Map(se::yabs::aichallenge::battleship::Map::_type_ids(), se::yabs::aichallenge::battleship::Map::_type_name(), se::yabs::aichallenge::battleship::Map::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Player(se::yabs::aichallenge::battleship::Player::_type_ids(), se::yabs::aichallenge::battleship::Player::_type_name(), se::yabs::aichallenge::battleship::Player::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Game(se::yabs::aichallenge::battleship::Game::_type_ids(), se::yabs::aichallenge::battleship::Game::_type_name(), se::yabs::aichallenge::battleship::Game::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Vec2(se::yabs::aichallenge::battleship::Vec2::_type_ids(), se::yabs::aichallenge::battleship::Vec2::_type_name(), se::yabs::aichallenge::battleship::Vec2::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Shot(se::yabs::aichallenge::battleship::Shot::_type_ids(), se::yabs::aichallenge::battleship::Shot::_type_name(), se::yabs::aichallenge::battleship::Shot::_newInstance);

	std::size_t i = 0;
	switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
		case se::yabs::aichallenge::battleship::Ship::_type_id_16bit:
			return &se_yabs_aichallenge_battleship_Ship;
			break;
		case se::yabs::aichallenge::battleship::Segment::_type_id_16bit:
			return &se_yabs_aichallenge_battleship_Segment;
			break;
		case se::yabs::aichallenge::battleship::Map::_type_id_16bit:
			return &se_yabs_aichallenge_battleship_Map;
			break;
		case se::yabs::aichallenge::battleship::Player::_type_id_16bit:
			return &se_yabs_aichallenge_battleship_Player;
			break;
		case se::yabs::aichallenge::battleship::Game::_type_id_16bit:
			return &se_yabs_aichallenge_battleship_Game;
			break;
		case se::yabs::aichallenge::battleship::Vec2::_type_id_16bit:
			return &se_yabs_aichallenge_battleship_Vec2;
			break;
		case se::yabs::aichallenge::battleship::Shot::_type_id_16bit:
			return &se_yabs_aichallenge_battleship_Shot;
			break;
		default:
			return 0;
			break;
	}
	return 0;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

