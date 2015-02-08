/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-01-05 13:12:21 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.yabs.aichallenge;

import se.culvertsoft.mgen.javapack.classes.ClassRegistryEntry;
import se.culvertsoft.mgen.javapack.classes.Ctor;
import se.culvertsoft.mgen.javapack.classes.MGenBase;

public class ClassRegistry extends se.culvertsoft.mgen.javapack.classes.ClassRegistryBase  {

	public static ClassRegistryEntry se_yabs_aichallenge_Message = new ClassRegistryEntry(6843908126517847773L, se.yabs.aichallenge.Message._TYPE_IDS, "se.yabs.aichallenge.Message", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.Message(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_WelcomeMessage = new ClassRegistryEntry(519923755957276911L, se.yabs.aichallenge.WelcomeMessage._TYPE_IDS, "se.yabs.aichallenge.WelcomeMessage", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.WelcomeMessage(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_ErrorMessage = new ClassRegistryEntry(4495102748553798680L, se.yabs.aichallenge.ErrorMessage._TYPE_IDS, "se.yabs.aichallenge.ErrorMessage", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.ErrorMessage(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_Checkin = new ClassRegistryEntry(4589873252555491528L, se.yabs.aichallenge.Checkin._TYPE_IDS, "se.yabs.aichallenge.Checkin", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.Checkin(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_PlayGame = new ClassRegistryEntry(1984944623186213537L, se.yabs.aichallenge.PlayGame._TYPE_IDS, "se.yabs.aichallenge.PlayGame", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.PlayGame(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_GameChallengeFound = new ClassRegistryEntry(7479712952545752927L, se.yabs.aichallenge.GameChallengeFound._TYPE_IDS, "se.yabs.aichallenge.GameChallengeFound", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.GameChallengeFound(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_battleship_Ship = new ClassRegistryEntry(6060363830252660056L, se.yabs.aichallenge.battleship.Ship._TYPE_IDS, "se.yabs.aichallenge.battleship.Ship", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.Ship(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_battleship_Segment = new ClassRegistryEntry(9066045619354066259L, se.yabs.aichallenge.battleship.Segment._TYPE_IDS, "se.yabs.aichallenge.battleship.Segment", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.Segment(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_battleship_Map = new ClassRegistryEntry(6892640198302983990L, se.yabs.aichallenge.battleship.Map._TYPE_IDS, "se.yabs.aichallenge.battleship.Map", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.Map(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_battleship_Player = new ClassRegistryEntry(5600893473471973514L, se.yabs.aichallenge.battleship.Player._TYPE_IDS, "se.yabs.aichallenge.battleship.Player", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.Player(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_battleship_GameState = new ClassRegistryEntry(7830028132583391513L, se.yabs.aichallenge.battleship.GameState._TYPE_IDS, "se.yabs.aichallenge.battleship.GameState", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.GameState(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_battleship_Vec2 = new ClassRegistryEntry(5114268100851014382L, se.yabs.aichallenge.battleship.Vec2._TYPE_IDS, "se.yabs.aichallenge.battleship.Vec2", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.Vec2(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_battleship_Shot = new ClassRegistryEntry(5723027387374372704L, se.yabs.aichallenge.battleship.Shot._TYPE_IDS, "se.yabs.aichallenge.battleship.Shot", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.Shot(); } });

	public ClassRegistry() {
		add(se_yabs_aichallenge_Message);
		add(se_yabs_aichallenge_WelcomeMessage);
		add(se_yabs_aichallenge_ErrorMessage);
		add(se_yabs_aichallenge_Checkin);
		add(se_yabs_aichallenge_PlayGame);
		add(se_yabs_aichallenge_GameChallengeFound);
		add(se_yabs_aichallenge_battleship_Ship);
		add(se_yabs_aichallenge_battleship_Segment);
		add(se_yabs_aichallenge_battleship_Map);
		add(se_yabs_aichallenge_battleship_Player);
		add(se_yabs_aichallenge_battleship_GameState);
		add(se_yabs_aichallenge_battleship_Vec2);
		add(se_yabs_aichallenge_battleship_Shot);
	}

	@Override
	public ClassRegistryEntry getByTypeIds16Bit(final short[] ids) {
		int i = 0;
		switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
			case se.yabs.aichallenge.Message._TYPE_ID_16BIT:
				switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
					case se.yabs.aichallenge.WelcomeMessage._TYPE_ID_16BIT:
						return se_yabs_aichallenge_WelcomeMessage;
					case se.yabs.aichallenge.ErrorMessage._TYPE_ID_16BIT:
						return se_yabs_aichallenge_ErrorMessage;
					case se.yabs.aichallenge.Checkin._TYPE_ID_16BIT:
						return se_yabs_aichallenge_Checkin;
					case se.yabs.aichallenge.PlayGame._TYPE_ID_16BIT:
						return se_yabs_aichallenge_PlayGame;
					case se.yabs.aichallenge.GameChallengeFound._TYPE_ID_16BIT:
						return se_yabs_aichallenge_GameChallengeFound;
					default:
						return se_yabs_aichallenge_Message;
				}
			case se.yabs.aichallenge.battleship.Ship._TYPE_ID_16BIT:
				return se_yabs_aichallenge_battleship_Ship;
			case se.yabs.aichallenge.battleship.Segment._TYPE_ID_16BIT:
				return se_yabs_aichallenge_battleship_Segment;
			case se.yabs.aichallenge.battleship.Map._TYPE_ID_16BIT:
				return se_yabs_aichallenge_battleship_Map;
			case se.yabs.aichallenge.battleship.Player._TYPE_ID_16BIT:
				return se_yabs_aichallenge_battleship_Player;
			case se.yabs.aichallenge.battleship.GameState._TYPE_ID_16BIT:
				return se_yabs_aichallenge_battleship_GameState;
			case se.yabs.aichallenge.battleship.Vec2._TYPE_ID_16BIT:
				return se_yabs_aichallenge_battleship_Vec2;
			case se.yabs.aichallenge.battleship.Shot._TYPE_ID_16BIT:
				return se_yabs_aichallenge_battleship_Shot;
			default:
				return null;
		}
	}

	@Override
	public ClassRegistryEntry getByTypeIds16BitBase64(final String[] ids) {
		int i = 0;
		switch((i < ids.length ? ids[i++] : "0xFFFFFFFF")) {
			case se.yabs.aichallenge.Message._TYPE_ID_16BIT_BASE64:
				switch((i < ids.length ? ids[i++] : "0xFFFFFFFF")) {
					case se.yabs.aichallenge.WelcomeMessage._TYPE_ID_16BIT_BASE64:
						return se_yabs_aichallenge_WelcomeMessage;
					case se.yabs.aichallenge.ErrorMessage._TYPE_ID_16BIT_BASE64:
						return se_yabs_aichallenge_ErrorMessage;
					case se.yabs.aichallenge.Checkin._TYPE_ID_16BIT_BASE64:
						return se_yabs_aichallenge_Checkin;
					case se.yabs.aichallenge.PlayGame._TYPE_ID_16BIT_BASE64:
						return se_yabs_aichallenge_PlayGame;
					case se.yabs.aichallenge.GameChallengeFound._TYPE_ID_16BIT_BASE64:
						return se_yabs_aichallenge_GameChallengeFound;
					default:
						return se_yabs_aichallenge_Message;
				}
			case se.yabs.aichallenge.battleship.Ship._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_Ship;
			case se.yabs.aichallenge.battleship.Segment._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_Segment;
			case se.yabs.aichallenge.battleship.Map._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_Map;
			case se.yabs.aichallenge.battleship.Player._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_Player;
			case se.yabs.aichallenge.battleship.GameState._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_GameState;
			case se.yabs.aichallenge.battleship.Vec2._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_Vec2;
			case se.yabs.aichallenge.battleship.Shot._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_Shot;
			default:
				return null;
		}
	}

}
