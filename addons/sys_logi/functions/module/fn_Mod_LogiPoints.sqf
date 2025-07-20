params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (_activated) then {
	private _action = _logic getVariable ["Action", false];
	private _count = _logic getVariable ["LogiPoints", 3];

	waitUntil {!((missionNamespace getVariable "MSF") isNil "Logi_Points")};
	[_count, _action] call MSF_Logi_fnc_UpdateLogiPoints;
};
