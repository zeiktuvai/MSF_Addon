params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _type = "Checkpoint";
private _def = ["Location", _type] call MSF_Loc_fnc_GetComposition;
private _side = _logic getVariable ["SpawnSide", 0];
private _spawnSide = [_logic getVariable ["ActivationSide", 1]] call MSF_fnc_GetModuleActivationSide;
private _intel = _logic getVariable ["IntelIntegration", true];
private _intelP = _logic getVariable ["IntelProvider", false];
private _interactC = _logic getVariable ["InteractionChance", 0.7];
private _intelC = _logic getVariable ["IntelChance", 0.2];
private _marker = true;

[_logic, _def, _type, [true, 0.5, true], false, [_side] call BIS_fnc_sideType, _spawnSide, _intel, [_intelP, _interactC, _intelC], 500, _marker] call MSF_Loc_fnc_InitLocation;

