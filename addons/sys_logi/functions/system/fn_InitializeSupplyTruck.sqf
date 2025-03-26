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
		private _inv = (missionNamespace getVariable "MSF") get "Logi_Inventory";
		{
			_y params ["_key", "_title", "_desc", "_icon", "_crateType", "_infinite"];

			if ("V" in _key) then {_inv deleteAt _key} else {
				_inv set [_key, [_key, _title, _desc, _icon, _crateType, false]];
			};
			
		} forEach _inv;
			
		[_inv, [_target] call ace_rearm_fnc_getSupplyCount, "Supply Truck", true] call MSF_UI_fnc_DisplayLogisticsUI;
		_caller setVariable ["MSF_SupplyTruck", _target];
	},
	{},
	[],
	0,
	nil,
	false,
	false
] remoteExec ["BIS_fnc_holdActionAdd", 0, _object];