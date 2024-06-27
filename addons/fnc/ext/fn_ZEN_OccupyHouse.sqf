/*
Part of Infantry Occupy House
by Zenophon

Original Script Documentation

///
Teleports the units to random windows of the building(s) within the distance
Faces units in the right direction and orders them to stand up or crouch on a roof
Units will only fill the building to as many positions as there are windows
Multiple buildings can be filled either evenly or to the limit of each sequentially
Usage : Call, execVM
Params: 1. Array, the building(s) nearest this position is used
        2. Array of objects, the units that will garrison the building(s)
 (opt.) 3. Scalar, radius in which to fill building(s), -1 for only nearest building, (default: -1)
 (opt.) 4. Boolean, true to put units on the roof, false for only inside, (default: false)
 (opt.) 5. Boolean, true to fill all buildings in radius evenly, false for one by one, (default: false)
 (opt.) 6. Boolean, true to fill from the top of the building down, (default: false)

Example:
0 = [getPosATL player, units group X, -1, true, false] execVM "Zen_OccupyHouse.sqf";

You can also compile it into a function if you plan on using it many times:

Zen_OccupyHouse = compileFinal preprocessFileLineNumbers "Zen_OccupyHouse.sqf";
_units = [(getMarkerPos "mkHouse"), [X, Y, Z], 50, false, true] call Zen_OccupyHouse;

When using the compile and call method, the function returns the array of units that did not fit in the building
///

Incorporated into MSF for trigger area spawning.
*/

#define I(X) X = X + 1;
#define EVAL(X) (X call _comparator)
#define EYE_HEIGHT 1.53
#define CHECK_DISTANCE 5
#define FOV_ANGLE 10
#define ROOF_CHECK 4
#define ROOF_EDGE 2

private ["_center", "_units", "_buildingRadius", "_putOnRoof", "_fillEvenly", "_Zen_ExtendPosition", "_buildingsArray", "_buildingPosArray", "_buildingPositions", "_posArray", "_unitIndex", "_j", "_building", "_posArray", "_randomIndex", "_housePos", "_startAngle", "_i", "_checkPos", "_hitCount", "_isRoof", "_edge", "_k", "_unUsedUnits", "_array", "_sortHeight", "_Zen_InsertionSort", "_Zen_ArrayShuffle"];

_center = _this param [0, [0,0,0], [[]], 3];
_units = _this param [1, [objNull], [[]]];
_buildingRadius = _this param [2, -1, [0]];
_putOnRoof = _this param [3, false, [true]];
_fillEvenly = _this param [4, false, [true]];
_sortHeight = _this param [5, false, [true]];

// Check position is valid.
if (_center isEqualTo [0,0,0]) exitWith {    
    diag_log "Zen_Occupy House Error : Invalid position given.";
    ([])
};

// Check units are passed in.
if ((count _units == 0) || {isNull (_units select 0)}) exitWith {   
    diag_log "Zen_Occupy House Error : No units given.";
    ([])
};

// Get buildings
if (_buildingRadius < 0) then {
    _buildingsArray = [nearestBuilding _center];
} else {
    _buildingsArray0 = nearestObjects [_center, ["house"], _buildingRadius];
    _buildingsArray1 = nearestObjects [_center, ["building"], _buildingRadius];
    _buildingsArray = _buildingsArray0 arrayIntersect _buildingsArray1;
};

// Check buildings returned
if (count _buildingsArray == 0) exitWith {  
    diag_log "Zen_Occupy House Error : No buildings found.";
    ([])
};

// Randomize array
_buildingPosArray = [];
0 = [_buildingsArray] call MSF_fnc_ZEN_ArrayShuffle;

// Get position for all buildings in array
{
    _posArray = [];
    for "_i" from 0 to 1000 do {
        if ((_x buildingPos _i) isEqualTo [0,0,0]) exitWith {};
        _posArray pushBack (_x buildingPos _i);
    };

    _buildingPosArray pushBack _posArray;
} forEach _buildingsArray;

// Set pos array depending on fill from bottom or top option.
if (_sortHeight) then {
    {
        0 = [_x, {-1 * (_this select 2)}] call MSF_fnc_ZEN_InsertionSort;
    } forEach _buildingPosArray;
} else {
    {
        0 = [_x] call MSF_fnc_ZEN_ArrayShuffle;
    } forEach _buildingPosArray;
};

_unitIndex = 0;
for [{_j = 0}, {(_unitIndex < count _units) && {(count _buildingPosArray > 0)}}, {I(_j)}] do {
    scopeName "for";

    _building = _buildingsArray select (_j % (count _buildingsArray));
    _posArray = _buildingPosArray select (_j % (count _buildingPosArray));

    if (count _posArray == 0) then {
        _buildingsArray deleteAt (_j % (count _buildingsArray));
        _buildingPosArray deleteAt (_j % (count _buildingPosArray));
    };

    while {(count _posArray) > 0} do {
        scopeName "while";
        if (_unitIndex >= count _units) exitWith {};

        _housePos = _posArray select 0;
        _posArray deleteAt 0;
        _housePos = [(_housePos select 0), (_housePos select 1), (_housePos select 2) + (getTerrainHeightASL _housePos) + EYE_HEIGHT];

        _startAngle = (round random 10) * (round random 36);
        for "_i" from _startAngle to (_startAngle + 350) step 10 do {
            _checkPos = [_housePos, CHECK_DISTANCE, (90 - _i), (_housePos select 2)] call _Zen_ExtendPosition;
            if !(lineIntersects [_checkPos, [_checkPos select 0, _checkPos select 1, (_checkPos select 2) + 25], objNull, objNull]) then {
                if !(lineIntersects [_housePos, _checkPos, objNull, objNull]) then {
                    _checkPos = [_housePos, CHECK_DISTANCE, (90 - _i), (_housePos select 2) + (CHECK_DISTANCE * tan FOV_ANGLE)] call _Zen_ExtendPosition;
                    if !(lineIntersects [_housePos, _checkPos, objNull, objNull]) then {
                        _hitCount = 0;
                        for "_k" from 30 to 360 step 30 do {
                            _checkPos = [_housePos, 20, (90 - _k), (_housePos select 2)] call _Zen_ExtendPosition;
                            if (lineIntersects [_housePos, _checkPos, objNull, objNull]) then {
                                I(_hitCount)
                            };

                            if (_hitCount >= ROOF_CHECK) exitWith {};
                        };

                        _isRoof = (_hitCount < ROOF_CHECK) && {!(lineIntersects [_housePos, [_housePos select 0, _housePos select 1, (_housePos select 2) + 25], objNull, objNull])};
                        if (!(_isRoof) || {((_isRoof) && {(_putOnRoof)})}) then {
                            if (_isRoof) then {
                                _edge = false;
                                for "_k" from 30 to 360 step 30 do {
                                    _checkPos = [_housePos, ROOF_EDGE, (90 - _k), (_housePos select 2)] call _Zen_ExtendPosition;
                                    _edge = !(lineIntersects [_checkPos, [(_checkPos select 0), (_checkPos select 1), (_checkPos select 2) - EYE_HEIGHT - 1], objNull, objNull]);

                                    if (_edge) exitWith {
                                        _i = _k;
                                    };
                                };
                            };

                            if (!(_isRoof) || {_edge}) then {
                                (_units select _unitIndex) doWatch ([_housePos, CHECK_DISTANCE, (90 - _i), (_housePos select 2) - (getTerrainHeightASL _housePos)] call _Zen_ExtendPosition);

                                (_units select _unitIndex) disableAI "TARGET";
                                (_units select _unitIndex) setPosASL [(_housePos select 0), (_housePos select 1), (_housePos select 2) - EYE_HEIGHT];
                                (_units select _unitIndex) setDir _i;

                                doStop (_units select _unitIndex);
                                (_units select _unitIndex) forceSpeed 0;

                                if (_isRoof) then {
                                    (_units select _unitIndex) setUnitPos "MIDDLE";
                                   (_units select _unitIndex) addEventHandler ["FiredNear",{[(_this select 0),["DOWN","MIDDLE"]] spawn {MSF_fnc_JBOY_UpDown};}];
                                } else {
                                    (_units select _unitIndex) setUnitPos "UP";
                                   (_units select _unitIndex) addEventHandler ["FiredNear",{[(_this select 0),["UP","MIDDLE"]] spawn {MSF_fnc_JBOY_UpDown};}];
                                };

                                I(_unitIndex)
                                if (_fillEvenly) then {
                                    breakTo "for";
                                } else {
                                    breakTo "while";
                                };
                            };
                        };
                    };
                };
            };
        };
    };
};