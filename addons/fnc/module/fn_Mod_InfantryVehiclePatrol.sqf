params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _isVic = typeOf _logic == "MSF_Module_Spawn_VehiclePatrol";

private _position = position _logic;
private _combatMode = _logic getVariable ["CombatMode", "RED"];
private _behavior = _logic getVariable ["Behavior", "AWARE"];
private _speed = _logic getVariable ["Speed", "NORMAL"];
private _spawnCount = _logic getVariable ["SpawnCount", false];
private _activation = _logic getVariable ["Activation", "WEST"];
private _activationType = _logic getVariable ["ActivationType", "present"];
private _side = _logic getVariable ["Side", 0];
private _area = _logic getVariable ["objectArea", [0,0,0,false,-1]];
private _despawn = _logic getVariable ["Despawn", false];
private _isRectangle = (_logic getVariable ["objectArea", [0,0,0,false]]) select 3;
private _height = _area select 4;

if (!_isVic) then {
	if(_area select 0 > 100 && _area select 1 > 100) then 
	{		
		[_area select 0, _area select 1, _height, _position, [_activation, _activationType], ["this",
			"[thisTrigger] spawn { params [""_trigger""]; [_trigger] call MSF_fnc_CreateAreaInfantryPatrol;}; ",
			"[thisTrigger] call MSF_fnc_DeleteAreaInfantryPatrol;"],
			_isRectangle, false, _despawn,
			[_side, 8, _combatMode, _behavior, _speed, _spawnCount, _despawn]
		] call MSF_fnc_CreateActivationTrigger;	
	};
}
else {
	if(_area select 0 > 500 && _area select 1 > 500) then 
	{		
		[_area select 0, _area select 1, _height, _position, [_activation, _activationType], ["this",
			"[thisTrigger] spawn { params [""_trigger""]; [_trigger] call MSF_fnc_CreateAreaVehiclePatrol; }; ",
			""],
			_isRectangle, false, false,
			[_side, 10, _combatMode, _behavior, _speed, _spawnCount]
		] call MSF_fnc_CreateActivationTrigger;	
	};
};
