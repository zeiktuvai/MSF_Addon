params [["_trigger", objNull, [objNull]], ["_str", 0.5, [0]], ["_side", east, [east]], ["_unitTypes", [], [[]]], 
["_bldgProb", 1, [1]], ["_logicArea", [], [[]]]];

private _x = _logicArea select 0;
private _y = _logicArea select 1;
private _radius = [_x, _y] select (_x <= _y);
private _bldgs = nearestObjects [getPosATL _trigger, ["Building"], _radius];
private _buildings = [];
private _allObjs = [];
private _spots = 0;

{
	_spots = _spots + count (_x buildingPos -1);
} forEach _bldgs;

{
	if ([_bldgProb] call MSF_fnc_CalculateProbability) then {
		_buildings pushBack _x;
	};
} forEach _bldgs;

if (_spots > 0) then {
	_allObjs = [_unitTypes, _bldgs, _side, _str] call MSF_fnc_SpawnInfantryInBuildings;
};

if (getMissionConfigValue ["MSF_Mission_Zeus", true]) then {
	{ _x addCuratorEditableObjects [_allObjs, true]} forEach allCurators;
};

_allObjs;
