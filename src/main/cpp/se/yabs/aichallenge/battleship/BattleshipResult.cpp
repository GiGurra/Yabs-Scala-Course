/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "BattleshipResult.h"
#include <map>

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

static std::map<std::string, BattleshipResult> _mk_BattleshipResult_enum_lkup_map() {
	std::map<std::string, BattleshipResult> out;
	out["WIN"] = BattleshipResult_WIN;
	out["LOSS"] = BattleshipResult_LOSS;
	out["UNKNOWN"] = BattleshipResult_UNKNOWN;
	return out;
}

static std::vector<BattleshipResult> _mk_BattleshipResult_enum_values() {
	std::vector<BattleshipResult> out;
	out.push_back(BattleshipResult_WIN);
	out.push_back(BattleshipResult_LOSS);
	out.push_back(BattleshipResult_UNKNOWN);
	return out;
}

static std::vector<std::string> _mk_BattleshipResult_enum_names() {
	std::vector<std::string> out;
	out.push_back("WIN");
	out.push_back("LOSS");
	out.push_back("UNKNOWN");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

namespace mgen {

const std::vector<se::yabs::aichallenge::battleship::BattleshipResult>& get_enum_values(const se::yabs::aichallenge::battleship::BattleshipResult /* type_evidence */) {
	static const std::vector<se::yabs::aichallenge::battleship::BattleshipResult> out = se::yabs::aichallenge::battleship::_mk_BattleshipResult_enum_values();
	return out;
}

se::yabs::aichallenge::battleship::BattleshipResult get_enum_value(const se::yabs::aichallenge::battleship::BattleshipResult /* type_evidence */, const std::string& enumName) {
	static const std::map<std::string, se::yabs::aichallenge::battleship::BattleshipResult> lkup = se::yabs::aichallenge::battleship::_mk_BattleshipResult_enum_lkup_map();
	std::map<std::string, se::yabs::aichallenge::battleship::BattleshipResult>::const_iterator it = lkup.find(enumName);
	return it != lkup.end() ? it->second : se::yabs::aichallenge::battleship::BattleshipResult_UNKNOWN;
}

const std::vector<std::string>& get_enum_names(const se::yabs::aichallenge::battleship::BattleshipResult /* type_evidence */) {
	static const std::vector<std::string> out = se::yabs::aichallenge::battleship::_mk_BattleshipResult_enum_names();
	return out;
}

const std::string& get_enum_name(const se::yabs::aichallenge::battleship::BattleshipResult enumValue) {
	const static std::string WIN_name("WIN");
	const static std::string LOSS_name("LOSS");
	const static std::string UNKNOWN_name("UNKNOWN");
	switch (enumValue) {
		case se::yabs::aichallenge::battleship::BattleshipResult_WIN:
			return WIN_name;
		case se::yabs::aichallenge::battleship::BattleshipResult_LOSS:
			return LOSS_name;
		case se::yabs::aichallenge::battleship::BattleshipResult_UNKNOWN:
			return UNKNOWN_name;
		default:
			return UNKNOWN_name;
	}
}

} // End namespace mgen

