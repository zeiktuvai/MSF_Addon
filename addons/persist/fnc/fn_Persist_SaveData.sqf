/*
	Author: zeik_tuvai

	Description:
		Part of MSF Persistence module.  This script is used to save persistence data to the Mission Profile Namespace.
        
	Examples:
		[] call MSF_fnc_SaveData;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/
if (isServer) then
{
	private _vehicleList = ["MSF_Persist_isEnable"]  call MSF_fnc_GetVehiclesByProperty;
	private _data = [];
	
	{
		_x params ["_vic"];

		_data pushBack [[_vic] call MSF_fnc_Persist_GetVehicleData];
	} forEach _vehicleList;

	missionProfileNamespace setVariable [format ["MSF_Persist_%1", [getMissionConfigValue ["MSF_Mission_Number", 1], 1] call BIS_fnc_cutDecimals], _data];
	saveMissionProfileNamespace;
};