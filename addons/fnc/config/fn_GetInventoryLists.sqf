/*
	Author: zeik_tuvai

	Description:
		Gets an array list of configured inventory items for filling cargo containers.
    	
	Function Ver 1.0
	Implemented in: MSF Addon v2.1.0
*/
params [["_magSet", 0, [0]]];

private ["_cfg", "_return", "_mag"];
_return = [];
_cfg = [] call MSF_fnc_GetLocalConfig;

switch (_magSet) do {
	case 0: { _mag = "Set1" };
	case 1: { _mag = "Set2" };
	default { _mag = "Set1" };
};

if (!isNull _cfg) then {
	_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'items');
	_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'MagazineSets' >> _mag);
	_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'launcherRounds');
	_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'grenades');
	_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'aceMedical');
	_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'aceFood');
	
}
else 
{
	_return pushBack getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'items');
	_return pushBack getArray (configFile >> 'MSFConfig' >> 'MagazineSets' >> _mag);
	_return pushBack getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'launcherRounds');
	_return pushBack getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'grenades');
	_return pushBack getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceMedical');
	_return pushBack getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceFood');
};

_return;