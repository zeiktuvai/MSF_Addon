[] spawn {
	[6218] call MSF_UI_fnc_CallInputDialog;

	waitUntil {sleep 1; findDisplay 6219 isEqualTo displayNull;};

	if (!isNil {findDisplay 6218 getVariable "InputReturn"}) then {
		private _name = findDisplay 6218 getVariable ["InputReturn", "INVALID"];
		closeDialog 0;
		if (_name in (profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap])) exitWith {
			cutText [format ["<t color='#8b0000' align='center'>ERROR: Loadout name '%1' exists already.</t>", _name], "PLAIN", 2, false, true, true];
		};

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
	};
};

