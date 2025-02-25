if (MSF_User_SelectedPrimary != "Default") then {
	private _weapData = createHashMapFromArray parseSimpleArray MSF_Unit_EnableOverride_W_Types get MSF_User_SelectedPrimary;
	_weapData params ["_wClass", "_wName", "_wAttach", "_wMags"];

	private _mags = compatibleMagazines primaryWeapon player;
	private _invMags = magazines player arrayIntersect _mags;

	{
	player removeMagazines _x;
	} forEach _invMags;

	player removeWeapon primaryWeapon player;

	{
		player addMagazines _x;
	} forEach _wMags;

	player addWeapon _wClass;

	{
		if (_x != "") then {
			player addWeaponItem [_wClass, _x, true];
		};
	} forEach _wAttach;

	player selectWeapon _wClass;
};