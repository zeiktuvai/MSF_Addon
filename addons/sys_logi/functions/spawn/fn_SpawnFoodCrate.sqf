#include "\z\msf\addons\main\cfg\MSF_Macros.hpp"
params [["_unit", objNull, [objNull]]];

private _classes = ["cargo"] call MSF_fnc_GetConfigData get MSF_CARGO_FOOD;
private _crate = createVehicle [selectRandom _classes, position _unit];
private _items = ("(getNumber ( _x >> 'scope' ) isEqualTo 2 && getNumber ( _x >> 'ACE_isFieldRationItem' ) == 1 && getNumber ( _x >> 'acex_field_rations_refillAmount') == 0)" configClasses ( configFile >> "cfgWeapons" )) apply { configName _x };

clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearItemCargoGlobal _crate;

private _max = (maxLoad _crate) * .9;

while { loadAbs _crate < _max } do {
	[_crate, _items] call MSF_Logi_fnc_AddItem;
};

[_crate, 1] call ace_cargo_fnc_setSize;
[_unit, _crate] call ace_dragging_fnc_startCarry;
