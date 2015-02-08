/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_BATTLESHIP_GAMEPHASE
#define SE_YABS_AICHALLENGE_BATTLESHIP_GAMEPHASE

#include "mgen/classes/MGenBase.h"

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

enum GamePhase {
	GamePhase_JOINING = 0,
	GamePhase_PLACING_SHIPS = 1,
	GamePhase_PLAYING = 2,
	GamePhase_GAME_OVER = 3,
	GamePhase_UNKNOWN = 4
};

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

namespace mgen {

const std::vector<se::yabs::aichallenge::battleship::GamePhase>& get_enum_values(const se::yabs::aichallenge::battleship::GamePhase /* type_evidence */);
se::yabs::aichallenge::battleship::GamePhase get_enum_value(const se::yabs::aichallenge::battleship::GamePhase /* type_evidence */, const std::string& enumName);

const std::vector<std::string>& get_enum_names(const se::yabs::aichallenge::battleship::GamePhase /* type_evidence */);
const std::string& get_enum_name(const se::yabs::aichallenge::battleship::GamePhase enumValue);

} // End namespace mgen

#endif
