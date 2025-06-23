params [["_obj", objNull, [objNull]], ["_cost", 0, [0]]];

[false, true] select ([_obj] call ace_rearm_fnc_getSupplyCount >= _cost);
