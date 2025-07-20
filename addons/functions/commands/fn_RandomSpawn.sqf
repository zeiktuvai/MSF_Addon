params [["_player", objNull, [objNull]], ["_jip", false, [false]]];
private _spawns = allMissionObjects "MSF_Module_RandomSpawn";
private _crash = missionNamespace getVariable ["MSF_Mod_RandomSpawnCrash", false];
private _wrecks = ["Land_Wreck_Plane_Transport_01_F", "Land_UWreck_MV22_F", "Land_Wreck_Ural_F", "Land_Wreck_MBT_04_F", "Land_Wreck_Heli_02_Wreck_01_F", "Land_Wreck_AFV_Wheeled_01_F"];

if (!is3DENPreview && count _spawns > 1 && !didJIP) then {
	if (isServer) then
	{
		private _loc = position (selectRandom _spawns);
		missionNamespace setVariable ["MSF_RandomSpawnStart", _loc, true];
		if (missionNamespace getVariable ["MSF_Mod_RandomSpawnCrash", false]) then {
			private _wreckPos = [_loc, random [15, 20, 25], random 360] call BIS_fnc_relPos;
			private _wreck = selectRandom _wrecks createVehicle _wreckPos;
			[_wreck] spawn
			{
				params ["_wreck"];
				private _fire =	"test_EmptyObjectForFireBig" createVehicle position _wreck;
				sleep 60;
				deleteVehicle _fire;
			};
		};
	};

	[player] spawn 
	{
		params ["_player"];	

		private _loc = missionNamespace getVariable "MSF_RandomSpawnStart";
		private _startPos = [_loc, random [5, 7, 10], random 360] call BIS_fnc_relPos;		
		_player setPos _startPos;
	}
};
