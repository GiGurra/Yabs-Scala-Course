/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-04 07:33:42 -0500)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.yabs.aichallenge;

import se.culvertsoft.mgen.javapack.classes.MGenBase;

public class Dispatcher  {

	public static void dispatch(MGenBase o, Handler handler) {

		if (o==null) {
			handler.handleNull(o);
			return;
		}

		final short[] ids = o._typeIds16Bit();
		int i = 0;
		switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
			case se.yabs.aichallenge.Message._TYPE_ID_16BIT:
				switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
					case se.yabs.aichallenge.GameMessage._TYPE_ID_16BIT:
						switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
							case se.yabs.aichallenge.battleship.BattleshipMessage._TYPE_ID_16BIT:
								switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
									case se.yabs.aichallenge.battleship.RequestFromServer._TYPE_ID_16BIT:
										switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
											case se.yabs.aichallenge.battleship.PlaceShipsRequest._TYPE_ID_16BIT:
												handler.handle((se.yabs.aichallenge.battleship.PlaceShipsRequest)o);
												break;
											case se.yabs.aichallenge.battleship.MakeShotRequest._TYPE_ID_16BIT:
												handler.handle((se.yabs.aichallenge.battleship.MakeShotRequest)o);
												break;
											default:
												handler.handle((se.yabs.aichallenge.battleship.RequestFromServer)o);
												break;
										}
										break;
									case se.yabs.aichallenge.battleship.PlaceShips._TYPE_ID_16BIT:
										handler.handle((se.yabs.aichallenge.battleship.PlaceShips)o);
										break;
									case se.yabs.aichallenge.battleship.MakeShot._TYPE_ID_16BIT:
										handler.handle((se.yabs.aichallenge.battleship.MakeShot)o);
										break;
									case se.yabs.aichallenge.battleship.ShotResult._TYPE_ID_16BIT:
										handler.handle((se.yabs.aichallenge.battleship.ShotResult)o);
										break;
									case se.yabs.aichallenge.battleship.GameOver._TYPE_ID_16BIT:
										handler.handle((se.yabs.aichallenge.battleship.GameOver)o);
										break;
									default:
										handler.handle((se.yabs.aichallenge.battleship.BattleshipMessage)o);
										break;
								}
								break;
							default:
								handler.handle((se.yabs.aichallenge.GameMessage)o);
								break;
						}
						break;
					case se.yabs.aichallenge.WelcomeMessage._TYPE_ID_16BIT:
						handler.handle((se.yabs.aichallenge.WelcomeMessage)o);
						break;
					case se.yabs.aichallenge.ErrorMessage._TYPE_ID_16BIT:
						handler.handle((se.yabs.aichallenge.ErrorMessage)o);
						break;
					case se.yabs.aichallenge.Checkin._TYPE_ID_16BIT:
						handler.handle((se.yabs.aichallenge.Checkin)o);
						break;
					case se.yabs.aichallenge.PlayGame._TYPE_ID_16BIT:
						handler.handle((se.yabs.aichallenge.PlayGame)o);
						break;
					case se.yabs.aichallenge.GameChallengeFound._TYPE_ID_16BIT:
						handler.handle((se.yabs.aichallenge.GameChallengeFound)o);
						break;
					default:
						handler.handle((se.yabs.aichallenge.Message)o);
						break;
				}
				break;
			case se.yabs.aichallenge.GamePlayed._TYPE_ID_16BIT:
				handler.handle((se.yabs.aichallenge.GamePlayed)o);
				break;
			case se.yabs.aichallenge.User._TYPE_ID_16BIT:
				handler.handle((se.yabs.aichallenge.User)o);
				break;
			case se.yabs.aichallenge.UserDb._TYPE_ID_16BIT:
				handler.handle((se.yabs.aichallenge.UserDb)o);
				break;
			case se.yabs.aichallenge.battleship.Ship._TYPE_ID_16BIT:
				handler.handle((se.yabs.aichallenge.battleship.Ship)o);
				break;
			case se.yabs.aichallenge.battleship.Segment._TYPE_ID_16BIT:
				handler.handle((se.yabs.aichallenge.battleship.Segment)o);
				break;
			case se.yabs.aichallenge.battleship.Player._TYPE_ID_16BIT:
				handler.handle((se.yabs.aichallenge.battleship.Player)o);
				break;
			case se.yabs.aichallenge.battleship.GameState._TYPE_ID_16BIT:
				handler.handle((se.yabs.aichallenge.battleship.GameState)o);
				break;
			case se.yabs.aichallenge.battleship.Vec2._TYPE_ID_16BIT:
				handler.handle((se.yabs.aichallenge.battleship.Vec2)o);
				break;
			case se.yabs.aichallenge.battleship.Shot._TYPE_ID_16BIT:
				handler.handle((se.yabs.aichallenge.battleship.Shot)o);
				break;
			default:
				handler.handleUnknown(o);
				break;
		}
	}

}
