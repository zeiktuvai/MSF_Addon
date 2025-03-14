disableSerialization;
createDialog "SupplyDialog";

private _idx = 0;
{
	_y params ["_key", "_title", "_desc", "_icon", "_crateType", "_infinite"];

	private _points = (missionNamespace getVariable "MSF") getOrDefault ["Logi_Points", 0, true];
	
	if (_infinite || !_infinite && _points >= MSF_Logi_PointsPerVic) then {
		lbAdd [1500, _title];
		lbSetPicture [1500, _idx, _icon];
		lbSetData [1500, _idx, _crateType];
		lbSetTooltip [1500, _idx, _desc];
		(findDisplay 6217 displayCtrl 1500) lbSetTextRight [_idx, [str floor (_points / MSF_Logi_PointsPerVic), "∞"] select (_infinite)];
		_idx = _idx + 1;
	};
} forEach ((missionNamespace getVariable "MSF") get "Logi_Inventory");

1500 lbSortBy ["TEXT"];

lbSetCurSel [1500, 0];