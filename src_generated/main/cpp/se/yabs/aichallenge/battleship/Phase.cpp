/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "Phase.h"
#include <map>

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

static std::map<std::string, Phase> _mk_Phase_enum_lkup_map() {
	std::map<std::string, Phase> out;
	out["LOBBY"] = Phase_LOBBY;
	out["PLAYING"] = Phase_PLAYING;
	out["UNKNOWN"] = Phase_UNKNOWN;
	return out;
}

static std::vector<Phase> _mk_Phase_enum_values() {
	std::vector<Phase> out;
	out.push_back(Phase_LOBBY);
	out.push_back(Phase_PLAYING);
	out.push_back(Phase_UNKNOWN);
	return out;
}

static std::vector<std::string> _mk_Phase_enum_names() {
	std::vector<std::string> out;
	out.push_back("LOBBY");
	out.push_back("PLAYING");
	out.push_back("UNKNOWN");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

namespace mgen {

const std::vector<se::yabs::aichallenge::battleship::Phase>& get_enum_values(const se::yabs::aichallenge::battleship::Phase /* type_evidence */) {
	static const std::vector<se::yabs::aichallenge::battleship::Phase> out = se::yabs::aichallenge::battleship::_mk_Phase_enum_values();
	return out;
}

se::yabs::aichallenge::battleship::Phase get_enum_value(const se::yabs::aichallenge::battleship::Phase /* type_evidence */, const std::string& enumName) {
	static const std::map<std::string, se::yabs::aichallenge::battleship::Phase> lkup = se::yabs::aichallenge::battleship::_mk_Phase_enum_lkup_map();
	std::map<std::string, se::yabs::aichallenge::battleship::Phase>::const_iterator it = lkup.find(enumName);
	return it != lkup.end() ? it->second : se::yabs::aichallenge::battleship::Phase_UNKNOWN;
}

const std::vector<std::string>& get_enum_names(const se::yabs::aichallenge::battleship::Phase /* type_evidence */) {
	static const std::vector<std::string> out = se::yabs::aichallenge::battleship::_mk_Phase_enum_names();
	return out;
}

const std::string& get_enum_name(const se::yabs::aichallenge::battleship::Phase enumValue) {
	const static std::string LOBBY_name("LOBBY");
	const static std::string PLAYING_name("PLAYING");
	const static std::string UNKNOWN_name("UNKNOWN");
	switch (enumValue) {
		case se::yabs::aichallenge::battleship::Phase_LOBBY:
			return LOBBY_name;
		case se::yabs::aichallenge::battleship::Phase_PLAYING:
			return PLAYING_name;
		case se::yabs::aichallenge::battleship::Phase_UNKNOWN:
			return UNKNOWN_name;
		default:
			return UNKNOWN_name;
	}
}

} // End namespace mgen

