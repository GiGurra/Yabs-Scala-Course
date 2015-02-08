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
#include "se/yabs/aichallenge/GameMessage.cpp"
#include "se/yabs/aichallenge/WelcomeMessage.cpp"
#include "se/yabs/aichallenge/ErrorMessage.cpp"
#include "se/yabs/aichallenge/Checkin.cpp"
#include "se/yabs/aichallenge/PlayGame.cpp"
#include "se/yabs/aichallenge/GameChallengeFound.cpp"
#include "se/yabs/aichallenge/GamePlayed.cpp"
#include "se/yabs/aichallenge/User.cpp"
#include "se/yabs/aichallenge/UserDb.cpp"
#include "se/yabs/aichallenge/battleship/Ship.cpp"
#include "se/yabs/aichallenge/battleship/Segment.cpp"
#include "se/yabs/aichallenge/battleship/Player.cpp"
#include "se/yabs/aichallenge/battleship/GameState.cpp"
#include "se/yabs/aichallenge/battleship/Vec2.cpp"
#include "se/yabs/aichallenge/battleship/Shot.cpp"
#include "se/yabs/aichallenge/battleship/BattleshipMessage.cpp"
#include "se/yabs/aichallenge/battleship/RequestFromServer.cpp"
#include "se/yabs/aichallenge/battleship/PlaceShipsRequest.cpp"
#include "se/yabs/aichallenge/battleship/PlaceShips.cpp"
#include "se/yabs/aichallenge/battleship/MakeShotRequest.cpp"
#include "se/yabs/aichallenge/battleship/MakeShot.cpp"
#include "se/yabs/aichallenge/battleship/ShotResult.cpp"
#include "se/yabs/aichallenge/battleship/GameOver.cpp"
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
	add<se::yabs::aichallenge::GameMessage>();
	add<se::yabs::aichallenge::WelcomeMessage>();
	add<se::yabs::aichallenge::ErrorMessage>();
	add<se::yabs::aichallenge::Checkin>();
	add<se::yabs::aichallenge::PlayGame>();
	add<se::yabs::aichallenge::GameChallengeFound>();
	add<se::yabs::aichallenge::GamePlayed>();
	add<se::yabs::aichallenge::User>();
	add<se::yabs::aichallenge::UserDb>();
	add<se::yabs::aichallenge::battleship::Ship>();
	add<se::yabs::aichallenge::battleship::Segment>();
	add<se::yabs::aichallenge::battleship::Player>();
	add<se::yabs::aichallenge::battleship::GameState>();
	add<se::yabs::aichallenge::battleship::Vec2>();
	add<se::yabs::aichallenge::battleship::Shot>();
	add<se::yabs::aichallenge::battleship::BattleshipMessage>();
	add<se::yabs::aichallenge::battleship::RequestFromServer>();
	add<se::yabs::aichallenge::battleship::PlaceShipsRequest>();
	add<se::yabs::aichallenge::battleship::PlaceShips>();
	add<se::yabs::aichallenge::battleship::MakeShotRequest>();
	add<se::yabs::aichallenge::battleship::MakeShot>();
	add<se::yabs::aichallenge::battleship::ShotResult>();
	add<se::yabs::aichallenge::battleship::GameOver>();
}

ClassRegistry::~ClassRegistry() {
}

const mgen::ClassRegistryEntry * se::yabs::aichallenge::ClassRegistry::getByIds(const std::vector<short>& ids) const {
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_Message(se::yabs::aichallenge::Message::_type_ids(), se::yabs::aichallenge::Message::_type_name(), se::yabs::aichallenge::Message::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_GameMessage(se::yabs::aichallenge::GameMessage::_type_ids(), se::yabs::aichallenge::GameMessage::_type_name(), se::yabs::aichallenge::GameMessage::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_WelcomeMessage(se::yabs::aichallenge::WelcomeMessage::_type_ids(), se::yabs::aichallenge::WelcomeMessage::_type_name(), se::yabs::aichallenge::WelcomeMessage::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_ErrorMessage(se::yabs::aichallenge::ErrorMessage::_type_ids(), se::yabs::aichallenge::ErrorMessage::_type_name(), se::yabs::aichallenge::ErrorMessage::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_Checkin(se::yabs::aichallenge::Checkin::_type_ids(), se::yabs::aichallenge::Checkin::_type_name(), se::yabs::aichallenge::Checkin::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_PlayGame(se::yabs::aichallenge::PlayGame::_type_ids(), se::yabs::aichallenge::PlayGame::_type_name(), se::yabs::aichallenge::PlayGame::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_GameChallengeFound(se::yabs::aichallenge::GameChallengeFound::_type_ids(), se::yabs::aichallenge::GameChallengeFound::_type_name(), se::yabs::aichallenge::GameChallengeFound::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_GamePlayed(se::yabs::aichallenge::GamePlayed::_type_ids(), se::yabs::aichallenge::GamePlayed::_type_name(), se::yabs::aichallenge::GamePlayed::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_User(se::yabs::aichallenge::User::_type_ids(), se::yabs::aichallenge::User::_type_name(), se::yabs::aichallenge::User::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_UserDb(se::yabs::aichallenge::UserDb::_type_ids(), se::yabs::aichallenge::UserDb::_type_name(), se::yabs::aichallenge::UserDb::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Ship(se::yabs::aichallenge::battleship::Ship::_type_ids(), se::yabs::aichallenge::battleship::Ship::_type_name(), se::yabs::aichallenge::battleship::Ship::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Segment(se::yabs::aichallenge::battleship::Segment::_type_ids(), se::yabs::aichallenge::battleship::Segment::_type_name(), se::yabs::aichallenge::battleship::Segment::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Player(se::yabs::aichallenge::battleship::Player::_type_ids(), se::yabs::aichallenge::battleship::Player::_type_name(), se::yabs::aichallenge::battleship::Player::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_GameState(se::yabs::aichallenge::battleship::GameState::_type_ids(), se::yabs::aichallenge::battleship::GameState::_type_name(), se::yabs::aichallenge::battleship::GameState::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Vec2(se::yabs::aichallenge::battleship::Vec2::_type_ids(), se::yabs::aichallenge::battleship::Vec2::_type_name(), se::yabs::aichallenge::battleship::Vec2::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_Shot(se::yabs::aichallenge::battleship::Shot::_type_ids(), se::yabs::aichallenge::battleship::Shot::_type_name(), se::yabs::aichallenge::battleship::Shot::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_BattleshipMessage(se::yabs::aichallenge::battleship::BattleshipMessage::_type_ids(), se::yabs::aichallenge::battleship::BattleshipMessage::_type_name(), se::yabs::aichallenge::battleship::BattleshipMessage::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_RequestFromServer(se::yabs::aichallenge::battleship::RequestFromServer::_type_ids(), se::yabs::aichallenge::battleship::RequestFromServer::_type_name(), se::yabs::aichallenge::battleship::RequestFromServer::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_PlaceShipsRequest(se::yabs::aichallenge::battleship::PlaceShipsRequest::_type_ids(), se::yabs::aichallenge::battleship::PlaceShipsRequest::_type_name(), se::yabs::aichallenge::battleship::PlaceShipsRequest::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_PlaceShips(se::yabs::aichallenge::battleship::PlaceShips::_type_ids(), se::yabs::aichallenge::battleship::PlaceShips::_type_name(), se::yabs::aichallenge::battleship::PlaceShips::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_MakeShotRequest(se::yabs::aichallenge::battleship::MakeShotRequest::_type_ids(), se::yabs::aichallenge::battleship::MakeShotRequest::_type_name(), se::yabs::aichallenge::battleship::MakeShotRequest::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_MakeShot(se::yabs::aichallenge::battleship::MakeShot::_type_ids(), se::yabs::aichallenge::battleship::MakeShot::_type_name(), se::yabs::aichallenge::battleship::MakeShot::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_ShotResult(se::yabs::aichallenge::battleship::ShotResult::_type_ids(), se::yabs::aichallenge::battleship::ShotResult::_type_name(), se::yabs::aichallenge::battleship::ShotResult::_newInstance);
	static const mgen::ClassRegistryEntry se_yabs_aichallenge_battleship_GameOver(se::yabs::aichallenge::battleship::GameOver::_type_ids(), se::yabs::aichallenge::battleship::GameOver::_type_name(), se::yabs::aichallenge::battleship::GameOver::_newInstance);

	std::size_t i = 0;
	switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
		case se::yabs::aichallenge::Message::_type_id_16bit:
			switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
				case se::yabs::aichallenge::GameMessage::_type_id_16bit:
					switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
						case se::yabs::aichallenge::battleship::BattleshipMessage::_type_id_16bit:
							switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
								case se::yabs::aichallenge::battleship::RequestFromServer::_type_id_16bit:
									switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
										case se::yabs::aichallenge::battleship::PlaceShipsRequest::_type_id_16bit:
											return &se_yabs_aichallenge_battleship_PlaceShipsRequest;
											break;
										case se::yabs::aichallenge::battleship::MakeShotRequest::_type_id_16bit:
											return &se_yabs_aichallenge_battleship_MakeShotRequest;
											break;
										default:
											return &se_yabs_aichallenge_battleship_RequestFromServer;
											break;
									}
									break;
								case se::yabs::aichallenge::battleship::PlaceShips::_type_id_16bit:
									return &se_yabs_aichallenge_battleship_PlaceShips;
									break;
								case se::yabs::aichallenge::battleship::MakeShot::_type_id_16bit:
									return &se_yabs_aichallenge_battleship_MakeShot;
									break;
								case se::yabs::aichallenge::battleship::ShotResult::_type_id_16bit:
									return &se_yabs_aichallenge_battleship_ShotResult;
									break;
								case se::yabs::aichallenge::battleship::GameOver::_type_id_16bit:
									return &se_yabs_aichallenge_battleship_GameOver;
									break;
								default:
									return &se_yabs_aichallenge_battleship_BattleshipMessage;
									break;
							}
							break;
						default:
							return &se_yabs_aichallenge_GameMessage;
							break;
					}
					break;
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
		case se::yabs::aichallenge::GamePlayed::_type_id_16bit:
			return &se_yabs_aichallenge_GamePlayed;
			break;
		case se::yabs::aichallenge::User::_type_id_16bit:
			return &se_yabs_aichallenge_User;
			break;
		case se::yabs::aichallenge::UserDb::_type_id_16bit:
			return &se_yabs_aichallenge_UserDb;
			break;
		case se::yabs::aichallenge::battleship::Ship::_type_id_16bit:
			return &se_yabs_aichallenge_battleship_Ship;
			break;
		case se::yabs::aichallenge::battleship::Segment::_type_id_16bit:
			return &se_yabs_aichallenge_battleship_Segment;
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

