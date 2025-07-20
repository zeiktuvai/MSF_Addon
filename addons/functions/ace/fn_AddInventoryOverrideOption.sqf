private _classes = ["Default"];
private _names = ["Default"];
private _weapList = [];

if (MSF_Unit_EnableOverride_W_Types != "") then {
	_weapList = createHashMapFromArray parseSimpleArray MSF_Unit_EnableOverride_W_Types;
};

{
	if (configFile >> "CfgWeapons" >> _x != configNull) then
	{
		_classes pushBack (_weapList get _x select 0);
		_names pushBack (_weapList get _x select 1);
	};
} forEach _weapList;

[
	"MSF_User_SelectedPrimary",
	"LIST",
	["Preferred Weapon", "List of allowed weapon types to choose from on this server. (Default setting leaves the default class weapon in place)."],
	["MSF - User Settings", "Player Inventory"],
	[_classes, _names, 0],
	0,
	{[] call MSF_fnc_UpdatePlayerWeapon;}
] call CBA_fnc_addSetting;
