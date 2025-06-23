params [["_inventory", [], [[]]], ["_title", "Logistics Depot", [""]], ["_obj", objNull, [objNull]]];

disableSerialization;
createDialog "MSF_SupplyDialog";

ctrlSetText [1001, _title];
lnbAddColumn [1500, 0.15];
lnbAddColumn [1500, 0.9];
ctrlShow [104, false];
menuEnable[2201, [1], false];

private _idx = 0;
{
	_x params ["_name", "_desc", "_icon", "_crateType", "_baseCost"];
	
	private _cost = [_baseCost] call MSF_Logi_fnc_CalculateItemCost;
	lnbAddRow [1500, ["", _name, str _cost]];
	lnbSetPicture [1500, [_idx, 0], _icon];
	lnbSetData [1500, [_idx, 0], _desc];
	lnbSetData [1500, [_idx,1], _crateType];
	lnbSetTooltip [1500, [_idx, 1], _desc];
	
	_idx = _idx + 1;
} forEach _inventory;

if (_idx == 0) then { 
	lnbAddRow [1500, ["", "No available Logistics"]];
	lnbSetPicture [1500, [0,0], "a3\ui_f\data\igui\cfg\actions\obsolete\ui_action_cancel_ca.paa"];
};

[1500, 1] lnbSortBy ["TEXT"];
findDisplay 6217 displayCtrl 1203 ctrlSetStructuredText parseText format ["Remaining Supply: %1pts", [_obj] call ace_rearm_fnc_getSupplyCount];

[6217] call MSF_UI_fnc_SetTabletStats;
