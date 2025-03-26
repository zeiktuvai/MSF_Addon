params [["_units", [], [[]]], ["_trigger", objNull, [objNull]]];

private _vics = _units select { _x isKindOf "LandVehicle" || _x isKindOf "Air"};

{
	if (!(_x inArea _trigger)) then {
		_units deleteAt (_units find _x);
	};
} forEach _vics;

_units;