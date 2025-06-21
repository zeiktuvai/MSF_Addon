params [["_obj", objNull, [objNull]]];

[false, true] select ([_obj] call ace_rearm_fnc_getSupplyCount >= MSF_Logi_CrateCost);
