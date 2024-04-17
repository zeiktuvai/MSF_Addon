/*
	Author: zeik_tuvai

	Description:
		Part of MSF Persistence module.  This script is used to iterate through persistence enabled vehicles and apply persisted information based on object type.
        
	Examples:
		[] call MSF_fnc_LoadData;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/
private _vehicleList = vehicles select { _x getVariable "MSF_Persist_isEnable" == true; };
private _prevMiss = format ["MSF_Persist_%1", [(getMissionConfigValue "MSF_Mission_Number") - 1, 0] call BIS_fnc_cutDecimals];
private _data = missionProfileNamespace getVariable [_prevMiss, []];

if (count _data != 0 && count _vehicleList != 0) then
{
	{
		(_x select 0) params ["_vicName", "_vicType", "_dmg", "_inv", "_look", "_ammo", "_fuel", "_isAlive", "_loc", "_aceRefuel", "_aceRearm"];
		private ["_vic"];

		_vic = _vehicleList select { typeOf _x == _vicType && _x getVariable ["PersistenceSet", false] == false } select 0;

		if (!isNil "_vic") then {
			[_vic, _vicType, _inv, _dmg, _look, _ammo, _fuel, _isAlive, _loc, _aceRefuel, _aceRearm] call MSF_fnc_Persist_SetVehicleData;
			_vic setVariable ["PersistenceSet", true];
		};
	} forEach _data;
};

