params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (_activated) then {
	private _type = "Checkpoint";
	private _def = ["Location", _type] call MSF_fnc_OFE_GetComposition;
	private _side = _logic getVariable ["SpawnSide", 0];
	private _intel = _logic getVariable ["IntelIntegration", true];

	[_logic, _def, _type, [true], false, [false, [_side] call BIS_fnc_sideType], _intel] call MSF_fnc_OFE_PopulatePosition;
};