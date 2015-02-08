/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "GameSelection.h"
#include <map>

namespace se {
namespace yabs {
namespace aichallenge {

static std::map<std::string, GameSelection> _mk_GameSelection_enum_lkup_map() {
	std::map<std::string, GameSelection> out;
	out["BATTLESHIP"] = GameSelection_BATTLESHIP;
	out["GOMOKU_not_yet_implemented"] = GameSelection_GOMOKU_not_yet_implemented;
	out["UNKNOWN"] = GameSelection_UNKNOWN;
	return out;
}

static std::vector<GameSelection> _mk_GameSelection_enum_values() {
	std::vector<GameSelection> out;
	out.push_back(GameSelection_BATTLESHIP);
	out.push_back(GameSelection_GOMOKU_not_yet_implemented);
	out.push_back(GameSelection_UNKNOWN);
	return out;
}

static std::vector<std::string> _mk_GameSelection_enum_names() {
	std::vector<std::string> out;
	out.push_back("BATTLESHIP");
	out.push_back("GOMOKU_not_yet_implemented");
	out.push_back("UNKNOWN");
	return out;
}

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

namespace mgen {

const std::vector<se::yabs::aichallenge::GameSelection>& get_enum_values(const se::yabs::aichallenge::GameSelection /* type_evidence */) {
	static const std::vector<se::yabs::aichallenge::GameSelection> out = se::yabs::aichallenge::_mk_GameSelection_enum_values();
	return out;
}

se::yabs::aichallenge::GameSelection get_enum_value(const se::yabs::aichallenge::GameSelection /* type_evidence */, const std::string& enumName) {
	static const std::map<std::string, se::yabs::aichallenge::GameSelection> lkup = se::yabs::aichallenge::_mk_GameSelection_enum_lkup_map();
	std::map<std::string, se::yabs::aichallenge::GameSelection>::const_iterator it = lkup.find(enumName);
	return it != lkup.end() ? it->second : se::yabs::aichallenge::GameSelection_UNKNOWN;
}

const std::vector<std::string>& get_enum_names(const se::yabs::aichallenge::GameSelection /* type_evidence */) {
	static const std::vector<std::string> out = se::yabs::aichallenge::_mk_GameSelection_enum_names();
	return out;
}

const std::string& get_enum_name(const se::yabs::aichallenge::GameSelection enumValue) {
	const static std::string BATTLESHIP_name("BATTLESHIP");
	const static std::string GOMOKU_not_yet_implemented_name("GOMOKU_not_yet_implemented");
	const static std::string UNKNOWN_name("UNKNOWN");
	switch (enumValue) {
		case se::yabs::aichallenge::GameSelection_BATTLESHIP:
			return BATTLESHIP_name;
		case se::yabs::aichallenge::GameSelection_GOMOKU_not_yet_implemented:
			return GOMOKU_not_yet_implemented_name;
		case se::yabs::aichallenge::GameSelection_UNKNOWN:
			return UNKNOWN_name;
		default:
			return UNKNOWN_name;
	}
}

} // End namespace mgen

