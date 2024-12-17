params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (missionNamespace getVariable ["MSF_OFE_Init", false]) then {
	private _def = [] call MSF_fnc_OFE_GetCheckpointComposition;
	private _supply = _logic getVariable ["Supplies", true];

	[_logic, _def, 0, [_supply]] call MSF_fnc_OFE_PopulatePosition;
};