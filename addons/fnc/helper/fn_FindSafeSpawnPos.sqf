private _unit = a;
private _end = false;
private _trigger = aa;
private _position = [];

private _marker = "Land_HelipadEmpty_F" createVehicle ([_trigger] call BIS_fnc_randomPosTrigger);
while {!_end} do {
	private _rand = [_trigger] call BIS_fnc_randomPosTrigger;
	private _pos = _rand findEmptyPosition [5, 40, "B_MBT_01_TUSK_F"];
	_marker setPos _pos;
	if (insideBuilding _marker == 0 && !isOnRoad _marker) then {
		_position = _pos;
		deleteVehicle _marker;
		_end = true;
	};	
};

"VirtualReammoBox_camonet_F" createVehicle _position;

_end = false;
while {!_end} do {
	private _newPos = _position findEmptyPosition [8, 15, "Box_NATO_AmmoVeh_F"];
	if (count _newPos > 0 ) then {
		"Box_NATO_AmmoVeh_F" createVehicle _newPos;
		_end = true;
	}
};

for "_i" from 1 to 5 do {
	_end = false;
	while {!_end} do {
		private _newPos = _position findEmptyPosition [2, 2];
		if (count _newPos > 0) then {
			private _can = "Land_CanisterFuel_Red_F" createVehicle _newPos;
			[_can, 50] call ace_refuel_fnc_makeSource;
			_end = true;
		};
	};
};

_unit setpos _position;
_position;


