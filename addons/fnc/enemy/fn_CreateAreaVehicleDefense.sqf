/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script creates a number of vehicles (Light, Armored, turrets) in a trigger area.
        
	Examples:
		[Trigger Objct, 2, east, ["Jeep"], false, false] call MSF_fnc_CreateAreaVehicleDefense;

	Function Ver 1.0
	Implemented in: MSF Addon v1.5.3
*/
params [
	["_trigger", objNull, [objNull]],
	["_num", 0, [0]],
	["_side", east, [east]],
	["_vicTypes", [], [[]]],
	["_isArmor", false, [false]],
	["_isStatic", false, [false]]
];

private _unitTypes = getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Units');

for "_i" from 1 to _num do {
	sleep 0.1;
	
	private _type = selectRandom _vicTypes;
	private _pos = [[_trigger] call BIS_fnc_randomPosTrigger, 5, 100, 3, 0, 10, 0] call BIS_fnc_findSafePos;
	private _vic = [_pos, 0, _type, _side] call BIS_fnc_spawnVehicle;

	if (_trigger getVariable ["MSF_Trig_Fortify_Zeus", false]) then {
		{ _x addCuratorEditableObjects [[_vic select 0], true]} forEach allCurators;
	};
	
	if (!_isArmor && !_isStatic) then {
		private _spawnChance = _trigger getVariable ["MSF_Trig_Fortify_VicFillPercentage", 0];
		_chance = random 100;
		if (_chance > (_spawnChance * 100)) then {		
			_totalSlots = ([_type, true] call BIS_fnc_crewCount);
			_cargoSlots = ([_type, false] call BIS_fnc_crewCount);
			_availSlots = _totalSlots - _cargoSlots - count crew (_vic select 0);

			for "_k" from 1 to _availSlots do {
				private _crewD = (_vic select 2) createUnit [selectRandom _unitTypes, _pos, [], 0, "FORM"];
				[_crewD] join (_vic select 2);
				_crewD moveInAny (_vic select 0);
			};
		};
	};
};