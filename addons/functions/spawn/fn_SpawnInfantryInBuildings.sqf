params [["_unitTypes", [], [[]]], ["_objects", [], [[]]], ["_side", east, [east]], ["_fillP", 0.5, [0]]];

private _units = [];

{
	private _exempt = nearestObjects [_x, ["MSF_Placeholder_BldgSpawnExempt"], sizeOf (typeOf _x)];

	if (_exempt isNotEqualTo []) then {
		private _group = createGroup [_side, true];
		_group setCombatMode "WHITE";
		_group setBehaviourStrong "SAFE";
		
		private _spots = _x buildingPos -1;
		private _count = round ((count _spots) * _fillP);

		for "_i" from 1 to _count do {
			private _spot = selectRandom _spots;
			_group createUnit [(selectRandom _unitTypes), _spot, [], 0, "NONE"];
			_spots deleteAt (_spots find _spot);
		};

		units _group apply { _x disableAI "path"; };
		_units append (units _group);
	};
} forEach (_objects select {_x isKindOf "Building"});

_units;
