#include "\z\msf\addons\main\cfg\MSF_Macros.hpp"
params [["_type", "Ammo", [""]]];

private _obj = player getVariable ["MSF_SupplySource", objNull];
private _pos = [_obj] call MSF_Logi_fnc_CheckSupplyPointExists;
private ["_classes", "_items", "_maxFill"];

switch (_type) do {
	case MSF_CARGO_FOOD: { 
		_classes = ["cargo"] call MSF_fnc_GetConfigData get MSF_CARGO_FOOD;
		_items = ("(getNumber ( _x >> 'scope' ) isEqualTo 2 && getNumber ( _x >> 'ACE_isFieldRationItem' ) == 1 && getNumber ( _x >> 'acex_field_rations_refillAmount') == 0)" configClasses ( configFile >> "cfgWeapons" )) apply { configName _x };
		_maxFill = 0.9;
	};
	case MSF_CARGO_MED: {
		_classes = ["ACE_medicalSupplyCrate_advanced"];
	};
	case MSF_CARGO_AMMO: {
		_classes = ["cargo"] call MSF_fnc_GetConfigData get MSF_CARGO_AMMO;
	};
	case MSF_CARGO_ORD: {
		_classes = ["cargo"] call MSF_fnc_GetConfigData get MSF_CARGO_ORD;
		private _inv = ["inv"] call MSF_fnc_GetConfigData;
		_items = _inv get "Grenades";
		_items append (_inv get "Launcher");
		_maxFill = 0.65;
	};
};

private _crate = createVehicle [selectRandom _classes, _pos, [], 4, "CAN_COLLIDE"];

if (_type == MSF_CARGO_FOOD || _type == MSF_CARGO_AMMO || _type == MSF_CARGO_ORD) then {
	clearWeaponCargoGlobal _crate;
	clearMagazineCargoGlobal _crate;
	clearItemCargoGlobal _crate;
};

if (_type == MSF_CARGO_FOOD || _type == MSF_CARGO_ORD) then {
	private _max = (maxLoad _crate) * _maxFill;

	while { loadAbs _crate < _max } do {
		[_crate, _items] call MSF_Logi_fnc_AddItem;
	};
};

if (_type == MSF_CARGO_AMMO) then {
	[_crate] call MSF_Logi_fnc_SetupRearmInteraction;
};

[_crate, 1] call ace_cargo_fnc_setSize;
