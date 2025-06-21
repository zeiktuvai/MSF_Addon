params [["_code", {}, [{}]], ["_args", [], [[]]],["_obj", objNull, [objNull]]];

_args params ["_unit", "_type"];

if ([_obj] call MSF_Logi_fnc_CheckAvailablePoints) then {
	call _code;

	private _cost = ([_type] call MSF_Logi_fnc_GetLogiInventory) # 4;
	private _points = [_obj] call ace_rearm_fnc_getSupplyCount;
	[_obj, _points - _cost] call ace_rearm_fnc_setSupplyCount;
};

		//private _logiPoints = ((missionNamespace getVariable "MSF") get "Logi_Points");
		//["MSF", "Logi_Points", _logiPoints - MSF_Logi_PointsPerVic] call MSF_fnc_SetConfigValue;