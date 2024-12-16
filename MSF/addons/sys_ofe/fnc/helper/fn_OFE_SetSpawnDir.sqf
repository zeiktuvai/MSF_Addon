params [["_vic", objNull, [objNull]]];

private _dirPlaceholders = nearestObjects [_vic, ["MSF_Placeholder_Direction"], 2.5];

if (count _dirPlaceholders > 0) then {
	private _dir = _vic getRelDir (_dirPlaceholders select 0);	
	_vic setDir (getDir _vic + _dir);		
};