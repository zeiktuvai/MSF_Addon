params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], ["_side", east, [east]], ["_fillP", 0.5, [0]]];

private _spots = [];
private _group = createGroup [_side, true];

{
	private _exempt = nearestObjects [_x, ["MSF_Placeholder_BldgSpawnExempt"], sizeOf (typeOf _x)];

	if (count _exempt == 0) then {
		_spots append (_x buildingPos -1);
	};
} forEach (_objects select {_x isKindOf "House_F"});

private _count = round ((count _spots) * _fillP);

for "_i" from 1 to _count do {
	private _spot = selectRandom _spots;
	_group createUnit [(selectRandom _unitTypes), _spot, [], 0, "NONE"];
	_spots deleteAt (_spots find _spot);
};

{ _x disableAI "path"; } forEach units _group;

units _group;
