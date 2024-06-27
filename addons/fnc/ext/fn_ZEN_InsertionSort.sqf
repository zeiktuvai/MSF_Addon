/*
// Part of Infantry Occupy House
// by Zenophon

*/

params ["_array", "_comparator"];
private ["_i", "_j", "_count", "_element", "_value"];

_count = count _array - 1;

if (count _array == 0) exitWith {};
for "_i" from 1 to _count step 1 do {
	scopeName "forI";
	_element = _array select _i;
	_value = EVAL(_element);

	for [{_j = _i}, {_j >= 1}, {_j = _j - 1}] do {
		if (_value > EVAL(_array select (_j - 1))) then {
			breakTo "forI";
		};
		_array set [_j, _array select (_j - 1)];
	};

	_array set [_j, _element];
};
if (true) exitWith {};