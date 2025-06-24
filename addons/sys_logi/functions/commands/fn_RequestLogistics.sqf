params [["_code", {}, [{}]], ["_args", [], [[]]],["_obj", objNull, [objNull]],["_supportReq", false, [false]]];

if !(_supportReq) then {
	_args params ["_type"];

	private _item = [_type] call MSF_Logi_fnc_GetLogiInventory;
	private _cost = [(_item # 4)] call MSF_Logi_fnc_CalculateItemCost;

	if ([_obj, _cost] call MSF_Logi_fnc_CheckAvailablePoints) then {
		call _code;

		systemChat format ["%1 delivered to supply point.", (_item # 0)];
		private _points = [_obj] call ace_rearm_fnc_getSupplyCount;
		[_obj, _points - _cost] call ace_rearm_fnc_setSupplyCount;
	};
}
else {
	_args params ["_item", "_pos"];

	private _cost = [(_item # 4)] call MSF_Logi_fnc_CalculateItemCost;
	private _logiPoints = ((missionNamespace getVariable "MSF") get "Logi_Points");

	if (_logiPoints > _cost) then {
		["MSF", "Logi_Points", _logiPoints - _cost] call MSF_fnc_SetConfigValue;
		
		call _code;
	}
	else
	{
		systemChat "Available logistics insufficient for submitted request.";
	};
};


