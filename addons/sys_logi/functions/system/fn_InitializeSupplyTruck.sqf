params [["_object", objNull, [objNull]]];

[
	_object,
	"Logistics Menu",
	"a3\ui_f\data\map\vehicleicons\iconbackpack_ca.paa",
	"a3\ui_f\data\map\vehicleicons\iconbackpack_ca.paa",
	"(_this distance _target < 6)",
	"true",
	{},
	{},
	{
		["LogiSourceTruck", true] call MSF_fnc_SetLocalValue;		
		_caller setVariable ["MSF_SupplyTruck", _target];
		[[true] call MSF_Logi_fnc_GetLogiInventory, [_target] call ace_rearm_fnc_getSupplyCount, "Supply Truck", true, _target] call MSF_UI_fnc_DisplayLogisticsUI;
	},
	{},
	[],
	0,
	nil,
	false,
	false
] remoteExec ["BIS_fnc_holdActionAdd", 0, _object];