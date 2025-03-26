params [["_inventory", createHashMap, [createHashMap]], ["_points", 0, [0]], ["_title", "Logistics Depot", [""]], ["_isTruck", false, [false]]];

disableSerialization;
createDialog "MSF_SupplyDialog";

private _idx = 0;
private _reqPoints = 0;

if (_isTruck) then { _reqPoints = MSF_Logi_CrateCost; } else { _reqPoints = MSF_Logi_PointsPerVic; };

ctrlSetText [1001, _title];
ctrlSetText [1002, format ["Available Points: %1", _points]];

{
	_y params ["_key", "_title", "_desc", "_icon", "_crateType", "_infinite"];

	
	if (_infinite || !_infinite && _points >= MSF_Logi_PointsPerVic) then {
		lbAdd [1500, _title];
		lbSetPicture [1500, _idx, _icon];
		lbSetData [1500, _idx, _crateType];
		lbSetTooltip [1500, _idx, _desc];
		(findDisplay 6217 displayCtrl 1500) lbSetTextRight [_idx, [format ["%1pts",floor (_reqPoints)], "∞"] select (_infinite)];
		_idx = _idx + 1;
	};
} forEach _inventory;

1500 lbSortBy ["TEXT"];

lbSetCurSel [1500, 0];