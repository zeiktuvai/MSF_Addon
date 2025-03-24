params [["_code", {}, [{}]], ["_args", [], [[]]],["_obj", objNull, [objNull]], ["_infinite", false, [false]]];

if (_infinite) then {
	call _code;
}
else 
{
	if ([_obj] call MSF_Logi_fnc_CheckAvailablePoints) then {
		call _code;

		if (isNull _obj) then {
			private _logiPoints = ((missionNamespace getVariable "MSF") get "Logi_Points");
			["MSF", "Logi_Points", _logiPoints - MSF_Logi_PointsPerVic] call MSF_fnc_SetConfigValue;
		}
		else
		{
			private _points = [_obj] call ace_rearm_fnc_getSupplyCount;
			[_obj, _points - MSF_Logi_CrateCost] call ace_rearm_fnc_setSupplyCount;
		};
	};
};
