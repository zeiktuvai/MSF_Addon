params [["_name", "", [""]]];

player setVariable ["MSF_VicLoadoutName", _name];

[
	"Save",
	{
		if (_obj isKindOf "LandVehicle") then {
			private _name = player getVariable ["MSF_VicLoadoutName", "INVALID"];
			[_name, _obj] call MSF_Logi_fnc_SaveVehicleLoadout;
			player setVariable ["MSF_NotificationText", ["Vehicle Loadout Saved", format ["Vehicle Loadout saved as %1", _name]]];
			[["MSF", "General"], 15, "", 35, "", true, true, false, true] call BIS_fnc_advHint;
		};
	},
	{
		player setVariable ["MSF_VicLoadoutName", nil];
	}
] call MSF_UI_fnc_CreateUIKeyboardHandler;		