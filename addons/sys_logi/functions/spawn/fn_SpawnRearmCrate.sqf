#include "\z\msf\addons\main\cfg\MSF_Macros.hpp"
params [["_unit", objNull, [objNull]]];

private _classes = ["cargo"] call MSF_fnc_GetConfigData get MSF_CARGO_AMMO;
private _crate = createVehicle [selectRandom _classes, position _unit];

clearWeaponCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearItemCargoGlobal _crate;

[_crate, 1] call ace_cargo_fnc_setSize;
[_crate] call MSF_Logi_fnc_SetupRearmInteraction;
[_unit, _crate] call ace_dragging_fnc_startCarry;
