[
	"vehicle to repair",
	{
		if (_obj isKindOf "AllVehicles") then {
			_obj setDamage 0;
		};
	},
	{}
] call MSF_UI_fnc_CreateUIKeyboardHandler;
