/*
	Author: zeik_tuvai

	Description:
		Gets an array list of configured inventory items for filling cargo containers.
    	
	Function Ver 2.0
	Implemented in: MSF Addon v2.1.0
*/

private ["_cfg", "_return", "_magtype", "_items", "_mags", "_launch", "_grenade", "_med", "_food"];
private _magset1 = getMissionConfigValue ["MSF_Mission_Inventory_Mag1", true];
private _magset2 = getMissionConfigValue ["MSF_Mission_Inventory_Mag2", false];
private _magset3 = getMissionConfigValue ["MSF_Mission_Inventory_Mag3", false];

_return = [];
_mags = [];

if (_magset1) then { _mags append getArray (configFile >> 'MSFConfig' >> 'MagazineSets' >> "Set1");};
if (_magset2) then { _mags append getArray (configFile >> 'MSFConfig' >> 'MagazineSets' >> "Set2");};
if (_magset3) then { _mags append getArray (configFile >> 'MSFConfig' >> 'MagazineSets' >> "Set3");};
if (!_magset1 && !_magset2 && !_magset3) then { _mags append getArray (configFile >> 'MSFConfig' >> 'MagazineSets' >> "Set1");};

// Default config entries
_items 	= getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'items');
_launch = getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'launcherRounds');
_grenade = getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'grenades');
_med 	= getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceMedical');
_food 	= getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceFood');

_return pushBack _items;
_return pushBack _mags;
_return pushBack _launch;
_return pushBack _grenade;
_return pushBack _med;
_return pushBack _food;

_return;