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
		[(missionNamespace getVariable "MSF") get "Logi_Inventory", (missionNamespace getVariable "MSF") getOrDefault ["Logi_Points", 0, true]] call MSF_UI_fnc_DisplayLogisticsUI;
	},
	{},
	[],
	0,
	nil,
	false,
	false
] remoteExec ["BIS_fnc_holdActionAdd", 0, _object];