/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script is used to call other scripts to spawn enemies in a trigger area.
        
	Examples:
		[Trigger Objct] call MSF_fnc_FortifyArea;

	Function Ver 1.0
	Implemented in: MSF Addon v1.6.0
*/
params [["_trigger", objNull, [objNull]]];

private _vals = _trigger getVariable ["module_params", []];
_vals params ["_side", "_building", "_bldgNum", "_bldgSpread", "_bldgProb", "_vehicle", "_vicNum", "_vicFill", "_vicProb", "_armor", "_armorNum", "_armorProb",
	"_static", "_staticNum", "_staticProb", "_patrol", "_patrolNum", "_patrolProb", "_air", "_airNum", "_airProb", "_logicArea"];


private _classes = [0, _side] call MSF_fnc_GetConfigClasses;
_classes params ["_infantryGroupClasses", "_vicTypes", "_armorTypes", "_airClasses", "_staticTypes", "_fillUnits"];


// building defense
if (_building) then {
	[_trigger, _bldgNum, _bldgSpread, _side, _infantryGroupClasses, _bldgProb, _logicArea] spawn 
	{		
		params ["_trigger", "_buildingNum", "_bldgSpread", "_side", "_infantryGroupClasses", "_bldgProb", "_logicArea"];
		[_trigger, _buildingNum, _side, _infantryGroupClasses, _bldgProb, _logicArea, _bldgSpread] call MSF_fnc_CreateAreaBuildingDefense;
	};	
};

// static vics
if (_vehicle) then {
	[_trigger, _vicNum, _side, _vicTypes, _fillUnits, _vicProb, _logicArea, _vicFill] spawn {
		params ["_trigger", "_vicNum", "_side", "_vicTypes", "_fillUnits", "_vicProb", "_logicArea", "_vicFill"];
		[_trigger, _vicNum, _side, _vicTypes, _fillUnits, 0, _vicProb, _logicArea, _vicFill] call MSF_fnc_CreateAreaVehicleDefense;
	};
};

// armored vics
if (_armor) then {
	[_trigger, _armorNum, _side, _armorTypes, _armorProb, _logicArea] spawn {
		params ["_trigger", "_armorNum", "_side", "_armorTypes", "_armorProb", "_logicArea"];
		[_trigger, _armorNum, _side, _armorTypes, [], 1, _armorProb, _logicArea] call MSF_fnc_CreateAreaVehicleDefense;
	};
};

// static turrets
if (_static) then {
	[_trigger, _staticNum, _side, _staticTypes, _staticProb, _logicArea] spawn {
		params ["_trigger", "_staticNum", "_side", "_staticTypes", "_staticProb", "_logicArea"];
		[_trigger, _staticNum, _side, _staticTypes, [], 2, _staticProb, _logicArea] call MSF_fnc_CreateAreaVehicleDefense;
	};
};

// Area patrol
// if (_patrol) then {		
// 	[_trigger, _patrolNum, _side, _infantryGroupClasses, _patrolProb, _logicArea] spawn {
// 		params ["_trigger", "_patrolNum", "_side", "_infantryGroupClasses", "_patrolProb", "_logicArea"];
// 		[_trigger, _patrolNum, _side, _infantryGroupClasses, _patrolProb, _logicArea] call MSF_fnc_CreateAreaDefense;
// 	};	
// };

// Air units
if (_air) then {		
	[_trigger, _airNum, _side, _airClasses, _airProb] spawn {
		params ["_trigger", "_airNum", "_side", "_airClasses", "_airProb"];
		[_trigger, _airNum, _side, _airClasses, _airProb] call MSF_fnc_CreateAreaAirAttack;
	};
};	