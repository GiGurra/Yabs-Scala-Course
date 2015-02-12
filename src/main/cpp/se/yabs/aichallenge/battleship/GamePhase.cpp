/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "GamePhase.h"
#include <map>

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

static std::map<std::string, GamePhase> _mk_GamePhase_enum_lkup_map() {
	std::map<std::string, GamePhase> out;
	out["JOINING"] = GamePhase_JOINING;
	out["PLACING_SHIPS"] = GamePhase_PLACING_SHIPS;
	out["PLAYING"] = GamePhase_PLAYING;
	out["GAME_OVER"] = GamePhase_GAME_OVER;
	out["UNKNOWN"] = GamePhase_UNKNOWN;
	return out;
}

static std::vector<GamePhase> _mk_GamePhase_enum_values() {
	std::vector<GamePhase> out;
	out.push_back(GamePhase_JOINING);
	out.push_back(GamePhase_PLACING_SHIPS);
	out.push_back(GamePhase_PLAYING);
	out.push_back(GamePhase_GAME_OVER);
	out.push_back(GamePhase_UNKNOWN);
	return out;
}

static std::vector<std::string> _mk_GamePhase_enum_names() {
	std::vector<std::string> out;
	out.push_back("JOINING");
	out.push_back("PLACING_SHIPS");
	out.push_back("PLAYING");
	out.push_back("GAME_OVER");
	out.push_back("UNKNOWN");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

namespace mgen {

const std::vector<se::yabs::aichallenge::battleship::GamePhase>& get_enum_values(const se::yabs::aichallenge::battleship::GamePhase /* type_evidence */) {
	static const std::vector<se::yabs::aichallenge::battleship::GamePhase> out = se::yabs::aichallenge::battleship::_mk_GamePhase_enum_values();
	return out;
}

se::yabs::aichallenge::battleship::GamePhase get_enum_value(const se::yabs::aichallenge::battleship::GamePhase /* type_evidence */, const std::string& enumName) {
	static const std::map<std::string, se::yabs::aichallenge::battleship::GamePhase> lkup = se::yabs::aichallenge::battleship::_mk_GamePhase_enum_lkup_map();
	std::map<std::string, se::yabs::aichallenge::battleship::GamePhase>::const_iterator it = lkup.find(enumName);
	return it != lkup.end() ? it->second : se::yabs::aichallenge::battleship::GamePhase_UNKNOWN;
}

const std::vector<std::string>& get_enum_names(const se::yabs::aichallenge::battleship::GamePhase /* type_evidence */) {
	static const std::vector<std::string> out = se::yabs::aichallenge::battleship::_mk_GamePhase_enum_names();
	return out;
}

const std::string& get_enum_name(const se::yabs::aichallenge::battleship::GamePhase enumValue) {
	const static std::string JOINING_name("JOINING");
	const static std::string PLACING_SHIPS_name("PLACING_SHIPS");
	const static std::string PLAYING_name("PLAYING");
	const static std::string GAME_OVER_name("GAME_OVER");
	const static std::string UNKNOWN_name("UNKNOWN");
	switch (enumValue) {
		case se::yabs::aichallenge::battleship::GamePhase_JOINING:
			return JOINING_name;
		case se::yabs::aichallenge::battleship::GamePhase_PLACING_SHIPS:
			return PLACING_SHIPS_name;
		case se::yabs::aichallenge::battleship::GamePhase_PLAYING:
			return PLAYING_name;
		case se::yabs::aichallenge::battleship::GamePhase_GAME_OVER:
			return GAME_OVER_name;
		case se::yabs::aichallenge::battleship::GamePhase_UNKNOWN:
			return UNKNOWN_name;
		default:
			return UNKNOWN_name;
	}
}

} // End namespace mgen

