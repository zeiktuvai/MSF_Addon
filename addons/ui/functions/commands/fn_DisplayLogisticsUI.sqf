params [["_inventory", [], [[]]], ["_points", 0, [0]], ["_title", "Logistics Depot", [""]], ["_isTruck", false, [false]], ["_obj", objNull, [objNull]]];

disableSerialization;
createDialog "MSF_SupplyDialog";

private _idx = 0;
private _reqPoints = 0;

if (_isTruck) then { _reqPoints = MSF_Logi_CrateCost; } else { _reqPoints = MSF_Logi_PointsPerVic; };

ctrlSetText [1001, _title];
lnbAddColumn [1500, 0.15];
lnbAddColumn [1500, 0.9];
ctrlShow [104, false];
menuEnable[2201, [1], false];

{
	_x params ["_name", "_desc", "_icon", "_crateType", "_depotInf", "_spInf", "_supplyTruck"];
	private _infinite = if (_isTruck) then {
		[false,true] select (_spInf == "true");
	}
	else
	{
		[false,true] select (_depotInf == "true");
	};

	if (_infinite || (!(_infinite) && [_obj] call MSF_Logi_fnc_CheckAvailablePoints)) then {
		_cost = [format ["%1pts",floor (_reqPoints)], "∞"] select (_infinite);
		lnbAddRow [1500, ["", _name, _cost]];
		lnbSetPicture [1500, [_idx, 0], _icon];
		lnbSetData [1500, [_idx, 0], _desc];
		lnbSetData [1500, [_idx,1], _crateType];
		lnbSetTooltip [1500, [_idx, 1], _desc];
		
		_idx = _idx + 1;
	};	
} forEach _inventory;

if (_idx == 0) then { 
	lnbAddRow [1500, ["", "No available Logistics"]];
	lnbSetPicture [1500, [0,0], "a3\ui_f\data\igui\cfg\actions\obsolete\ui_action_cancel_ca.paa"];
};

[1500, 1] lnbSortBy ["TEXT"];

[] call MSF_UI_fnc_SetTabletStats;
