params [["_code", {}, [{}]], ["_args", [], [[]]],["_obj", objNull, [objNull]]];

_args params ["_unit", "_type"];

private _cost = [([_type] call MSF_Logi_fnc_GetLogiInventory) # 4] call MSF_Logi_fnc_CalculateItemCost;

if ([_obj, _cost] call MSF_Logi_fnc_CheckAvailablePoints) then {
	call _code;

	private _points = [_obj] call ace_rearm_fnc_getSupplyCount;
	[_obj, _points - _cost] call ace_rearm_fnc_setSupplyCount;
};

		//private _logiPoints = ((missionNamespace getVariable "MSF") get "Logi_Points");
		//["MSF", "Logi_Points", _logiPoints - MSF_Logi_PointsPerVic] call MSF_fnc_SetConfigValue;