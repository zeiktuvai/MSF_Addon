    params [["_side", west, [west]]];

	getArray (configFile >> "MSF_Logi_Config" >> "Supports" >> [_side] call BIS_fnc_sideNameUnlocalized);
