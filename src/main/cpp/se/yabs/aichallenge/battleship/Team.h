/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_BATTLESHIP_TEAM
#define SE_YABS_AICHALLENGE_BATTLESHIP_TEAM

#include "mgen/classes/MGenBase.h"

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

enum Team {
	Team_RED = 0,
	Team_BLUE = 1,
	Team_OBSERVERS = 2,
	Team_UNKNOWN = 3
};

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

namespace mgen {

const std::vector<se::yabs::aichallenge::battleship::Team>& get_enum_values(const se::yabs::aichallenge::battleship::Team /* type_evidence */);
se::yabs::aichallenge::battleship::Team get_enum_value(const se::yabs::aichallenge::battleship::Team /* type_evidence */, const std::string& enumName);

const std::vector<std::string>& get_enum_names(const se::yabs::aichallenge::battleship::Team /* type_evidence */);
const std::string& get_enum_name(const se::yabs::aichallenge::battleship::Team enumValue);

} // End namespace mgen

#endif
