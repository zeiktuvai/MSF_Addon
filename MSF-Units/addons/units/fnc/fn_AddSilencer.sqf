params ["_unit"];

private _type = typeOf _unit;

if ("N" in _type) exitWith {
	private _weap = primaryWeapon _unit;

	if ("hk416" in _weap || "m249" in _weap) then {
		_unit addPrimaryWeaponItem "muzzle_snds_M";
	};
	if ("m14ebr" in _weap) then {
		_unit addPrimaryWeaponItem "muzzle_snds_B";
	};
};
