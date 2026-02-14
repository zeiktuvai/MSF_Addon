[
	"vehicle to delete",
	{
		if (_obj isKindOf "AllVehicles") then {
			deleteVehicle _obj;
		};
	},
	{}
] call MSF_UI_fnc_CreateUIKeyboardHandler;
