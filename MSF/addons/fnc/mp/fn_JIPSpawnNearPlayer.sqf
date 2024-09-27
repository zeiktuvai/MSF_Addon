/*
	Author: zeik_tuvai

	Description: This script allows players that join after the start of the mission to spawn near other players instead of the start.		
        
	Examples:
		[] call MSF_fnc_JIPSpawnNearPlayer;

	Function Ver 1.0
	Implemented in: MSF Addon v1.0
*/
params [["_player", objNull, [objNull]], ["_jip", false, [false]]];

if (getMissionConfigValue ["MSF_Multi_JnP", false] && _jip) then 
{
	[_player] spawn 
	{
		params ["_player"];
		private _unit = (playableUnits select { _x != player }) call BIS_fnc_selectRandom;
		private _startPos = [getPos _unit, random [25, 0, 100], random 360] call BIS_fnc_relPos;		
		
		_player setPos _startPos;
	}
};
