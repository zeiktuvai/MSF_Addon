/*
// Part of Infantry Occupy House
// by Zenophon

*/

params ["_array"];
private ["_j", "_i", "_temp"];

if (count _array > 1) then {
	for "_i" from 0 to (count _array - 1) do {
			_j = _i + floor random ((count _array) - _i);
			_temp = _array select _i;
			_array set [_i, (_array select _j)];
			_array set [_j, _temp];
	};
};
if (true) exitWith {};