/*
	Author: zeik_tuvai

	Description:
		Gets an array list of configured inventory items for filling cargo containers.
    	
	Function Ver 1.0
	Implemented in: MSF Addon v2.1.0
*/params [["_magType", 0, [0]]];
private _mags = [];

private _launch = parseSimpleArray (getMissionConfigValue ["MSF_Helper_Inv_Launcher", str getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'launcherRounds')]);
private _grenade = parseSimpleArray (getMissionConfigValue ["MSF_Helper_Inv_Grenades", str getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'grenades')]);
private _medical = parseSimpleArray (getMissionConfigValue ["MSF_Helper_Inv_Med", str getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceMedical')]);
private _food = parseSimpleArray (getMissionConfigValue ["MSF_Helper_Inv_Food", str getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'aceFood')]);
private _items = parseSimpleArray (getMissionConfigValue ["MSF_Helper_Inv_Item", str getArray (configFile >> 'MSFConfig' >> 'InventorySets' >> 'items')]);

switch (_magType) do {
	case 0: {
		_mags = parseSimpleArray (getMissionConfigValue ["MSF_Helper_Inv_Mag", str getArray (configFile >> 'MSFConfig' >> 'MagazineSets' >> 'rhs_usaf')]);
	 };
	case 1: {
		_mags = parseSimpleArray (getMissionConfigValue ["MSF_Helper_Inv_Mag", str getArray (configFile >> 'MSFConfig' >> 'MagazineSets' >> 'mx')]);
	};
};

_result = [_items, _mags, _launch, _grenade, _medical, _food];
_result;