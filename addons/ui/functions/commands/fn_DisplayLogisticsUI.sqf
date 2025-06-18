params [["_inventory", [], [[]]], ["_points", 0, [0]], ["_title", "Logistics Depot", [""]], ["_isTruck", false, [false]], ["_obj", objNull, [objNull]]];

disableSerialization;
createDialog "MSF_SupplyDialog";

private _idx = 0;
private _reqPoints = 0;

if (_isTruck) then { _reqPoints = MSF_Logi_CrateCost; } else { _reqPoints = MSF_Logi_PointsPerVic; };

ctrlSetText [1001, _title];
ctrlSetText [1002, format ["Available Points: %1", _points]];

{
	_x params ["_name", "_desc", "_icon", "_crateType", "_depotInf", "_spInf", "_supplyTruck"];
	private _infinite = if (_isTruck) then {
		[false,true] select (_spInf == "true");
	}
	else
	{
		[false,true] select (_depotInf == "true");
	};

	//if (!(_isTruck) || (_isTruck && [_obj] call ace_rearm_fnc_getSupplyCount >= _reqPoints)) then {
	if (_infinite || (!(_infinite) && [_obj] call MSF_Logi_fnc_CheckAvailablePoints)) then {
		lbAdd [1500, _name];
		lbSetPicture [1500, _idx, _icon];
		lbSetData [1500, _idx, _crateType];
		lbSetTooltip [1500, _idx, _desc];
		(findDisplay 6217 displayCtrl 1500) lbSetTextRight [_idx, [format ["%1pts",floor (_reqPoints)], "∞"] select (_infinite)];
		_idx = _idx + 1;
	} ;	
} forEach _inventory;

if (_idx == 0) then {
	lbAdd [1500, "No available Logistics"];
	lbSetPicture [1500, 0, "a3\ui_f\data\igui\cfg\actions\obsolete\ui_action_cancel_ca.paa"];
	ctrlEnable [1600, false];
};

1500 lbSortBy ["TEXT"];

lbSetCurSel [1500, 0];