params [["_units", [], [[]]], "_exist"];

private _men = _exist getOrDefault ["Units", []];
private _vics = _exist getOrDefault ["Vehicles", []];
private _armor = _exist getOrDefault ["Armor", []];
private _air = _exist getOrDefault ["Air", []];
private _turr = _exist getOrDefault ["Turrets", []];

{
	private _cfg = configName configOf _x;
	if (_x isKindOf "Car") then { _vics pushBack _cfg };
	if (_x isKindOf "Tank") then { _armor pushBack _cfg };
	if (_x isKindOf "Man") then { _men pushBack _cfg };
	if (_x isKindOf "StaticWeapon") then { _turr pushBack _cfg };
	if (_x isKindOf "Air") then { _air pushBack _cfg };
} forEach _units;

private _result = createHashMap;
if (count _vics > 0) then { _result set ["Vehicles", _vics arrayIntersect _vics] };
if (count _armor > 0) then { _result set ["Armor", _armor arrayIntersect _armor] };
if (count _air > 0) then { _result set ["Air", _air arrayIntersect _air] };
if (count _turr > 0) then { _result set ["Turrets", _turr arrayIntersect _turr] };
if (count _men > 0) then { _result set ["Units", _men arrayIntersect _men] };

_result;
