/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
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
		case se::yabs::aichallenge::battleship::Ship::_type_id_16bit:
			handler.handle(static_cast<se::yabs::aichallenge::battleship::Ship&>(object));
			break;
		case se::yabs::aichallenge::battleship::Segment::_type_id_16bit:
			handler.handle(static_cast<se::yabs::aichallenge::battleship::Segment&>(object));
			break;
		case se::yabs::aichallenge::battleship::Map::_type_id_16bit:
			handler.handle(static_cast<se::yabs::aichallenge::battleship::Map&>(object));
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

