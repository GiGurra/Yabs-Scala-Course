/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "ClassRegistry.h"
#include "se/yabs/aichallenge/Message.cpp"
#include "se/yabs/aichallenge/WelcomeMessage.cpp"
#include "se/yabs/aichallenge/ErrorMessage.cpp"
#include "se/yabs/aichallenge/Checkin.cpp"
#include "se/yabs/aichallenge/PlayGame.cpp"
#include "se/yabs/aichallenge/GameChallengeFound.cpp"
#include "se/yabs/aichallenge/battleship/Ship.cpp"
#include "se/yabs/aichallenge/battleship/Segment.cpp"
#include "se/yabs/aichallenge/battleship/Map.cpp"
#include "se/yabs/aichallenge/battleship/Player.cpp"
#include "se/yabs/aichallenge/battleship/GameState.cpp"
#include "se/yabs/aichallenge/battleship/Vec2.cpp"
#include "se/yabs/aichallenge/battleship/Shot.cpp"
#include "se/yabs/aichallenge/GameSelection.cpp"
#include "se/yabs/aichallenge/battleship/Team.cpp"
#include "se/yabs/aichallenge/battleship/Phase.cpp"
#include "se/yabs/aichallenge/Dispatcher.cpp"
#include "se/yabs/aichallenge/Handler.cpp"

namespace se {
namespace yabs {
namespace aichallenge {

ClassRegistry::ClassRegistry() {
	add<se::yabs::aichallenge::Message>();
	add<se::yabs::aichallenge::WelcomeMessage>();
	add<se::yabs::aichallenge::ErrorMessage>();
	add<se::yabs::aichallenge::Checkin>();
	add<se::yabs::aichallenge::PlayGame>();
	add<se::yabs::aichallenge::GameChallengeFound>();
	add<se::yabs::aichallenge::battleship::Ship>();
	add<se::yabs::aichallenge::battleship::Segment>();
	add<se::yabs::aichallenge::battleship::Map>();
	add<se::yabs::aichallenge::battleship::Player>();
	add<se::yabs::aichallenge::battleship::GameState>();
	add<se::yabs::aichallenge::battleship::Vec2>();
	add<se::yabs::aichallenge::battleship::Shot>();
}

ClassRegistry::~ClassRegistry() {
}

const mgen::ClassRegistryEntry * se::yabs::aichallenge::ClassRegistry::getByIds(const std::vector<short>& ids) const {
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_Message(se::yabs::aichallenge::Message::_type_ids(), se::yabs::aichallenge::Message::_type_name(), se::yabs::aichallenge::Message::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_WelcomeMessage(se::yabs::aichallenge::WelcomeMessage::_type_ids(), se::yabs::aichallenge::WelcomeMessage::_type_name(), se::yabs::aichallenge::WelcomeMessage::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_ErrorMessage(se::yabs::aichallenge::ErrorMessage::_type_ids(), se::yabs::aichallenge::ErrorMessage::_type_name(), se::yabs::aichallenge::ErrorMessage::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_Checkin(se::yabs::aichallenge::Checkin::_type_ids(), se::yabs::aichallenge::Checkin::_type_name(), se::yabs::aichallenge::Checkin::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_PlayGame(se::yabs::aichallenge::PlayGame::_type_ids(), se::yabs::aichallenge::PlayGame::_type_name(), se::yabs::aichallenge::PlayGame::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_GameChallengeFound(se::yabs::aichallenge::GameChallengeFound::_type_ids(), se::yabs::aichallenge::GameChallengeFound::_type_name(), se::yabs::aichallenge::GameChallengeFound::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Ship(se::yabs::aichallenge::battleship::Ship::_type_ids(), se::yabs::aichallenge::battleship::Ship::_type_name(), se::yabs::aichallenge::battleship::Ship::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Segment(se::yabs::aichallenge::battleship::Segment::_type_ids(), se::yabs::aichallenge::battleship::Segment::_type_name(), se::yabs::aichallenge::battleship::Segment::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Map(se::yabs::aichallenge::battleship::Map::_type_ids(), se::yabs::aichallenge::battleship::Map::_type_name(), se::yabs::aichallenge::battleship::Map::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Player(se::yabs::aichallenge::battleship::Player::_type_ids(), se::yabs::aichallenge::battleship::Player::_type_name(), se::yabs::aichallenge::battleship::Player::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_GameState(se::yabs::aichallenge::battleship::GameState::_type_ids(), se::yabs::aichallenge::battleship::GameState::_type_name(), se::yabs::aichallenge::battleship::GameState::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Vec2(se::yabs::aichallenge::battleship::Vec2::_type_ids(), se::yabs::aichallenge::battleship::Vec2::_type_name(), se::yabs::aichallenge::battleship::Vec2::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Shot(se::yabs::aichallenge::battleship::Shot::_type_ids(), se::yabs::aichallenge::battleship::Shot::_type_name(), se::yabs::aichallenge::battleship::Shot::_newInstance);

	std::size_t i = 0;
	switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
		case se::yabs::aichallenge::Message::_type_id_16bit:
			switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
				case se::yabs::aichallenge::WelcomeMessage::_type_id_16bit:
					return &se_yabs_aichallenge_WelcomeMessage;
					break;
				case se::yabs::aichallenge::ErrorMessage::_type_id_16bit:
					return &se_yabs_aichallenge_ErrorMessage;
					break;
				case se::yabs::aichallenge::Checkin::_type_id_16bit:
					return &se_yabs_aichallenge_Checkin;
					break;
				case se::yabs::aichallenge::PlayGame::_type_id_16bit:
					return &se_yabs_aichallenge_PlayGame;
					break;
				case se::yabs::aichallenge::GameChallengeFound::_type_id_16bit:
					return &se_yabs_aichallenge_GameChallengeFound;
					break;
				default:
					return &se_yabs_aichallenge_Message;
					break;
			}
			break;
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
		case se::yabs::aichallenge::battleship::GameState::_type_id_16bit:
			return &se_yabs_aichallenge_battleship_GameState;
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

