params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], "_side", "_center"];

if (count _objects > 0) then {
	private _vics = [];
	private _str = 1 - ([] call MSF_fnc_OFE_CalculateStrengthValues select 2);

	{
		if ([_str] call MSF_fnc_CalculateProbability) then {
			private _vic = [position _x , 0, selectRandom _unitTypes, _side] call BIS_fnc_spawnVehicle;
			_vics pushBack (_vic select 0);		
		};
	} forEach _objects;

	{
		[_x, _center] call MSF_fnc_OFE_SetSpawnDir;
	} forEach _vics;	
};
