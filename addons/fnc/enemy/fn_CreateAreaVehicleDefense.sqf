/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script creates a number of vehicles (Light, Armored, turrets) in a trigger area.
        
	Examples:
		[Trigger Objct, 2, east, ["Jeep"], false, false] call MSF_fnc_CreateAreaVehicleDefense;

	Function Ver 1.0
	Implemented in: MSF Addon v1.6.0
*/
// type: 0 Vic, 1 Armor, 2 Static
params [
	["_trigger", objNull, [objNull]],
	["_num", 0, [0]],
	["_side", east, [east]],
	["_vicTypes", [], [[]]],
	["_unitTypes", [], [[]]],
	["_spawnType", 0, [0]],
	["_spawnProb", 1, [1]],
	["_logicArea", [], [[]]],
	["_fill", 0, [0]]
];

for "_i" from 1 to _num do {
	if (!isDedicated) then {
		sleep 0.1;
	};
	
	if ([_spawnProb] call MSF_fnc_CalculateProbability) then {	
		private _type = selectRandom _vicTypes;
		private _pos = [[[[position _trigger, _logicArea select 1]], []] call BIS_fnc_randomPos, 5, 100, 3, 0, 10, 0] call BIS_fnc_findSafePos;
		private _vic = [_pos, 0, _type, _side] call BIS_fnc_spawnVehicle;

		if (getMissionConfigValue ["MSF_Mission_Zeus", true]) then {
			{ _x addCuratorEditableObjects [[_vic select 0], true]} forEach allCurators;
		};
		
		//
		if (_spawnType == 0) then {

			if ([_fill] call MSF_fnc_CalculateProbability) then {		
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
};