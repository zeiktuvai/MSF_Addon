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
_cfg = [] call MSF_fnc_GetLocalConfig;

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

if (!isNull _cfg) then {
	private _magsets = [];

	if (_magset1) then {
		if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'MagazineSets' >> "Set1")) then {
			_magsets append getArray (_cfg >> 'MSF_Mission_Classes' >> 'MagazineSets' >> "Set1");
		};
	};
	if (_magset2) then {
		if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'MagazineSets' >> "Set2")) then {
			_magsets append getArray (_cfg >> 'MSF_Mission_Classes' >> 'MagazineSets' >> "Set2");
		};
	};
	if (_magset3) then {
		if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'MagazineSets' >> "Set3")) then {
			_magsets append getArray (_cfg >> 'MSF_Mission_Classes' >> 'MagazineSets' >> "Set3");
		};
	};
	
	if (isArray(_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'items')) then {
		_return pushBack getArray (_cfg >> 'MSF_Mission_Classes' >> 'InventorySets' >> 'items');
	} else { _return pushBack _items; };
	if (count _magsets > 0) then { _return pushBack _magsets } else { _return pushBack _mags };
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