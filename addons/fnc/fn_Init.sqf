/*
	Author: zeik_tuvai

	Description:
		This is the entry point script for enabling MSF functions that interact with player objects using InitPlayerLocal.sqf
        
	Examples:
		[] call MSF_fnc_Init;

	Function Ver 1.0
	Implemented in: MSF Addon v1.0
*/

params ["_unit"];

//[_unit] call MSF_fnc_InitializeLoadouts;
[_unit] call MSF_fnc_ConfigRespawnOnPlayer;
[_unit] call MSF_fnc_JIPSpawnNearPlayer;
[] call MSF_fnc_ApplyDamageReduction;

// [_unit, configfile >> "CfgVehicles" >> "TFY_Marksman"] call BIS_fnc_loadInventory;
// [configfile >> "CfgVehicles" >> "TFY_Marksman"]


if (getMissionConfigValue ["MSF_Loadout_UnitPatch", true]) then {
	waitUntil { time > 1};

	[_unit, ""] call BIS_fnc_setUnitInsignia;
	[_unit, "tfy_insignia"] call BIS_fnc_setUnitInsignia;
}