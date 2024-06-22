/*
	Author: zeik_tuvai

	Description:
		This MSF function adds an event handler to each configured vehicle to reduce damage dealt by a certain percent.
	
	Examples:
		[] call MSF_fnc_ApplyDamageReduction;

	Function Ver 1.1
	Implemented in: MSF Addon v1.5.1
*/

private _vics = ["MSF_General_DmgReduction", 0] call MSF_fnc_GetVehiclesByPropertyValue;

if (isServer) then {
	{
		private _dmg = _x getVariable "MSF_General_DmgReduction";
		_x setVariable ["MSF_General_DmgReduction", _dmg, true]
	} forEach _vics;
};

[_vics] call MSF_fnc_SetVehicleDamageReduction;

