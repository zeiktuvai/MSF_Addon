params [["_object", objNull, [objNull]], ["_clear", true, [true]], ["_count", 25, [25]], ["_fill", false, [false]], ["_weights", [1,1,1,1,1,1], [[]]]];

private _inv = ["inv"] call MSF_fnc_GetConfigData;
_inv merge ([] call MSF_Logi_fnc_GetPlayerWeaponInventory);

if (_clear) then {
	clearWeaponCargoGlobal _object;
	clearMagazineCargoGlobal _object;
	clearItemCargoGlobal _object;
	clearBackpackCargoGlobal _object;
};

if (_object isKindOf "AllVehicles") then {
	for "_i" from 1 to floor (random 5) do {
		_object addItemCargoGlobal [selectRandom (_inv get "Items"), 1];
	};
};

if (_fill) then {
	private _remain = loadAbs _object;
	private _max = (maxLoad _object) * .8;

	while { loadAbs _object < _max } do {
		private _cat = [_weights] call MSF_Logi_fnc_SelectCategory;
		[_object, _inv get _cat] call MSF_Logi_fnc_AddItem;
		_remain = _remain - 1;
	};
} else {
	private _remain = _count;

	while { _remain > 0 } do {
		private _cat = [_weights] call MSF_Logi_fnc_SelectCategory;
		[_object, _inv get _cat] call MSF_Logi_fnc_AddItem;
		_remain = _remain - 1;
	};
};
