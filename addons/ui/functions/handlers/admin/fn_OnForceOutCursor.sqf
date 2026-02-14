[
	"vehicle to force units out of",
	{
		if (_obj isKindOf "AllVehicles") then {
			doGetOut units _obj;
		};
	},
	{}
] call MSF_UI_fnc_CreateUIKeyboardHandler;
