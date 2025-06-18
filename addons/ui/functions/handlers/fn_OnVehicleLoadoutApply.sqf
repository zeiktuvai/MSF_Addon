params [["_loadout", "", [""]], ["_type", 0, [0]]];

player setVariable ["MSF_VicLoadout", [[_loadout, _type] call MSF_Logi_fnc_GetSavedVehicleLoadout, _loadout]];

[
	"APPLY",
	{
		if (_obj isKindOf "LandVehicle") then {
			[_obj, player getVariable ["MSF_VicLoadout", []] select 0] call MSF_Persist_fnc_SetObjectCargo;
			player setVariable ["MSF_NotificationText", ["Vehicle Loadout Applied", format ["%1 applied to vehicle.", player getVariable ["MSF_VicLoadout", [nil,"INVALID"]] select 1]]];
			[["MSF", "General"], 15, "", 35, "", true, true, false, true] call BIS_fnc_advHint;
		};
	},
	{
		player setVariable ["MSF_VicLoadout", nil];
	}
] call MSF_UI_fnc_CreateUIKeyboardHandler;
