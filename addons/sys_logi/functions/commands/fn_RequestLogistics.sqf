params [["_code", {}, [{}]], ["_args", [], [[]]],["_obj", objNull, [objNull]],["_supportReq", false, [false]]];

if !(_supportReq) then {
	_args params ["_type"];

	private _item = [_type] call MSF_Logi_fnc_GetLogiInventory;
	_item params ["_name", "_desc", "_icon", "_reqType", "_baseCost", "_airDrop"];
	
	private _cost = [_baseCost] call MSF_Logi_fnc_CalculateItemCost;

	if (_obj getVariable ["MSF_SupplyPoints", 0] > _cost) then {
		call _code;

		systemChat format ["%1 delivered to supply point.", _name];
		private _points = _obj getVariable ["MSF_SupplyPoints", 0];
		_obj setVariable ["MSF_SupplyPoints", _points - _cost, true];
	};
}
else {
	_args params ["_item", "_pos", "_unit", "_data"];	
	_item params ["_name", "_desc", "_icon", "_reqType", "_baseCost", "_airDrop", "_category"];

	private _cost = [_baseCost] call MSF_Logi_fnc_CalculateItemCost;
	private _logiPoints = [side _unit] call MSF_Logi_fnc_GetLogiPoints;

	if (_logiPoints > _cost) then {
		[_cost, true, side _unit] call MSF_Logi_fnc_UpdateLogiPoints;				
		call _code;
	}
	else
	{
		systemChat "Available logistics insufficient for submitted request.";
	};
};


