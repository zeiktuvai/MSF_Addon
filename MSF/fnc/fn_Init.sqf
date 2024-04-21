/*
	Author: zeik_tuvai

	Description:
		
        
	Examples:
		[] call MSF_fnc_Init;

	Function Ver 1.0
	Implemented in: MSF Addon v1.0
*/

params ["_unit"];

[_unit] call MSF_fnc_InitializeLoadouts;
[_unit] call MSF_fnc_ConfigRespawnOnPlayer;
//JOP here because this gets called in initplayerlocal