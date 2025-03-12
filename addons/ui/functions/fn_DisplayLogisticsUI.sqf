disableSerialization;
createDialog "SupplyDialog";

{
	_y params ["_key", "_title", "_desc", "_icon", "_crateType", "_infinite"];

	private _points = (missionNamespace getVariable "MSF") getOrDefault ["Logi_Points", 0, true];

	//TODO: If no logi points then items show oddly.
	if (_infinite || !_infinite && _points >= MSF_Logi_PointsPerVic) then {
		lbAdd [1500, _title];
		lbSetPicture [1500, _forEachIndex, _icon];
		lbSetData [1500, _forEachIndex, _crateType];
		lbSetTooltip [1500, _forEachIndex, _desc];
		(findDisplay 6217 displayCtrl 1500) lbSetTextRight [_forEachIndex, [str floor (_points / 3), "∞"] select (_infinite)];
	};
} forEach ((missionNamespace getVariable "MSF") get "Logi_Inventory");

1500 lbSortBy ["TEXT"];

lbSetCurSel [1500, 0];