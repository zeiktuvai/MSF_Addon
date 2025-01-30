private _isIntel = false;

if (count ("MSF_Module_IntelObjects" allObjects 1) > 0 || count ("MSF_Module_Spawn_DeadUnit" allObjects 1 select { _x getVariable "IntelProvider" == true}) > 0) then {
	_isIntel = true;
};

_isIntel;