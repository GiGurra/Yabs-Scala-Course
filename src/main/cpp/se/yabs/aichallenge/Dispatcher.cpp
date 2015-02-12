/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "Dispatcher.h"
#include "ClassRegistry.h"

namespace se {
namespace yabs {
namespace aichallenge {

void dispatch(mgen::MGenBase& object, se::yabs::aichallenge::Handler& handler) {
	const std::vector<short>& ids = object._typeIds16Bit();
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
											handler.handle(static_cast<se::yabs::aichallenge::battleship::PlaceShipsRequest&>(object));
											break;
										case se::yabs::aichallenge::battleship::MakeShotRequest::_type_id_16bit:
											handler.handle(static_cast<se::yabs::aichallenge::battleship::MakeShotRequest&>(object));
											break;
										default:
											handler.handle(static_cast<se::yabs::aichallenge::battleship::RequestFromServer&>(object));
											break;
									}
									break;
								case se::yabs::aichallenge::battleship::PlaceShips::_type_id_16bit:
									handler.handle(static_cast<se::yabs::aichallenge::battleship::PlaceShips&>(object));
									break;
								case se::yabs::aichallenge::battleship::MakeShot::_type_id_16bit:
									handler.handle(static_cast<se::yabs::aichallenge::battleship::MakeShot&>(object));
									break;
								case se::yabs::aichallenge::battleship::ShotResult::_type_id_16bit:
									handler.handle(static_cast<se::yabs::aichallenge::battleship::ShotResult&>(object));
									break;
								case se::yabs::aichallenge::battleship::GameOver::_type_id_16bit:
									handler.handle(static_cast<se::yabs::aichallenge::battleship::GameOver&>(object));
									break;
								default:
									handler.handle(static_cast<se::yabs::aichallenge::battleship::BattleshipMessage&>(object));
									break;
							}
							break;
						default:
							handler.handle(static_cast<se::yabs::aichallenge::GameMessage&>(object));
							break;
					}
					break;
				case se::yabs::aichallenge::WelcomeMessage::_type_id_16bit:
					handler.handle(static_cast<se::yabs::aichallenge::WelcomeMessage&>(object));
					break;
				case se::yabs::aichallenge::ErrorMessage::_type_id_16bit:
					handler.handle(static_cast<se::yabs::aichallenge::ErrorMessage&>(object));
					break;
				case se::yabs::aichallenge::Checkin::_type_id_16bit:
					handler.handle(static_cast<se::yabs::aichallenge::Checkin&>(object));
					break;
				case se::yabs::aichallenge::PlayGame::_type_id_16bit:
					handler.handle(static_cast<se::yabs::aichallenge::PlayGame&>(object));
					break;
				case se::yabs::aichallenge::GameChallengeFound::_type_id_16bit:
					handler.handle(static_cast<se::yabs::aichallenge::GameChallengeFound&>(object));
					break;
				default:
					handler.handle(static_cast<se::yabs::aichallenge::Message&>(object));
					break;
			}
			break;
		case se::yabs::aichallenge::GamePlayed::_type_id_16bit:
			handler.handle(static_cast<se::yabs::aichallenge::GamePlayed&>(object));
			break;
		case se::yabs::aichallenge::User::_type_id_16bit:
			handler.handle(static_cast<se::yabs::aichallenge::User&>(object));
			break;
		case se::yabs::aichallenge::UserDb::_type_id_16bit:
			handler.handle(static_cast<se::yabs::aichallenge::UserDb&>(object));
			break;
		case se::yabs::aichallenge::battleship::Ship::_type_id_16bit:
			handler.handle(static_cast<se::yabs::aichallenge::battleship::Ship&>(object));
			break;
		case se::yabs::aichallenge::battleship::Segment::_type_id_16bit:
			handler.handle(static_cast<se::yabs::aichallenge::battleship::Segment&>(object));
			break;
		case se::yabs::aichallenge::battleship::Player::_type_id_16bit:
			handler.handle(static_cast<se::yabs::aichallenge::battleship::Player&>(object));
			break;
		case se::yabs::aichallenge::battleship::GameState::_type_id_16bit:
			handler.handle(static_cast<se::yabs::aichallenge::battleship::GameState&>(object));
			break;
		case se::yabs::aichallenge::battleship::Vec2::_type_id_16bit:
			handler.handle(static_cast<se::yabs::aichallenge::battleship::Vec2&>(object));
			break;
		case se::yabs::aichallenge::battleship::Shot::_type_id_16bit:
			handler.handle(static_cast<se::yabs::aichallenge::battleship::Shot&>(object));
			break;
		default:
			handler.handleUnknown(object);
			break;
	}
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

