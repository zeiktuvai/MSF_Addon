params [["_object", objNull, [objNull]]];

[
	_object,
	["<img image='a3\ui_f\data\map\vehicleicons\iconbackpack_ca.paa'/> Logistics Menu",
	{
		params ["_target", "_caller", "_actionId", "_arguments"];

		["LogiSourceTruck", true] call MSF_fnc_SetLocalValue;		
		_caller setVariable ["MSF_SupplySource", _target];
		[[] call MSF_Logi_fnc_GetLogiInventory, "Supply Truck", _target] call MSF_UI_fnc_DisplaySupplyMenu;
	},
	[],
	1.5,
	true,
	true,
	"",
	"true",
	10]
] remoteExec ["addAction", 0, _object];
