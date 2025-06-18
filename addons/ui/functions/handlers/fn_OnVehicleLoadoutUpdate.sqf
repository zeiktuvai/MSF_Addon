params [["_loadout", "", [""]], ["_type", 0, [0]]];

player setVariable ["MSF_VicLoadoutName", _loadout];

[
	"UPDATE",
	{
		if (_obj isKindOf "LandVehicle") then {
			private _name = player getVariable ["MSF_VicLoadoutName", "INVALID"];
			[_name, _obj, false] call MSF_Logi_fnc_SaveVehicleLoadout;

			//TODO: Call share code to update
			player setVariable ["MSF_NotificationText", ["Vehicle Loadout Updated", format ["%1 has been updated.", _name]]];
			[["MSF", "General"], 15, "", 35, "", true, true, false, true] call BIS_fnc_advHint;
		};
	},
	{
		player setVariable ["MSF_VicLoadoutName", nil];
	}
] call MSF_UI_fnc_CreateUIKeyboardHandler;
 