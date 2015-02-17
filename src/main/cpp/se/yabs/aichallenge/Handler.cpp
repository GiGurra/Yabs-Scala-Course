/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "Handler.h"
#include "se/yabs/aichallenge/WelcomeMessage.h"
#include "se/yabs/aichallenge/ErrorMessage.h"
#include "se/yabs/aichallenge/Checkin.h"
#include "se/yabs/aichallenge/PlayGame.h"
#include "se/yabs/aichallenge/GameChallengeFound.h"
#include "se/yabs/aichallenge/GamePlayed.h"
#include "se/yabs/aichallenge/User.h"
#include "se/yabs/aichallenge/UserDb.h"
#include "se/yabs/aichallenge/battleship/Ship.h"
#include "se/yabs/aichallenge/battleship/Segment.h"
#include "se/yabs/aichallenge/battleship/Player.h"
#include "se/yabs/aichallenge/battleship/GameState.h"
#include "se/yabs/aichallenge/battleship/Vec2.h"
#include "se/yabs/aichallenge/battleship/Shot.h"
#include "se/yabs/aichallenge/battleship/PlaceShipsRequest.h"
#include "se/yabs/aichallenge/battleship/PlaceShips.h"
#include "se/yabs/aichallenge/battleship/MakeShotRequest.h"
#include "se/yabs/aichallenge/battleship/MakeShot.h"
#include "se/yabs/aichallenge/battleship/ShotResult.h"
#include "se/yabs/aichallenge/battleship/GameOver.h"

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

void Handler::handle(se::yabs::aichallenge::GameMessage& o) {
	handle(static_cast<se::yabs::aichallenge::Message&>(o));
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

void Handler::handle(se::yabs::aichallenge::GamePlayed& o) {
	handleDiscard(o);
}

void Handler::handle(se::yabs::aichallenge::User& o) {
	handleDiscard(o);
}

void Handler::handle(se::yabs::aichallenge::UserDb& o) {
	handleDiscard(o);
}

void Handler::handle(se::yabs::aichallenge::battleship::Ship& o) {
	handleDiscard(o);
}

void Handler::handle(se::yabs::aichallenge::battleship::Segment& o) {
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

void Handler::handle(se::yabs::aichallenge::battleship::BattleshipMessage& o) {
	handle(static_cast<se::yabs::aichallenge::GameMessage&>(o));
}

void Handler::handle(se::yabs::aichallenge::battleship::RequestFromServer& o) {
	handle(static_cast<se::yabs::aichallenge::battleship::BattleshipMessage&>(o));
}

void Handler::handle(se::yabs::aichallenge::battleship::PlaceShipsRequest& o) {
	handle(static_cast<se::yabs::aichallenge::battleship::RequestFromServer&>(o));
}

void Handler::handle(se::yabs::aichallenge::battleship::PlaceShips& o) {
	handle(static_cast<se::yabs::aichallenge::battleship::BattleshipMessage&>(o));
}

void Handler::handle(se::yabs::aichallenge::battleship::MakeShotRequest& o) {
	handle(static_cast<se::yabs::aichallenge::battleship::RequestFromServer&>(o));
}

void Handler::handle(se::yabs::aichallenge::battleship::MakeShot& o) {
	handle(static_cast<se::yabs::aichallenge::battleship::BattleshipMessage&>(o));
}

void Handler::handle(se::yabs::aichallenge::battleship::ShotResult& o) {
	handle(static_cast<se::yabs::aichallenge::battleship::BattleshipMessage&>(o));
}

void Handler::handle(se::yabs::aichallenge::battleship::GameOver& o) {
	handle(static_cast<se::yabs::aichallenge::battleship::BattleshipMessage&>(o));
}


} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

