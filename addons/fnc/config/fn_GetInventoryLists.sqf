/*
	Author: zeik_tuvai

	Description:
		Gets an array list of configured inventory items for filling cargo containers.
    	
	Function Ver 2.0
	Implemented in: MSF Addon v2.1.0
*/
params [["_magSet", 0, [0]]];

private ["_cfg", "_return", "_magtype", "_items", "_mags", "_launch", "_grenade", "_med", "_food"];
_return = [];
_cfg = [] call MSF_fnc_GetLocalConfig;

switch (_magSet) do {
	case 0: { _magtype = "Set1" };
	case 1: { _magtype = "Set2" };
	default { _magtype = "Set1" };
};

// Default config entries
_items 	= getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'items');
_mags 	= getArray (configFile >> 'MSFConfig' >> 'MagazineSets' >> _magtype);
_launch = getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'launcherRounds');
_grenade = getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'grenades');
_med 	= getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceMedical');
_food 	= getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceFood');

if (!isNull _cfg) then {

	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'items')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'items');
	} else { _return pushBack _items; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'MagazineSets' >> _magtype)) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'MagazineSets' >> _magtype);
	} else { _return pushBack _mags; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'launcherRounds')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'launcherRounds');
	} else { _return pushBack _launch; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'grenades')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'grenades');
	} else { _return pushBack _grenade; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'aceMedical')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'aceMedical');
	} else { _return pushBack _med; };
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'aceFood')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'aceFood');
	} else { _return pushBack _food; };	
}
else 
{
	_return pushBack _items;
	_return pushBack _mags;
	_return pushBack _launch;
	_return pushBack _grenade;
	_return pushBack _med;
	_return pushBack _food;
};

_return;