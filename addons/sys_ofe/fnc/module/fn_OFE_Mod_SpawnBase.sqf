params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _type = "Base";

if (missionNamespace getVariable ["MSF_OFE_Init", false]) then {
	private _def = ["Location", _type] call MSF_fnc_OFE_GetComposition;	
	private _supply = _logic getVariable ["Supplies", true];
	private _vic = _logic getVariable ["Vehicle", true];
	private _vicChance = _logic getVariable ["Probability", 1];
	private _allObjs = [_logic, _def, _type, [_vic, _vicChance, _supply]] call MSF_fnc_OFE_PopulatePosition;
};