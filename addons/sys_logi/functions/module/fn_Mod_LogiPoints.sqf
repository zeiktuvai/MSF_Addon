params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

if (_activated) then {
	private _act =  _logic getVariable ["Action", 0];
	private _count = _logic getVariable ["LogiPoints", 3];
	private _side = [_logic getVariable ["Side", 1]] call BIS_fnc_sideType;
	private _guard = if (typeName _act == "STRING") then { parseNumber _act } else { _act };
	private _action = [true, false] select (_guard == 0);

	waitUntil {!((missionNamespace getVariable "MSF") isNil "Logi_Points")};
	[_count, _action, _side] call MSF_Logi_fnc_UpdateLogiPoints;
};
