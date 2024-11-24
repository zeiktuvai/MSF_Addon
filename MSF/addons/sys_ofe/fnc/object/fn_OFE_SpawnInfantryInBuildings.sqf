params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], "_group"];

private _spots = [];
private _str = 1 - ([] call MSF_fnc_OFE_CalculateStrengthValues select 2);

{
	_spots append (_x buildingPos -1);
} forEach (_objects select {_x isKindOf "House_F"});

private _count = round ((count _spots) * _str);

for "_i" from 1 to _count do {
	private _spot = selectRandom _spots;
	_group createUnit [(selectRandom _unitTypes), _spot, [], 0, "NONE"];
	_spots deleteAt (_spots find _spot);
};

{
    _x disableAI "path";
} forEach units _group;