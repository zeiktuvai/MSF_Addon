private _spawns = allMissionObjects "MSF_Module_RandomSpawn";

if (count _spawns > 1) then {
	private _loc = position (selectRandom _spawns);
	{
		_x setPos _loc;
	} forEach allPlayers;	
};