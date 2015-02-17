/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-02-16 21:38:45 +0100)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.yabs.aichallenge;

import se.culvertsoft.mgen.javapack.classes.MGenBase;

public class Handler  {

	protected void handleDiscard(MGenBase o) {}

	protected void handleNull(MGenBase o) { handleDiscard(o); }

	protected void handleUnknown(MGenBase o) { handleDiscard(o); }

	protected void handle(se.yabs.aichallenge.Message o) {
		handleDiscard(o);
	}

	protected void handle(se.yabs.aichallenge.GameMessage o) {
		handle((se.yabs.aichallenge.Message)o);
	}

	protected void handle(se.yabs.aichallenge.WelcomeMessage o) {
		handle((se.yabs.aichallenge.Message)o);
	}

	protected void handle(se.yabs.aichallenge.ErrorMessage o) {
		handle((se.yabs.aichallenge.Message)o);
	}

	protected void handle(se.yabs.aichallenge.Checkin o) {
		handle((se.yabs.aichallenge.Message)o);
	}

	protected void handle(se.yabs.aichallenge.PlayGame o) {
		handle((se.yabs.aichallenge.Message)o);
	}

	protected void handle(se.yabs.aichallenge.GameChallengeFound o) {
		handle((se.yabs.aichallenge.Message)o);
	}

	protected void handle(se.yabs.aichallenge.GamePlayed o) {
		handleDiscard(o);
	}

	protected void handle(se.yabs.aichallenge.User o) {
		handleDiscard(o);
	}

	protected void handle(se.yabs.aichallenge.UserDb o) {
		handleDiscard(o);
	}

	protected void handle(se.yabs.aichallenge.battleship.Ship o) {
		handleDiscard(o);
	}

	protected void handle(se.yabs.aichallenge.battleship.Segment o) {
		handleDiscard(o);
	}

	protected void handle(se.yabs.aichallenge.battleship.Player o) {
		handleDiscard(o);
	}

	protected void handle(se.yabs.aichallenge.battleship.GameState o) {
		handleDiscard(o);
	}

	protected void handle(se.yabs.aichallenge.battleship.Vec2 o) {
		handleDiscard(o);
	}

	protected void handle(se.yabs.aichallenge.battleship.Shot o) {
		handleDiscard(o);
	}

	protected void handle(se.yabs.aichallenge.battleship.BattleshipMessage o) {
		handle((se.yabs.aichallenge.GameMessage)o);
	}

	protected void handle(se.yabs.aichallenge.battleship.RequestFromServer o) {
		handle((se.yabs.aichallenge.battleship.BattleshipMessage)o);
	}

	protected void handle(se.yabs.aichallenge.battleship.PlaceShipsRequest o) {
		handle((se.yabs.aichallenge.battleship.RequestFromServer)o);
	}

	protected void handle(se.yabs.aichallenge.battleship.PlaceShips o) {
		handle((se.yabs.aichallenge.battleship.BattleshipMessage)o);
	}

	protected void handle(se.yabs.aichallenge.battleship.MakeShotRequest o) {
		handle((se.yabs.aichallenge.battleship.RequestFromServer)o);
	}

	protected void handle(se.yabs.aichallenge.battleship.MakeShot o) {
		handle((se.yabs.aichallenge.battleship.BattleshipMessage)o);
	}

	protected void handle(se.yabs.aichallenge.battleship.ShotResult o) {
		handle((se.yabs.aichallenge.battleship.BattleshipMessage)o);
	}

	protected void handle(se.yabs.aichallenge.battleship.GameOver o) {
		handle((se.yabs.aichallenge.battleship.BattleshipMessage)o);
	}

}
