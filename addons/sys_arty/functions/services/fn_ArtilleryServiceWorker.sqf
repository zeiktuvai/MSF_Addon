params [["_logic", objNull, [objNull]]];

private _center = _logic getVariable ["MSF_tArty_Center", []];
private _units = _logic getVariable ["MSF_tArty_Units", []];
private _groups = _units apply { group _x } arrayIntersect groups west;

{
	private _leader = leader _x;
	private _leaderPos = position _leader;
	private _locPos = _logic getVariable [format ["Pos_%1", _x], _leaderPos];

	if (isNil {_logic getVariable format ["Pos_%1", _x]}) then {_logic setVariable [format ["Pos_%1", _x], _leaderPos];};

	if (_leaderPos inArea [_locPos, 50, 50, 0, false]) then {
		private _zero = [_logic, str _x] call MSF_Arty_fnc_GetArtilleryZero;
		
		[_locPos, _zero, position _center] call MSF_Arty_fnc_CallTrackingArtillery;
		systemChat format ["pos: %1, zero: %2, center: %3", _locPos, _zero, position _center];
	}
	else
	{
		[_logic, str _x, false] call MSF_Arty_fnc_GetArtilleryZero;
		_logic setVariable [format ["Pos_%1", _x], _leaderPos];
		systemChat "Outside Circle";
	};
	systemChat format ["leader: %1 loc: %2, zero: %3", _leaderPos, _locPos, _logic getVariable [format ["Zero_%1", _x], 0]];
} forEach _groups;

// Should skip first iteration.
//private _closeUnits = _leader nearObjects 50 select { _x isKindOf "man" && side _x == side player};

