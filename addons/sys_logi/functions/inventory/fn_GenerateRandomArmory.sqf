params [["_object", objNull, [objNull]], ["_count", 5, [5]]];

clearWeaponCargoGlobal _object;
clearMagazineCargoGlobal _object;
clearItemCargoGlobal _object;
clearBackpackCargoGlobal _object;

private _primarys = "(getNumber ( _x >> 'scope' ) isEqualTo 2 && { getText ( _x >> 'simulation' ) isEqualTo 'Weapon' && { getNumber ( _x >> 'type' ) isEqualTo 1 }})" configClasses ( configFile >> "cfgWeapons" );
private _weaps = [];

for "_i" from 1 to _count do {
	private _weap = configName selectRandom _primarys;
	_object addWeaponCargoGlobal [_weap, 1];
	_weaps pushBack _weap;

	private _acc = compatibleItems _weap;
	if (_acc isNotEqualTo []) then {
		if ([0.8] call MSF_fnc_CalculateProbability) then {
			_object addItemCargoGlobal [selectRandom _acc, 1];
		};
	};
};

_weaps;
