private _isIntel = false;

if (("MSF_Module_IntelObjects" allObjects 1) isNotEqualTo [] || ("MSF_Module_Spawn_DeadUnit" allObjects 1) select { _x getVariable "IntelProvider" == true} isNotEqualTo []) then {
	_isIntel = true;
};

["MSF", "IntelEnabled", _isIntel] call MSF_fnc_SetConfigValue;

_isIntel;
