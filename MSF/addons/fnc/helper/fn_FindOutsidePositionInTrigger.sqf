/*
	Author: zeik_tuvai

	Description:
		Find a valid, safe position outside a building and not on a road.
    	
	Function Ver 1.0
	Implemented in: MSF Addon v2.1.0
*/
params [["_trigger", objNull, [objNull]]];

private _end = false;
private _marker = "Land_HelipadEmpty_F" createVehicle ([_trigger] call BIS_fnc_randomPosTrigger);
private _position = [];

while {!_end} do {
	private _randomPos = [_trigger] call BIS_fnc_randomPosTrigger;
	private _pos = _randomPos findEmptyPosition [5, 40, "B_MBT_01_TUSK_F"];
	_marker setPos _pos;
	if (insideBuilding _marker == 0 && !isOnRoad _marker) then {
		_position = _pos;
		deleteVehicle _marker;	
		_end = true;
	};	
};

_position;