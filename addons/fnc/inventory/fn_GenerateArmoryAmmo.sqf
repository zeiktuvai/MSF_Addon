params [["_object", objNull, [objNull]], ["_weaps", [], [[]]]];

clearWeaponCargoGlobal _object;
clearMagazineCargoGlobal _object;
clearItemCargoGlobal _object;
clearBackpackCargoGlobal _object;

{
	private _mags = getArray ( configFile >> "CfgWeapons" >> _x >> "magazines" );
	for "_i" from 1 to (random 3 + 1) do {
		_object addMagazineCargoGlobal [selectRandom _mags, floor random [1, 3, 6]];
	};
} forEach _weaps;
