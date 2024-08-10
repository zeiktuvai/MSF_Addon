/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script is used to generate random inventory based on properties configured on the object
		from a list of items configured in MSF settings.  Each category can be enabled/disabled

	Function Ver 1.0
	Implemented in: MSF Addon v1.0
*/

params [["_object", objNull, [objNull]], ["_count", 5, [5]], ["_isFill", false, [false]], ["_weights", [1,1,1,1,1], [[]], 5]];

MSF_ifnc_GetCategory =
{
	params ["_weights"];
	_weights params ["_mag", "_launch", "_grenade", "_med", "_food"];

	selectRandomWeighted[
		0, _mag,
		1, _launch,
		2, _grenade,
		3, _med,
		4, _food
	];
};

MSF_ifnc_AddRandomItem =
{
	params ["_category", "_object", "_inv"];
	_inv params ["_items", "_mags", "_launch", "_grenade", "_medical", "_food"];

	switch (_category) do {
		case 0: { _object addMagazineCargoGlobal [selectRandom _mags, 1];};
		case 1: { _object addMagazineCargoGlobal [selectRandom _launch, 1];};
		case 2: { _object addMagazineCargoGlobal [selectRandom _grenade, 1];};
		case 3: { _object addItemCargoGlobal [selectRandom _medical, 1];};
		case 4: { _object addItemCargoGlobal [selectRandom _food, 1];};
	};
};

private _inv = [] call MSF_fnc_GetInventoryLists;
	
clearWeaponCargoGlobal _object;
clearMagazineCargoGlobal _object;
clearItemCargoGlobal _object;
clearBackpackCargoGlobal _object;

if (_object isKindOf "AllVehicles") then {
	for "_i" from 1 to floor (random 5) do {
		_object addItemCargoGlobal [selectRandom _inv select 0, 1];
	};
};

if (_isFill) then {
	private _remain = loadAbs _object;
	private _max = (maxLoad _object) * .8;

	while { loadAbs _object < _max } do {
		private _cat = [_weights] call MSF_ifnc_GetCategory;
		[_cat, _object, _inv] call MSF_ifnc_AddRandomItem;
		_remain = _remain - 1;
	};
} else {
	private _remain = _count;

	while { _remain > 0 } do {
		private _cat = [_weights] call MSF_ifnc_GetCategory;
		[_cat, _object, _inv] call MSF_ifnc_AddRandomItem;
		_remain = _remain - 1;
	};
};

