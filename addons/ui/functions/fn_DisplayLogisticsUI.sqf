disableSerialization;
createDialog "SupplyDialog";

{
	_y params ["_key", "_title", "_icon", "_crateType", "_count"];

	lbAdd [1500, _title];
	lbSetPicture [1500, _forEachIndex, _icon];
	lbSetData [1500, _forEachIndex, _crateType];
	(findDisplay 6217 displayCtrl 1500) lbSetTextRight [_forEachIndex, [_count, "∞"] select (_count == -1)];
} forEach ((missionNamespace getVariable "MSF") get "LogiInventory");