params [["_vic", objNull, [objNull]], ["_center", [0,0,0]]];

private _dirPlaceholders = nearestObjects [_vic, ["MSF_Placeholder_Direction"], 5];

if (_dirPlaceholders isNotEqualTo []) then {
	private _dir = _vic getRelDir (_dirPlaceholders select 0);	
	_vic setDir (getDir _vic + _dir);		
}
else
{
	private _dir = _vic getRelDir _center;
	_vic setDir (getDir _vic + _dir - 180);
};
