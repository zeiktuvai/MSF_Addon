disableSerialization;
createDialog "SupplyDialog";

{
	_y params ["_key", "_title", "_desc", "_icon", "_crateType", "_count"];

	lbAdd [1500, _title];
	lbSetPicture [1500, _forEachIndex, _icon];
	lbSetData [1500, _forEachIndex, _crateType];
	lbSetTooltip [1500, _forEachIndex, _desc];
	(findDisplay 6217 displayCtrl 1500) lbSetTextRight [_forEachIndex, [_count, "∞"] select (_count == -1)];
} forEach ((missionNamespace getVariable "MSF") get "LogiInventory");

1500 lbSortBy ["TEXT"];

lbSetCurSel [1500, 0];