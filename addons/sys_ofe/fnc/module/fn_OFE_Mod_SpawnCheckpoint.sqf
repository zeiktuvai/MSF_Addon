params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (missionNamespace getVariable ["MSF_OFE_Init", false]) then {
	private _type = "Checkpoint";
	private _def = ["Location", _type] call MSF_fnc_OFE_GetComposition;
	private _supply = _logic getVariable ["Supplies", true];
	[_logic, _def, _type, [_supply]] call MSF_fnc_OFE_PopulatePosition;
};