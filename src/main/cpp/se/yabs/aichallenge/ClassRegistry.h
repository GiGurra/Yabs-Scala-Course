/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_YABS_AICHALLENGE_CLASSREGISTRY
#define SE_YABS_AICHALLENGE_CLASSREGISTRY

#include "mgen/classes/ClassRegistryBase.h"
#include "se/yabs/aichallenge/Message.h"
#include "se/yabs/aichallenge/GameMessage.h"
#include "se/yabs/aichallenge/WelcomeMessage.h"
#include "se/yabs/aichallenge/ErrorMessage.h"
#include "se/yabs/aichallenge/Checkin.h"
#include "se/yabs/aichallenge/PlayGame.h"
#include "se/yabs/aichallenge/GameChallengeFound.h"
#include "se/yabs/aichallenge/GamePlayed.h"
#include "se/yabs/aichallenge/User.h"
#include "se/yabs/aichallenge/UserDb.h"
#include "se/yabs/aichallenge/battleship/Ship.h"
#include "se/yabs/aichallenge/battleship/Segment.h"
#include "se/yabs/aichallenge/battleship/Player.h"
#include "se/yabs/aichallenge/battleship/GameState.h"
#include "se/yabs/aichallenge/battleship/Vec2.h"
#include "se/yabs/aichallenge/battleship/Shot.h"
#include "se/yabs/aichallenge/battleship/BattleshipMessage.h"
#include "se/yabs/aichallenge/battleship/RequestFromServer.h"
#include "se/yabs/aichallenge/battleship/PlaceShipsRequest.h"
#include "se/yabs/aichallenge/battleship/PlaceShips.h"
#include "se/yabs/aichallenge/battleship/MakeShotRequest.h"
#include "se/yabs/aichallenge/battleship/MakeShot.h"
#include "se/yabs/aichallenge/battleship/ShotResult.h"
#include "se/yabs/aichallenge/battleship/GameOver.h"

namespace se {
namespace yabs {
namespace aichallenge {

class ClassRegistry : public mgen::ClassRegistryBase  {
public:

	ClassRegistry();
	virtual ~ClassRegistry();

	template<typename ContextType, typename ReaderType>
	void readObjectFields(mgen::MGenBase& o, ContextType& context, ReaderType& reader) const {

		const std::vector<short>& ids = o._typeIds16Bit();

		std::size_t i = 0;
		switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
			case se::yabs::aichallenge::Message::_type_id_16bit:
				switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
					case se::yabs::aichallenge::GameMessage::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case se::yabs::aichallenge::battleship::BattleshipMessage::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case se::yabs::aichallenge::battleship::RequestFromServer::_type_id_16bit:
										switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
											case se::yabs::aichallenge::battleship::PlaceShipsRequest::_type_id_16bit:
												reader.readFields(static_cast<se::yabs::aichallenge::battleship::PlaceShipsRequest&>(o), context);
												break;
											case se::yabs::aichallenge::battleship::MakeShotRequest::_type_id_16bit:
												reader.readFields(static_cast<se::yabs::aichallenge::battleship::MakeShotRequest&>(o), context);
												break;
											default:
												reader.readFields(static_cast<se::yabs::aichallenge::battleship::RequestFromServer&>(o), context);
												break;
										}
										break;
									case se::yabs::aichallenge::battleship::PlaceShips::_type_id_16bit:
										reader.readFields(static_cast<se::yabs::aichallenge::battleship::PlaceShips&>(o), context);
										break;
									case se::yabs::aichallenge::battleship::MakeShot::_type_id_16bit:
										reader.readFields(static_cast<se::yabs::aichallenge::battleship::MakeShot&>(o), context);
										break;
									case se::yabs::aichallenge::battleship::ShotResult::_type_id_16bit:
										reader.readFields(static_cast<se::yabs::aichallenge::battleship::ShotResult&>(o), context);
										break;
									case se::yabs::aichallenge::battleship::GameOver::_type_id_16bit:
										reader.readFields(static_cast<se::yabs::aichallenge::battleship::GameOver&>(o), context);
										break;
									default:
										reader.readFields(static_cast<se::yabs::aichallenge::battleship::BattleshipMessage&>(o), context);
										break;
								}
								break;
							default:
								reader.readFields(static_cast<se::yabs::aichallenge::GameMessage&>(o), context);
								break;
						}
						break;
					case se::yabs::aichallenge::WelcomeMessage::_type_id_16bit:
						reader.readFields(static_cast<se::yabs::aichallenge::WelcomeMessage&>(o), context);
						break;
					case se::yabs::aichallenge::ErrorMessage::_type_id_16bit:
						reader.readFields(static_cast<se::yabs::aichallenge::ErrorMessage&>(o), context);
						break;
					case se::yabs::aichallenge::Checkin::_type_id_16bit:
						reader.readFields(static_cast<se::yabs::aichallenge::Checkin&>(o), context);
						break;
					case se::yabs::aichallenge::PlayGame::_type_id_16bit:
						reader.readFields(static_cast<se::yabs::aichallenge::PlayGame&>(o), context);
						break;
					case se::yabs::aichallenge::GameChallengeFound::_type_id_16bit:
						reader.readFields(static_cast<se::yabs::aichallenge::GameChallengeFound&>(o), context);
						break;
					default:
						reader.readFields(static_cast<se::yabs::aichallenge::Message&>(o), context);
						break;
				}
				break;
			case se::yabs::aichallenge::GamePlayed::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::GamePlayed&>(o), context);
				break;
			case se::yabs::aichallenge::User::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::User&>(o), context);
				break;
			case se::yabs::aichallenge::UserDb::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::UserDb&>(o), context);
				break;
			case se::yabs::aichallenge::battleship::Ship::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::battleship::Ship&>(o), context);
				break;
			case se::yabs::aichallenge::battleship::Segment::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::battleship::Segment&>(o), context);
				break;
			case se::yabs::aichallenge::battleship::Player::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::battleship::Player&>(o), context);
				break;
			case se::yabs::aichallenge::battleship::GameState::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::battleship::GameState&>(o), context);
				break;
			case se::yabs::aichallenge::battleship::Vec2::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::battleship::Vec2&>(o), context);
				break;
			case se::yabs::aichallenge::battleship::Shot::_type_id_16bit:
				reader.readFields(static_cast<se::yabs::aichallenge::battleship::Shot&>(o), context);
				break;
			default:
				return;
				break;
		}
		return;
	}

	template<typename VisitorType>
	void visitObject(mgen::MGenBase& o, VisitorType& visitor, const mgen::FieldVisitSelection selection) const {

		const std::vector<short>& ids = o._typeIds16Bit();

		std::size_t i = 0;
		switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
			case se::yabs::aichallenge::Message::_type_id_16bit:
				switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
					case se::yabs::aichallenge::GameMessage::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case se::yabs::aichallenge::battleship::BattleshipMessage::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case se::yabs::aichallenge::battleship::RequestFromServer::_type_id_16bit:
										switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
											case se::yabs::aichallenge::battleship::PlaceShipsRequest::_type_id_16bit:
												static_cast<se::yabs::aichallenge::battleship::PlaceShipsRequest&>(o)._accept<VisitorType>(visitor, selection);
												break;
											case se::yabs::aichallenge::battleship::MakeShotRequest::_type_id_16bit:
												static_cast<se::yabs::aichallenge::battleship::MakeShotRequest&>(o)._accept<VisitorType>(visitor, selection);
												break;
											default:
												static_cast<se::yabs::aichallenge::battleship::RequestFromServer&>(o)._accept<VisitorType>(visitor, selection);
												break;
										}
										break;
									case se::yabs::aichallenge::battleship::PlaceShips::_type_id_16bit:
										static_cast<se::yabs::aichallenge::battleship::PlaceShips&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::yabs::aichallenge::battleship::MakeShot::_type_id_16bit:
										static_cast<se::yabs::aichallenge::battleship::MakeShot&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::yabs::aichallenge::battleship::ShotResult::_type_id_16bit:
										static_cast<se::yabs::aichallenge::battleship::ShotResult&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::yabs::aichallenge::battleship::GameOver::_type_id_16bit:
										static_cast<se::yabs::aichallenge::battleship::GameOver&>(o)._accept<VisitorType>(visitor, selection);
										break;
									default:
										static_cast<se::yabs::aichallenge::battleship::BattleshipMessage&>(o)._accept<VisitorType>(visitor, selection);
										break;
								}
								break;
							default:
								static_cast<se::yabs::aichallenge::GameMessage&>(o)._accept<VisitorType>(visitor, selection);
								break;
						}
						break;
					case se::yabs::aichallenge::WelcomeMessage::_type_id_16bit:
						static_cast<se::yabs::aichallenge::WelcomeMessage&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::yabs::aichallenge::ErrorMessage::_type_id_16bit:
						static_cast<se::yabs::aichallenge::ErrorMessage&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::yabs::aichallenge::Checkin::_type_id_16bit:
						static_cast<se::yabs::aichallenge::Checkin&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::yabs::aichallenge::PlayGame::_type_id_16bit:
						static_cast<se::yabs::aichallenge::PlayGame&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::yabs::aichallenge::GameChallengeFound::_type_id_16bit:
						static_cast<se::yabs::aichallenge::GameChallengeFound&>(o)._accept<VisitorType>(visitor, selection);
						break;
					default:
						static_cast<se::yabs::aichallenge::Message&>(o)._accept<VisitorType>(visitor, selection);
						break;
				}
				break;
			case se::yabs::aichallenge::GamePlayed::_type_id_16bit:
				static_cast<se::yabs::aichallenge::GamePlayed&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::User::_type_id_16bit:
				static_cast<se::yabs::aichallenge::User&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::UserDb::_type_id_16bit:
				static_cast<se::yabs::aichallenge::UserDb&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Ship::_type_id_16bit:
				static_cast<se::yabs::aichallenge::battleship::Ship&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Segment::_type_id_16bit:
				static_cast<se::yabs::aichallenge::battleship::Segment&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Player::_type_id_16bit:
				static_cast<se::yabs::aichallenge::battleship::Player&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::GameState::_type_id_16bit:
				static_cast<se::yabs::aichallenge::battleship::GameState&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Vec2::_type_id_16bit:
				static_cast<se::yabs::aichallenge::battleship::Vec2&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Shot::_type_id_16bit:
				static_cast<se::yabs::aichallenge::battleship::Shot&>(o)._accept<VisitorType>(visitor, selection);
				break;
			default:
				return;
				break;
		}
		return;
	}

	template<typename VisitorType>
	void visitObject(const mgen::MGenBase& o, VisitorType& visitor, const mgen::FieldVisitSelection selection) const {

		const std::vector<short>& ids = o._typeIds16Bit();

		std::size_t i = 0;
		switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
			case se::yabs::aichallenge::Message::_type_id_16bit:
				switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
					case se::yabs::aichallenge::GameMessage::_type_id_16bit:
						switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
							case se::yabs::aichallenge::battleship::BattleshipMessage::_type_id_16bit:
								switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
									case se::yabs::aichallenge::battleship::RequestFromServer::_type_id_16bit:
										switch(i < ids.size() ? ids[i++] : mgen::ClassRegistryBase::INVALID_16BIT_ID) {
											case se::yabs::aichallenge::battleship::PlaceShipsRequest::_type_id_16bit:
												static_cast<const se::yabs::aichallenge::battleship::PlaceShipsRequest&>(o)._accept<VisitorType>(visitor, selection);
												break;
											case se::yabs::aichallenge::battleship::MakeShotRequest::_type_id_16bit:
												static_cast<const se::yabs::aichallenge::battleship::MakeShotRequest&>(o)._accept<VisitorType>(visitor, selection);
												break;
											default:
												static_cast<const se::yabs::aichallenge::battleship::RequestFromServer&>(o)._accept<VisitorType>(visitor, selection);
												break;
										}
										break;
									case se::yabs::aichallenge::battleship::PlaceShips::_type_id_16bit:
										static_cast<const se::yabs::aichallenge::battleship::PlaceShips&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::yabs::aichallenge::battleship::MakeShot::_type_id_16bit:
										static_cast<const se::yabs::aichallenge::battleship::MakeShot&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::yabs::aichallenge::battleship::ShotResult::_type_id_16bit:
										static_cast<const se::yabs::aichallenge::battleship::ShotResult&>(o)._accept<VisitorType>(visitor, selection);
										break;
									case se::yabs::aichallenge::battleship::GameOver::_type_id_16bit:
										static_cast<const se::yabs::aichallenge::battleship::GameOver&>(o)._accept<VisitorType>(visitor, selection);
										break;
									default:
										static_cast<const se::yabs::aichallenge::battleship::BattleshipMessage&>(o)._accept<VisitorType>(visitor, selection);
										break;
								}
								break;
							default:
								static_cast<const se::yabs::aichallenge::GameMessage&>(o)._accept<VisitorType>(visitor, selection);
								break;
						}
						break;
					case se::yabs::aichallenge::WelcomeMessage::_type_id_16bit:
						static_cast<const se::yabs::aichallenge::WelcomeMessage&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::yabs::aichallenge::ErrorMessage::_type_id_16bit:
						static_cast<const se::yabs::aichallenge::ErrorMessage&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::yabs::aichallenge::Checkin::_type_id_16bit:
						static_cast<const se::yabs::aichallenge::Checkin&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::yabs::aichallenge::PlayGame::_type_id_16bit:
						static_cast<const se::yabs::aichallenge::PlayGame&>(o)._accept<VisitorType>(visitor, selection);
						break;
					case se::yabs::aichallenge::GameChallengeFound::_type_id_16bit:
						static_cast<const se::yabs::aichallenge::GameChallengeFound&>(o)._accept<VisitorType>(visitor, selection);
						break;
					default:
						static_cast<const se::yabs::aichallenge::Message&>(o)._accept<VisitorType>(visitor, selection);
						break;
				}
				break;
			case se::yabs::aichallenge::GamePlayed::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::GamePlayed&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::User::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::User&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::UserDb::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::UserDb&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Ship::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::battleship::Ship&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Segment::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::battleship::Segment&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Player::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::battleship::Player&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::GameState::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::battleship::GameState&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Vec2::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::battleship::Vec2&>(o)._accept<VisitorType>(visitor, selection);
				break;
			case se::yabs::aichallenge::battleship::Shot::_type_id_16bit:
				static_cast<const se::yabs::aichallenge::battleship::Shot&>(o)._accept<VisitorType>(visitor, selection);
				break;
			default:
				return;
				break;
		}
		return;
	}

	const mgen::ClassRegistryEntry * getByIds(const std::vector<short>& ids) const;

	const mgen::ClassRegistryEntry * getByIds(const std::vector<std::string>& base64ids_vector) const {
		return mgen::ClassRegistryBase::getByIds(base64ids_vector);
	}

	const mgen::ClassRegistryEntry * getByIds(const std::string& base64ids_concatenated) const {
		return mgen::ClassRegistryBase::getByIds(base64ids_concatenated);
	}

}; // End class ClassRegistry

} // End namespace aichallenge
} // End namespace yabs
} // End namespace se

#endif
