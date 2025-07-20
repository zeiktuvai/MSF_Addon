params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

[] call MSF_Intel_fnc_GetIsIntelEnabled;

private _interactC = _logic getVariable ["InteractionChance", 0.5];
private _intelC = _logic getVariable ["IntelChance", 0.6];
private _objects = _units select { _x isKindOf "ThingX"};
_objects append _units select { _x isKindOf "Man"};

{
	if ([_interactC] call MSF_fnc_CalculateProbability) then {
		[_x, _intelC] call MSF_Intel_fnc_AddIntelInteraction;
	};
} forEach _objects;
