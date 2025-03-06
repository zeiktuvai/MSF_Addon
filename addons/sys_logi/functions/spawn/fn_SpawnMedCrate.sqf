params [["_unit", objNull, [objNull]]];

private _crate = createVehicle ["ACE_medicalSupplyCrate_advanced", position _unit];
[_crate, 1] call ace_cargo_fnc_setSize;
[_unit, _crate] call ace_dragging_fnc_startCarry;