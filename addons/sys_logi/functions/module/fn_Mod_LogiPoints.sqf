params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (_activated) then {
	private _action = _logic getVariable ["Action", 0] != 0;
	private _count = _logic getVariable ["LogiPoints", 3];
	private _side = [_logic getVariable ["Side", 1]] call BIS_fnc_sideType;

	waitUntil {!((missionNamespace getVariable "MSF") isNil "Logi_Points")};
	[_count, _action, _side] call MSF_Logi_fnc_UpdateLogiPoints;
};
