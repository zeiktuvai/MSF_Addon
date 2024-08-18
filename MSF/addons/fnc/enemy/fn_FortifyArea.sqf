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

private _classes = [] call MSF_fnc_GetUnitClasses;
_classes params ["_infantryGroupClasses", "_vicTypes", "_armorTypes", "_airClasses", "_staticTypes", "_fillUnits"];

private _side = _trigger getVariable ["MSF_Trig_Fortify_Side", east];

// building defense
if (_trigger getVariable ["MSF_Trig_Fortify_Building_Enable", false]) then {
	private _buildingNum = _trigger getVariable ["MSF_Trig_Fortify_Building_Num", 5];
	
	[_trigger, _buildingNum, _side, _infantryGroupClasses] spawn 
	{		
		params ["_trigger", "_buildingNum", "_side", "_groupTypes"];
		[_trigger, _buildingNum, _side, _groupTypes] call MSF_fnc_CreateAreaBuildingDefense;
	};	
};

// static vics
if (_trigger getVariable ["MSF_Trig_Fortify_Vehicle_Enable", false]) then {
	private _vicNum = _trigger getVariable ["MSF_Trig_Fortify_Vehicle_Num", 2];

	[_trigger, _vicNum, _side, _vicTypes] spawn {
		params ["_trigger", "_vicNum", "_side", "_vicTypes"];
		[_trigger, _vicNum, _side, _vicTypes] call MSF_fnc_CreateAreaVehicleDefense;
	};
};

// armored vics
if (_trigger getVariable ["MSF_Trig_Fortify_Armor_Enable", false]) then {
	private _vicNum = _trigger getVariable ["MSF_Trig_Fortify_Armor_Num", 2];

	[_trigger, _vicNum, _side, _armorTypes] spawn {
		params ["_trigger", "_vicNum", "_side", "_armorTypes"];
		[_trigger, _vicNum, _side, _armorTypes, true] call MSF_fnc_CreateAreaVehicleDefense;
	};
};

// static turrets
if (_trigger getVariable ["MSF_Trig_Fortify_Static_Enable", false]) then {
	private _vicNum = _trigger getVariable ["MSF_Trig_Fortify_Static_Num", 2];

	[_trigger, _vicNum, _side, _staticTypes] spawn {
		params ["_trigger", "_vicNum", "_side", "_staticTypes"];
		[_trigger, _vicNum, _side, _staticTypes, false, true] call MSF_fnc_CreateAreaVehicleDefense;
	};
};

// Area patrol
if (_trigger getVariable ["MSF_Trig_Fortify_Patrol_Enable", false]) then {		
	private _vicNum = _trigger getVariable ["MSF_Trig_Fortify_patrol_Num", 2];

	[_trigger, _vicNum, _side, _infantryGroupClasses] spawn {
		params ["_trigger", "_vicNum", "_side", "_infantryGroupClasses"];
		[_trigger, _vicNum, _side, _infantryGroupClasses] call MSF_fnc_CreateAreaDefense;
	};	
};

// Air units
if (_trigger getVariable ["MSF_Trig_Fortify_Air_Enable", false]) then {		
	private _vicNum = _trigger getVariable ["MSF_Trig_Fortify_Air_Num", 2];
	private _chance = _trigger getVariable ["MSF_Trig_Fortify_Air_Probability", 1];

	[_trigger, _vicNum, _side, _airClasses, _chance] spawn {
		params ["_trigger", "_vicNum", "_side", "_airClasses", "_chance"];
		[_trigger, _vicNum, _side, _airClasses, _chance] call MSF_fnc_CreateAreaAirAttack;
	};
};	