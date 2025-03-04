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
		[] call MSF_UI_fnc_DisplayLogisticsUI;
	},
	{},
	[],
	0,
	nil,
	false,
	false
] remoteExec ["BIS_fnc_holdActionAdd", 0, _object];
//"a3\ui_f\data\map\vehicleicons\iconparachute_ca.paa"