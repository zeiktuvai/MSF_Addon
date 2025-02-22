private _classes = ["Default"];
private _names = ["Default"];
private _weapList = [];

if (MSF_Unit_EnableOverride_W_Types != "") then {
	_weapList = parseSimpleArray MSF_Unit_EnableOverride_W_Types;
};

{
	if (configFile >> "CfgWeapons" >> _x select 0 select 0 != configNull) then
	{
		_classes pushBack (_x select 0 select 0);
		_names pushBack (_x select 0 select 1);
	};
} forEach _weapList;

[
	"MSF_User_SelectedPrimary",
	"LIST",
	["Preferred Weapon", "List of allowed weapon types to choose from on this server. (Default setting leaves the default class weapon in place)."],
	["MSF - User Settings", "Player Inventory"],
	[_classes, _names, 0],
	0
] call CBA_fnc_addSetting;