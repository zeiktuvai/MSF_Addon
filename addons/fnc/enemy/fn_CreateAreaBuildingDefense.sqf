/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script creates a number of units and sets them to occupy buildings.
        
	Examples:
		[Trigger Objct] call MSF_fnc_CreateAreaBuildingDefense;

	Function Ver 1.0
	Implemented in: MSF Addon v1.6.0
*/
params [["_trigger", objNull, [objNull]], ["_str", 0.5, [0]], ["_side", east, [east]], ["_unitTypes", [], [[]]], ["_bldgProb", 1, [1]], ["_logicArea", [], [[]]]];

private _x = _logicArea select 0;
private _y = _logicArea select 1;
private _radius = [_x, _y] select (_x <= _y);
private _bldg0 = nearestObjects [getPosATL _trigger, ["house"], _radius]; 
private _bldg1 = nearestObjects [getPosATL _trigger, ["building"], _radius];
private _bldg = _bldg0 arrayIntersect _bldg1;
private _bldgFound = false;
private _allObjs = [];

{
	if ( count (_x buildingPos -1) > 0 ) then { _bldgFound = true; };
} forEach _bldg;

if (_bldgFound) then {
	{
		private _exempt = nearestObjects [_x, ["MSF_Placeholder_BldgSpawnExempt"], sizeOf (typeOf _x)];

		if (count _exempt == 0) then {
			if ([_bldgProb] call MSF_fnc_CalculateProbability) then {
				private _spots = _x buildingPos -1;

				private _count = floor (count _spots * _str);
				private _group = createGroup _side;
				_group setCombatMode "WHITE";
				_group setBehaviourStrong "SAFE";

				for "_i" from 1 to _count do {
					private _spot = selectRandom _spots;
					_group createUnit [(selectRandom _unitTypes), _spot, [], 0, "NONE"];
					_spots deleteAt (_spots find _spot);
				};
				
				units _group apply { _x disableAI "PATH" };
				_allObjs append (units _group);
			};
		};

	} forEach _bldg;
};

_allObjs;