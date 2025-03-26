params [["_zero", 0, [0]], ["_target", objNull, [objNull]], ["_center", [], [[]]]];

private _dist = 150;
private _radius = 350;
private _shells = ["R_230mm_Cluster", "Sh_82mm_AMOS"];
private _pos = position _target;

switch (_zero) do {
	case 0: { _dist = 300; };
	case 1: { _dist = 250; _radius = 300;};
	case 2: { _dist = 200; _radius = 250;};
	case 3: { _dist = 150; _radius = 200;};
	case 4: { _dist = 100; _radius = 150;};
	case 5: { _dist = 50; _radius = 100;};
	case 6: { _dist = 0; _radius = 10;};
};

if (count _center > 0) then {
	_pos = [position _target, _dist, _target getDir _center] call BIS_fnc_relPos;
};

[_pos, selectRandom _shells, _radius, 2, [5,10], {false}, _dist] spawn BIS_fnc_fireSupportVirtual;
