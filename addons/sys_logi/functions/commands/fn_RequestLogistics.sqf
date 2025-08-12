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
		
		if (_airDrop == 1) then {
			_data params ["_type", "_category", "_class"];
			private _type = _reqType;

			[side _unit, _pos, _type, _class] remoteExec ["MSF_Logi_fnc_SpawnVehicleParaDrop", 2];			
			[_unit, format ["%1 air-drop en route to grid %2", _name, mapGridPosition _pos], true] call MSF_Logi_fnc_SendLogisticsMessage;

			private _mID = format ["MSF_Logi_%1_%2", _type, floor (random 999)];
			private _marker = createMarkerLocal [_mID, _pos];
			_marker setMarkerTypeLocal "mil_dot";
			_marker setMarkerColorLocal ([side _unit] call MSF_UI_fnc_GetSideColor);
			_marker setMarkerText format ["%1 LZ", _name];
			
			private _markers = uiNamespace getVariable ["MSF_LogiMarkers", []];
			_markers pushBack _marker;
			uiNamespace setVariable ["MSF_LogiMarkers", _markers];
		}
		else
		{
			_data params ["_type", "_category"];
			private _type = _reqType;

			switch (_category) do {
				case 2: {
					[_pos, _type] call MSF_Logi_fnc_SpawnArtyBarrage;
				};
				case 3: { 
					[_pos, _type] call MSF_Logi_fnc_SpawnFlareBarrage;
				};			
			};
			[_unit, format ["%1 barrage en route to grid %2", _name, mapGridPosition _pos], true] call MSF_Logi_fnc_SendLogisticsMessage;			
		};
	}
	else
	{
		systemChat "Available logistics insufficient for submitted request.";
	};
};
