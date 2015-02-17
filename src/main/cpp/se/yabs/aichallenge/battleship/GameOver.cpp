/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/yabs/aichallenge/battleship/GameOver.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace yabs {
namespace aichallenge {
namespace battleship {

GameOver::GameOver() : 
		_m_reason_isSet(false),
		_m_winner_isSet(false),
		_m_loser_isSet(false),
		_m_board_isSet(false) {
}

GameOver::GameOver(const std::string& reason, 
			const std::string& winner, 
			const std::string& loser, 
			const GameState& board) : 
		m_reason(reason),
		m_winner(winner),
		m_loser(loser),
		m_board(board),
		_m_reason_isSet(true),
		_m_winner_isSet(true),
		_m_loser_isSet(true),
		_m_board_isSet(true) {
}

GameOver::~GameOver() {
}

const std::string& GameOver::getReason() const {
	return m_reason;
}

const std::string& GameOver::getWinner() const {
	return m_winner;
}

const std::string& GameOver::getLoser() const {
	return m_loser;
}

const GameState& GameOver::getBoard() const {
	return m_board;
}

std::string& GameOver::getReasonMutable() {
	_m_reason_isSet = true;
	return m_reason;
}

std::string& GameOver::getWinnerMutable() {
	_m_winner_isSet = true;
	return m_winner;
}

std::string& GameOver::getLoserMutable() {
	_m_loser_isSet = true;
	return m_loser;
}

GameState& GameOver::getBoardMutable() {
	_m_board_isSet = true;
	return m_board;
}

GameOver& GameOver::setReason(const std::string& reason) {
	m_reason = reason;
	_m_reason_isSet = true;
	return *this;
}

GameOver& GameOver::setWinner(const std::string& winner) {
	m_winner = winner;
	_m_winner_isSet = true;
	return *this;
}

GameOver& GameOver::setLoser(const std::string& loser) {
	m_loser = loser;
	_m_loser_isSet = true;
	return *this;
}

GameOver& GameOver::setBoard(const GameState& board) {
	m_board = board;
	_m_board_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool GameOver::hasReason() const {
	return _isReasonSet(mgen::SHALLOW);
}

bool GameOver::hasWinner() const {
	return _isWinnerSet(mgen::SHALLOW);
}

bool GameOver::hasLoser() const {
	return _isLoserSet(mgen::SHALLOW);
}

bool GameOver::hasBoard() const {
	return _isBoardSet(mgen::SHALLOW);
}

GameOver& GameOver::unsetReason() {
	_setReasonSet(false, mgen::SHALLOW);
	return *this;
}

GameOver& GameOver::unsetWinner() {
	_setWinnerSet(false, mgen::SHALLOW);
	return *this;
}

GameOver& GameOver::unsetLoser() {
	_setLoserSet(false, mgen::SHALLOW);
	return *this;
}

GameOver& GameOver::unsetBoard() {
	_setBoardSet(false, mgen::SHALLOW);
	return *this;
}

bool GameOver::operator==(const GameOver& other) const {
	return true
		 && _isReasonSet(mgen::SHALLOW) == other._isReasonSet(mgen::SHALLOW)
		 && _isWinnerSet(mgen::SHALLOW) == other._isWinnerSet(mgen::SHALLOW)
		 && _isLoserSet(mgen::SHALLOW) == other._isLoserSet(mgen::SHALLOW)
		 && _isBoardSet(mgen::SHALLOW) == other._isBoardSet(mgen::SHALLOW)
		 && getReason() == other.getReason()
		 && getWinner() == other.getWinner()
		 && getLoser() == other.getLoser()
		 && getBoard() == other.getBoard();
}

bool GameOver::operator!=(const GameOver& other) const {
	return !(*this == other);
}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                    TYPE METADATA ACCESS AND SERIALIZATION METHODS                    *****
           *****          (accessed primarily by (de-)serializers and for ORM functionality)          *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
const mgen::Field * GameOver::_fieldById(const short id) const {
	switch (id) {
	case _field_reason_id:
		return &_field_reason_metadata();
	case _field_winner_id:
		return &_field_winner_metadata();
	case _field_loser_id:
		return &_field_loser_metadata();
	case _field_board_id:
		return &_field_board_metadata();
	default:
		return 0;
	}
}

const mgen::Field * GameOver::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("reason", &GameOver::_field_reason_metadata())("winner", &GameOver::_field_winner_metadata())("loser", &GameOver::_field_loser_metadata())("board", &GameOver::_field_board_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long GameOver::_typeId() const {
	return _type_id;
}

const std::string& GameOver::_typeName() const {
	return _type_name();
}

const short GameOver::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& GameOver::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& GameOver::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& GameOver::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& GameOver::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& GameOver::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& GameOver::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& GameOver::_fieldMetadatas() const {
	return _field_metadatas();
}

GameOver& GameOver::_setReasonSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_reason = "";
	_m_reason_isSet = state;
	return *this;
}

GameOver& GameOver::_setWinnerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_winner = "";
	_m_winner_isSet = state;
	return *this;
}

GameOver& GameOver::_setLoserSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_loser = "";
	_m_loser_isSet = state;
	return *this;
}

GameOver& GameOver::_setBoardSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_board._setAllFieldsSet(state, mgen::DEEP);
	_m_board_isSet = state;
	return *this;
}

GameOver& GameOver::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setReasonSet(state, depth);
	_setWinnerSet(state, depth);
	_setLoserSet(state, depth);
	_setBoardSet(state, depth);
	return *this;
}

int GameOver::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isReasonSet(depth) ? 1 : 0;
	out += _isWinnerSet(depth) ? 1 : 0;
	out += _isLoserSet(depth) ? 1 : 0;
	out += _isBoardSet(depth) ? 1 : 0;
	return out;
}

bool GameOver::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_reason_id):
			return _isReasonSet(depth);
		case (_field_winner_id):
			return _isWinnerSet(depth);
		case (_field_loser_id):
			return _isLoserSet(depth);
		case (_field_board_id):
			return _isBoardSet(depth);
		default:
			return false;
	}
}

bool GameOver::_isReasonSet(const mgen::FieldSetDepth depth) const {
	return _m_reason_isSet;
}

bool GameOver::_isWinnerSet(const mgen::FieldSetDepth depth) const {
	return _m_winner_isSet;
}

bool GameOver::_isLoserSet(const mgen::FieldSetDepth depth) const {
	return _m_loser_isSet;
}

bool GameOver::_isBoardSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_board_isSet;
	} else {
		return _m_board_isSet && mgen::validation::validateFieldDeep(getBoard());
	}
}

bool GameOver::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isBoardSet(mgen::SHALLOW) || _isBoardSet(mgen::DEEP));
	}
}

bool GameOver::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const GameOver&>(other) == *this;
}

GameOver * GameOver::_deepCopy() const {
	return new GameOver(*this);
}

mgen::MGenBase * GameOver::_newInstance() {
	return new GameOver;
}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                                    TYPE METADATA                                     *****
           *****             (generally speaking, it's a bad idea to edit this manually)              *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
const std::string& GameOver::_type_name() {
	static const std::string out("se.yabs.aichallenge.battleship.GameOver");
	return out;
}

const std::vector<long long>& GameOver::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 6843908126517847773LL << 2246573734118294447LL << 2567022198048374295LL << 1789310646936949934LL;
	return out;
}

const std::vector<short>& GameOver::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -23638 << -25529 << 29355 << -7695;
	return out;
}

const std::vector<std::string>& GameOver::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.yabs.aichallenge.Message" << "se.yabs.aichallenge.GameMessage" << "se.yabs.aichallenge.battleship.BattleshipMessage" << "se.yabs.aichallenge.battleship.GameOver";
	return out;
}

const std::vector<std::string>& GameOver::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "o6o" << "nEc" << "cqs" << "4fE";
	return out;
}

const std::string& GameOver::_type_ids_16bit_base64_string() {
	static const std::string out("o6onEccqs4fE");
	return out;
}

const std::string& GameOver::_type_id_16bit_base64() {
	static const std::string out("4fE");
	return out;
}

const std::vector<mgen::Field>& GameOver::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_reason_metadata() << _field_winner_metadata() << _field_loser_metadata() << _field_board_metadata();
	return out;
}

const mgen::Field& GameOver::_field_reason_metadata() {
	static const mgen::Field out(-15867, "reason");
	return out;
}

const mgen::Field& GameOver::_field_winner_metadata() {
	static const mgen::Field out(-7291, "winner");
	return out;
}

const mgen::Field& GameOver::_field_loser_metadata() {
	static const mgen::Field out(9621, "loser");
	return out;
}

const mgen::Field& GameOver::_field_board_metadata() {
	static const mgen::Field out(12077, "board");
	return out;
}

} // End namespace battleship
} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

