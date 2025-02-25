params [["_level", 1, [1]]];

if (_level < 1) then { _level = 1; };
if (_level > 4) then { _level = 4; };

["MSF", "IntelLevel", _level] call MSF_fnc_SetConfigValue;