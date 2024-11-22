params [["_player", objNull, [objNull]], ["_jip", false, [false]]];
private _spawns = allMissionObjects "MSF_Module_RandomSpawn";

//!is3DENPreview &&
if ( count _spawns > 1 && !didJIP) then {
	if (isServer) then
	{
		private _loc = position (selectRandom _spawns);
		missionNamespace setVariable ["MSF_RandomSpawnStart", _loc, true];
	};
	// {
	// 	_x setPos _loc;
	// } forEach allPlayers;
	[player] spawn 
	{
		params ["_player"];	

		private _loc = missionNamespace getVariable "MSF_RandomSpawnStart";
		private _startPos = [_loc, random [5, 7, 10], random 360] call BIS_fnc_relPos;		
		_player setPos _startPos;
	}
};