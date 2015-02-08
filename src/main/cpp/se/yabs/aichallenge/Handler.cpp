/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "Handler.h"
#include "se/yabs/aichallenge/WelcomeMessage.h"
#include "se/yabs/aichallenge/ErrorMessage.h"
#include "se/yabs/aichallenge/Checkin.h"
#include "se/yabs/aichallenge/PlayGame.h"
#include "se/yabs/aichallenge/GameChallengeFound.h"
#include "se/yabs/aichallenge/battleship/Ship.h"
#include "se/yabs/aichallenge/battleship/Segment.h"
#include "se/yabs/aichallenge/battleship/Map.h"
#include "se/yabs/aichallenge/battleship/Player.h"
#include "se/yabs/aichallenge/battleship/GameState.h"
#include "se/yabs/aichallenge/battleship/Vec2.h"
#include "se/yabs/aichallenge/battleship/Shot.h"

namespace se {
namespace yabs {
namespace aichallenge {

Handler::Handler() {}

Handler::~Handler() {}

void Handler::handleDiscard(mgen::MGenBase& o) {
}

void Handler::handleUnknown(mgen::MGenBase& o) {
	handleDiscard(o);
}

void Handler::handle(se::yabs::aichallenge::Message& o) {
	handleDiscard(o);
}

void Handler::handle(se::yabs::aichallenge::WelcomeMessage& o) {
	handle(static_cast<se::yabs::aichallenge::Message&>(o));
}

void Handler::handle(se::yabs::aichallenge::ErrorMessage& o) {
	handle(static_cast<se::yabs::aichallenge::Message&>(o));
}

void Handler::handle(se::yabs::aichallenge::Checkin& o) {
	handle(static_cast<se::yabs::aichallenge::Message&>(o));
}

void Handler::handle(se::yabs::aichallenge::PlayGame& o) {
	handle(static_cast<se::yabs::aichallenge::Message&>(o));
}

void Handler::handle(se::yabs::aichallenge::GameChallengeFound& o) {
	handle(static_cast<se::yabs::aichallenge::Message&>(o));
}

void Handler::handle(se::yabs::aichallenge::battleship::Ship& o) {
	handleDiscard(o);
}

void Handler::handle(se::yabs::aichallenge::battleship::Segment& o) {
	handleDiscard(o);
}

void Handler::handle(se::yabs::aichallenge::battleship::Map& o) {
	handleDiscard(o);
}

void Handler::handle(se::yabs::aichallenge::battleship::Player& o) {
	handleDiscard(o);
}

void Handler::handle(se::yabs::aichallenge::battleship::GameState& o) {
	handleDiscard(o);
}

void Handler::handle(se::yabs::aichallenge::battleship::Vec2& o) {
	handleDiscard(o);
}

void Handler::handle(se::yabs::aichallenge::battleship::Shot& o) {
	handleDiscard(o);
}


} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

