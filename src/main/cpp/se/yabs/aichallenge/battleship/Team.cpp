/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "Team.h"
#include <map>

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

static std::map<std::string, Team> _mk_Team_enum_lkup_map() {
	std::map<std::string, Team> out;
	out["RED"] = Team_RED;
	out["BLUE"] = Team_BLUE;
	out["OBSERVERS"] = Team_OBSERVERS;
	out["UNKNOWN"] = Team_UNKNOWN;
	return out;
}

static std::vector<Team> _mk_Team_enum_values() {
	std::vector<Team> out;
	out.push_back(Team_RED);
	out.push_back(Team_BLUE);
	out.push_back(Team_OBSERVERS);
	out.push_back(Team_UNKNOWN);
	return out;
}

static std::vector<std::string> _mk_Team_enum_names() {
	std::vector<std::string> out;
	out.push_back("RED");
	out.push_back("BLUE");
	out.push_back("OBSERVERS");
	out.push_back("UNKNOWN");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

namespace mgen {

const std::vector<se::yabs::aichallenge::battleship::Team>& get_enum_values(const se::yabs::aichallenge::battleship::Team /* type_evidence */) {
	static const std::vector<se::yabs::aichallenge::battleship::Team> out = se::yabs::aichallenge::battleship::_mk_Team_enum_values();
	return out;
}

se::yabs::aichallenge::battleship::Team get_enum_value(const se::yabs::aichallenge::battleship::Team /* type_evidence */, const std::string& enumName) {
	static const std::map<std::string, se::yabs::aichallenge::battleship::Team> lkup = se::yabs::aichallenge::battleship::_mk_Team_enum_lkup_map();
	std::map<std::string, se::yabs::aichallenge::battleship::Team>::const_iterator it = lkup.find(enumName);
	return it != lkup.end() ? it->second : se::yabs::aichallenge::battleship::Team_UNKNOWN;
}

const std::vector<std::string>& get_enum_names(const se::yabs::aichallenge::battleship::Team /* type_evidence */) {
	static const std::vector<std::string> out = se::yabs::aichallenge::battleship::_mk_Team_enum_names();
	return out;
}

const std::string& get_enum_name(const se::yabs::aichallenge::battleship::Team enumValue) {
	const static std::string RED_name("RED");
	const static std::string BLUE_name("BLUE");
	const static std::string OBSERVERS_name("OBSERVERS");
	const static std::string UNKNOWN_name("UNKNOWN");
	switch (enumValue) {
		case se::yabs::aichallenge::battleship::Team_RED:
			return RED_name;
		case se::yabs::aichallenge::battleship::Team_BLUE:
			return BLUE_name;
		case se::yabs::aichallenge::battleship::Team_OBSERVERS:
			return OBSERVERS_name;
		case se::yabs::aichallenge::battleship::Team_UNKNOWN:
			return UNKNOWN_name;
		default:
			return UNKNOWN_name;
	}
}

} // End namespace mgen

