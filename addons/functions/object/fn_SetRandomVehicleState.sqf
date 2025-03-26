// Sets random vaules within a range for fuel, damage and ammo.

params [["_vics", [], [[]]]];

{
	_x setVehicleAmmo random 1;
	_x setDamage random [0, 0.45, 0.75];
	_x setFuel random [0.2, 0.40, 0.60];
} forEach _vics;