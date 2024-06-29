	
params [["_trigger", objNull, [objNull]], ["_num", 0, [0]], ["_side", east, [east]], ["_vicTypes", [], [[]]]];

// add probability slider to fill vic.
for "_i" from 1 to _num do {
	sleep 0.1
	
	private _type = selectRandom _vicTypes;
	private _pos = [[_trigger] call BIS_fnc_randomPosTrigger, 1, 50, 3, 0, 20, 0] call BIS_fnc_findSafePos;
	private _vic = [_pos, 0, _type, _side] call BIS_fnc_spawnVehicle;
	
	// need another config for this list.
	// _chance = random 100;
	// if (_chance < _VARHERE) then {		
	// 	_totalSlots = ([_type, true] call BIS_fnc_crewCount);
	// 	_cargoSlots = ([_VehLghClass, false] call BIS_fnc_crewCount);
	// 	_availSlots = _totalSlots - _cargoSlots - count crew (_vic select 0);

	// 	for "_k" from 1 to _availSlots do {
	// 		_crewD = (_vic select 2) createUnit [selectRandom UNITCLASSESHERE, _pos, [], 0, "FORM"];
	// 		[_crewD] join (_vic select 2)
	// 		_crewD moveInAny (_vic select 0);
	// 	};
	// };
};