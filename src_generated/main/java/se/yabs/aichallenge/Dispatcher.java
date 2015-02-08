/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
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
					case se.yabs.aichallenge.Checkin._TYPE_ID_16BIT:
						handler.handle((se.yabs.aichallenge.Checkin)o);
						break;
					case se.yabs.aichallenge.GameChallengeFound._TYPE_ID_16BIT:
						handler.handle((se.yabs.aichallenge.GameChallengeFound)o);
						break;
					default:
						handler.handle((se.yabs.aichallenge.Message)o);
						break;
				}
				break;
			case se.yabs.aichallenge.battleship.Ship._TYPE_ID_16BIT:
				handler.handle((se.yabs.aichallenge.battleship.Ship)o);
				break;
			case se.yabs.aichallenge.battleship.Segment._TYPE_ID_16BIT:
				handler.handle((se.yabs.aichallenge.battleship.Segment)o);
				break;
			case se.yabs.aichallenge.battleship.Map._TYPE_ID_16BIT:
				handler.handle((se.yabs.aichallenge.battleship.Map)o);
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
