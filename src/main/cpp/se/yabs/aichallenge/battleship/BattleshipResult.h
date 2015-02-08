/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_BATTLESHIP_BATTLESHIPRESULT
#define SE_YABS_AICHALLENGE_BATTLESHIP_BATTLESHIPRESULT

#include "mgen/classes/MGenBase.h"

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

enum BattleshipResult {
	BattleshipResult_WIN = 0,
	BattleshipResult_LOSS = 1,
	BattleshipResult_UNKNOWN = 2
};

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

namespace mgen {

const std::vector<se::yabs::aichallenge::battleship::BattleshipResult>& get_enum_values(const se::yabs::aichallenge::battleship::BattleshipResult /* type_evidence */);
se::yabs::aichallenge::battleship::BattleshipResult get_enum_value(const se::yabs::aichallenge::battleship::BattleshipResult /* type_evidence */, const std::string& enumName);

const std::vector<std::string>& get_enum_names(const se::yabs::aichallenge::battleship::BattleshipResult /* type_evidence */);
const std::string& get_enum_name(const se::yabs::aichallenge::battleship::BattleshipResult enumValue);

} // End namespace mgen

#endif
