player addEventHandler ["Respawn", {
	params ["_unit", "_corpse"];

	if (MSF_User_SelectedPrimary != "Default") then {
		[] call MSF_fnc_UpdatePlayerWeapon;
	};
}];	
