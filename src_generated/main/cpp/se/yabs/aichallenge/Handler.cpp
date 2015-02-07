/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "Handler.h"
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

Handler::Handler() {}

Handler::~Handler() {}

void Handler::handleDiscard(mgen::MGenBase& o) {
}

void Handler::handleUnknown(mgen::MGenBase& o) {
	handleDiscard(o);
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

void Handler::handle(se::yabs::aichallenge::battleship::Game& o) {
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

