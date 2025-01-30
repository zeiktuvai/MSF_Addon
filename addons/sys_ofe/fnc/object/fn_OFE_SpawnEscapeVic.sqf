params [["_vicTypes", [], [[]]], ["_objects", [], [[]]]];

private _multi = count _objects > 1;
private _spawned = false;

{
	private _ex = true;

	if (_spawned) then {
		_ex = [0.5] call MSF_fnc_CalculateProbability;
	};

	if (_ex) then {
		private _pos = position _x;
		_pos set [2, 2];
		private _vic = selectRandom _vicTypes createVehicle _pos;
		[_vic] call MSF_fnc_OFE_SetSpawnDir;

		_vic setVehicleAmmo 0;
		_vic setDamage random [0, 0.25, 0.5];
		_vic setFuel random [0, 0.25, 0.50];
		_spawned = true;
	};
} forEach _objects;


