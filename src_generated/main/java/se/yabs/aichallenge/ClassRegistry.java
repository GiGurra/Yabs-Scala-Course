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

	public static ClassRegistryEntry se_yabs_aichallenge_battleship_Ship = new ClassRegistryEntry(6060363830252660056L, se.yabs.aichallenge.battleship.Ship._TYPE_IDS, "se.yabs.aichallenge.battleship.Ship", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.Ship(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_battleship_Segment = new ClassRegistryEntry(9066045619354066259L, se.yabs.aichallenge.battleship.Segment._TYPE_IDS, "se.yabs.aichallenge.battleship.Segment", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.Segment(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_battleship_Map = new ClassRegistryEntry(6892640198302983990L, se.yabs.aichallenge.battleship.Map._TYPE_IDS, "se.yabs.aichallenge.battleship.Map", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.Map(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_battleship_Player = new ClassRegistryEntry(5600893473471973514L, se.yabs.aichallenge.battleship.Player._TYPE_IDS, "se.yabs.aichallenge.battleship.Player", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.Player(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_battleship_Game = new ClassRegistryEntry(695257525138239013L, se.yabs.aichallenge.battleship.Game._TYPE_IDS, "se.yabs.aichallenge.battleship.Game", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.Game(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_battleship_Vec2 = new ClassRegistryEntry(5114268100851014382L, se.yabs.aichallenge.battleship.Vec2._TYPE_IDS, "se.yabs.aichallenge.battleship.Vec2", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.Vec2(); } });
	public static ClassRegistryEntry se_yabs_aichallenge_battleship_Shot = new ClassRegistryEntry(5723027387374372704L, se.yabs.aichallenge.battleship.Shot._TYPE_IDS, "se.yabs.aichallenge.battleship.Shot", new Ctor() { public MGenBase create() { return new se.yabs.aichallenge.battleship.Shot(); } });

	public ClassRegistry() {
		add(se_yabs_aichallenge_battleship_Ship);
		add(se_yabs_aichallenge_battleship_Segment);
		add(se_yabs_aichallenge_battleship_Map);
		add(se_yabs_aichallenge_battleship_Player);
		add(se_yabs_aichallenge_battleship_Game);
		add(se_yabs_aichallenge_battleship_Vec2);
		add(se_yabs_aichallenge_battleship_Shot);
	}

	@Override
	public ClassRegistryEntry getByTypeIds16Bit(final short[] ids) {
		int i = 0;
		switch((i < ids.length ? (int)ids[i++] : 0xFFFFFFFF)) {
			case se.yabs.aichallenge.battleship.Ship._TYPE_ID_16BIT:
				return se_yabs_aichallenge_battleship_Ship;
			case se.yabs.aichallenge.battleship.Segment._TYPE_ID_16BIT:
				return se_yabs_aichallenge_battleship_Segment;
			case se.yabs.aichallenge.battleship.Map._TYPE_ID_16BIT:
				return se_yabs_aichallenge_battleship_Map;
			case se.yabs.aichallenge.battleship.Player._TYPE_ID_16BIT:
				return se_yabs_aichallenge_battleship_Player;
			case se.yabs.aichallenge.battleship.Game._TYPE_ID_16BIT:
				return se_yabs_aichallenge_battleship_Game;
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
			case se.yabs.aichallenge.battleship.Ship._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_Ship;
			case se.yabs.aichallenge.battleship.Segment._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_Segment;
			case se.yabs.aichallenge.battleship.Map._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_Map;
			case se.yabs.aichallenge.battleship.Player._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_Player;
			case se.yabs.aichallenge.battleship.Game._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_Game;
			case se.yabs.aichallenge.battleship.Vec2._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_Vec2;
			case se.yabs.aichallenge.battleship.Shot._TYPE_ID_16BIT_BASE64:
				return se_yabs_aichallenge_battleship_Shot;
			default:
				return null;
		}
	}

}
