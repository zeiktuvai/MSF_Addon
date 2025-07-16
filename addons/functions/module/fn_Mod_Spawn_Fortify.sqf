params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _position = position _logic;
private _area = _logic getVariable ["objectArea", [0,0,0,false,-1]];
private _isRectangle = (_logic getVariable ["objectArea", [0,0,0,false]]) select 3;
private _height = _area select 4;
private _activationSide = _logic getVariable ["ActivationSide", 1];
private _side = _logic getVariable ["Side", 0];

private _onStart = _logic getVariable ["SpawnImmediately", false];
private _building = _logic getVariable ["BuildingEnable", false];
private _bldgStr = _logic getVariable ["BuildingStrength", 0.5];
private _bldgProb = _logic getVariable ["BuildingProbability", 1];
private _vehicle = _logic getVariable ["VehicleEnable", false];
private _vicNum = _logic getVariable ["VehicleNum", 2];
private _vicFill = _logic getVariable ["VicFillPercentage", 0];
private _vicProb = _logic getVariable ["VehicleProbability", 1];
private _armor = _logic getVariable ["ArmorEnable", false];
private _armorNum = _logic getVariable ["ArmorNum", 2];
private _armorProb = _logic getVariable ["ArmorProbability", 1];
private _static = _logic getVariable ["StaticEnable", false];
private _staticNum = _logic getVariable ["StaticNum", 2];
private _staticProb = _logic getVariable ["StaticProbability", 5];
private _air = _logic getVariable ["AirEnable", false];
private _airNum = _logic getVariable ["AirNum", 2];
private _airProb = _logic getVariable ["AirProbability", 5];
private _intelP = _logic getVariable ["IntelProvider", false];
private _interactC = _logic getVariable ["InteractionChance", 0.5];
private _intelC = _logic getVariable ["IntelChance", 0.1];

[_units, false] call MSF_fnc_ShowHideObjects;

[_area select 0, _area select 1, _height, _position, [[_activationSide] call MSF_fnc_GetModuleActivationSide, "present"], ["this",
	"[thisTrigger] spawn { params [""_trigger""]; [_trigger] call MSF_fnc_FortifyArea; }; ",
	""],
	_isRectangle, _onStart, false,
	[[_side] call BIS_fnc_sideType, _building, _bldgStr, _bldgProb, _vehicle, _vicNum, _vicFill, _vicProb, _armor, _armorNum, _armorProb, _static, _staticNum, _staticProb, _air, _airNum, _airProb, _area, [_intelP, _interactC, _intelC], _units],
	true
] call MSF_fnc_CreateActivationTrigger;	
