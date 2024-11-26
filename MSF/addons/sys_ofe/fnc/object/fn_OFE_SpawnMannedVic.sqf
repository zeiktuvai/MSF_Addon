params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], "_side", "_center"];

private _vics = [];

{
	private _vic = [position _x , 0, selectRandom _unitTypes, _side] call BIS_fnc_spawnVehicle;
	_vics pushBack (_vic select 0);
} forEach _objects;

{
	private _dir = _x getRelDir _center;
	_x setDir (getDir _x + _dir - 180);
} forEach _vics;
