/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_BATTLESHIP_PHASE
#define SE_YABS_AICHALLENGE_BATTLESHIP_PHASE

#include "mgen/classes/MGenBase.h"

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

enum Phase {
	Phase_LOBBY = 0,
	Phase_PLAYING = 1,
	Phase_UNKNOWN = 2
};

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

namespace mgen {

const std::vector<se::yabs::aichallenge::battleship::Phase>& get_enum_values(const se::yabs::aichallenge::battleship::Phase /* type_evidence */);
se::yabs::aichallenge::battleship::Phase get_enum_value(const se::yabs::aichallenge::battleship::Phase /* type_evidence */, const std::string& enumName);

const std::vector<std::string>& get_enum_names(const se::yabs::aichallenge::battleship::Phase /* type_evidence */);
const std::string& get_enum_name(const se::yabs::aichallenge::battleship::Phase enumValue);

} // End namespace mgen

#endif
