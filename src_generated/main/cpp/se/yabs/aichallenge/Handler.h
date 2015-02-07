/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_HANDLER
#define SE_YABS_AICHALLENGE_HANDLER

#include "ForwardDeclare.h"

namespace se {
namespace yabs {
namespace aichallenge {

class Handler  {
	public:

	Handler();
	virtual ~Handler();
	virtual void handleDiscard(mgen::MGenBase& o);
	virtual void handleUnknown(mgen::MGenBase& o);
	virtual void handle(se::yabs::aichallenge::battleship::Ship& o);
	virtual void handle(se::yabs::aichallenge::battleship::Segment& o);
	virtual void handle(se::yabs::aichallenge::battleship::Map& o);
	virtual void handle(se::yabs::aichallenge::battleship::Player& o);
	virtual void handle(se::yabs::aichallenge::battleship::Game& o);
	virtual void handle(se::yabs::aichallenge::battleship::Vec2& o);
	virtual void handle(se::yabs::aichallenge::battleship::Shot& o);

}; // End class Handler

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
