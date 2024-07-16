/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script is used to set vehicle respawn modules expression field.
        
	Examples:
		[] call MSF_fnc_RespawnVehicleCustomization;

	Function Ver 1.0
	Implemented in: MSF Addon v2.0.1
*/
if(isServer) then {
	{
		_x setVariable ["init",	
		"private _newVic = _this select 0; private _oldVic = _this select 1; [_oldVic, [_newVic, ""MSF_Vic_Cust""]] call BIS_fnc_saveVehicle;  [_newVic, [_newVic, ""MSF_Vic_Cust""]] call BIS_fnc_loadVehicle;"
		];
	} forEach allMissionObjects "ModuleRespawnVehicle_F";
};
