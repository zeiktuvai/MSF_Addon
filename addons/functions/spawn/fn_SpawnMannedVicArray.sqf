params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], ["_side", east, [east]], ["_center", [], [[]]]];

if (_objects isNotEqualTo []) then {
	private _vics = [];

	{
		private _vic = [position _x , direction _x, selectRandom _unitTypes, _side] call BIS_fnc_spawnVehicle;
		_vics pushBack (_vic select 0);	
	} forEach _objects;
};
