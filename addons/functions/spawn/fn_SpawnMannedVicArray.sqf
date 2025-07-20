params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], ["_side", east, [east]], ["_center", [], [[]]]];

if (count _objects > 0) then {
	private _vics = [];

	{
		private _vic = [position _x , 0, selectRandom _unitTypes, _side] call BIS_fnc_spawnVehicle;
		_vics pushBack (_vic select 0);	
	} forEach _objects;

	if (count _center > 0) then {
		{
			[_x, _center] call MSF_Loc_fnc_SetObjectDir;
		} forEach _vics;
	};
};
