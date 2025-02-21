disableSerialization;

createDialog "UAVDialog";
{
   lbAdd [1500, _x];
	lbSetPicture [1500, _forEachIndex, getText (configFile>> "CfgVehicles" >> _y select 0 >> "icon")];
	lbSetData [1500, _forEachIndex, _y select 0];
	(findDisplay 6216 displayCtrl 1500) lbSetTextRight [_forEachIndex, str (_y select 1)];
} forEach ((missionNamespace getVariable "MSF") get "UAV_Inventory");