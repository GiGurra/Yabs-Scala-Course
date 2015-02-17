/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_GAMESELECTION
#define SE_YABS_AICHALLENGE_GAMESELECTION

#include "mgen/classes/MGenBase.h"

namespace se {
namespace yabs {
namespace aichallenge {

enum GameSelection {
	GameSelection_BATTLESHIP = 0,
	GameSelection_GOMOKU_not_yet_implemented = 1,
	GameSelection_UNKNOWN = 2
};

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

namespace mgen {

const std::vector<se::yabs::aichallenge::GameSelection>& get_enum_values(const se::yabs::aichallenge::GameSelection /* type_evidence */);
se::yabs::aichallenge::GameSelection get_enum_value(const se::yabs::aichallenge::GameSelection /* type_evidence */, const std::string& enumName);

const std::vector<std::string>& get_enum_names(const se::yabs::aichallenge::GameSelection /* type_evidence */);
const std::string& get_enum_name(const se::yabs::aichallenge::GameSelection enumValue);

} // End namespace mgen

#endif
