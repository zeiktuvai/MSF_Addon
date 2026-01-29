params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], ["_side", east, [east]], ["_center", [], [[]]]];

if (_objects isNotEqualTo []) then {
	private _vics = [];

	{
		private _vic = [position _x , 0, selectRandom _unitTypes, _side] call BIS_fnc_spawnVehicle;
		_vics pushBack (_vic select 0);	
	} forEach _objects;

	if (_center isNotEqualTo []) then {
		{
			[_x, _center] call MSF_Loc_fnc_SetObjectDir;
		} forEach _vics;
	};
};
