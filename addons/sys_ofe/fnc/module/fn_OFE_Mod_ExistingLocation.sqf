params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (missionNamespace getVariable ["MSF_OFE_Init", false]) then {
	private _type = _logic getVariable ["Type", "Outpost"];
	private _supply = _logic getVariable ["Supplies", true];
	private _vic = _logic getVariable ["Vehicle", true];
	private _vicChance = _logic getVariable ["Probability", 1];
	private _size = [_logic, false] call MSF_fnc_GetAreaRadius;;

	private _objs = nearestObjects [position _logic, ["MSF_Placeholder"], _size];
	_objs append (nearestObjects [position _logic, ["House_F"], _size]);
	[_logic, _objs, _type, [_vic, _vicChance, _supply], true] call MSF_fnc_OFE_PopulatePosition;
};