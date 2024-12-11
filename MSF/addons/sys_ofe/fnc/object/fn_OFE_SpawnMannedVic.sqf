params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], "_side", "_center"];

if (count _objects > 0) then {
	private _vics = [];
	private _str = 1 - ([] call MSF_fnc_OFE_CalculateStrengthValues select 2);

	{
		if ([_str] call MSF_fnc_GetSpawnChance) then {
			private _vic = [position _x , 0, selectRandom _unitTypes, _side] call BIS_fnc_spawnVehicle;
			_vics pushBack (_vic select 0);		
		};
	} forEach _objects;

	{
		private _dirPlaceholders = nearestObjects [_x, ["MSF_Placeholder_Direction"], 2.5];

		if (count _dirPlaceholders > 0) then {
			private _dir = _x getRelDir (_dirPlaceholders select 0);
			_x setDir (getDir _x + _dir);
		} else {
			private _dir = _x getRelDir _center;
			_x setDir (getDir _x + _dir - 180);
		};

	} forEach _vics;	
};
