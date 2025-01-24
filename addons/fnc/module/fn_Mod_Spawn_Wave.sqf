params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _position = position _logic;
private _area = _logic getVariable ["objectArea", [0,0,0,false,-1]];
private _isRectangle = (_logic getVariable ["objectArea", [0,0,0,false]]) select 3;
private _height = _area select 4;
private _activationSide = _logic getVariable ["ActivationSide", 1];
private _side = _logic getVariable ["Side", 0];

private _waveNum = _logic getVariable ["WaveNum", 2];
private _waveInterval = _logic getVariable ["WaveInterval", 300];
private _infNum = _logic getVariable ["InfantryNum", 0];
private _vicNum = _logic getVariable ["VehicleNum", 0];
private _armorNum = _logic getVariable ["ArmorNum", 0];
private _airNum = _logic getVariable ["AirNum", 0];
private _vicFill = _logic getVariable ["VicFillProb", 0];

[_area select 0, _area select 1, _height, _position, [[_activationSide] call MSF_fnc_GetModuleActivationSide, "PRESENT"], ["this",
	"[thisTrigger] spawn { params [""_trigger""]; [_trigger] call MSF_fnc_CreateWaveDefenseArea; }; ",
	""],
	_isRectangle, false, false,
	[[_side] call BIS_fnc_sideType, _waveNum, _waveInterval, _infNum, _vicNum, _armorNum, _airNum, _vicFill],
	false
] call MSF_fnc_CreateActivationTrigger;