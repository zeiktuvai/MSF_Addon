params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _type = "Checkpoint";
private _def = ["Location", _type] call MSF_fnc_OFE_GetComposition;
private _side = _logic getVariable ["SpawnSide", 0];
private _spawnSide = _logic getVariable ["ActivationSide", 1];
private _intel = _logic getVariable ["IntelIntegration", true];
private _intelP = _logic getVariable ["IntelProvider", false];
private _interactC = _logic getVariable ["InteractionChance", 0.7];
private _intelC = _logic getVariable ["IntelChance", 0.2];

[_logic, _def, _type, [true], false, [false, [_side] call BIS_fnc_sideType], _intel, [_intelP, _interactC, _intelC], [_spawnSide] call MSF_fnc_GetModuleActivationSide] call MSF_fnc_OFE_PopulatePosition;
