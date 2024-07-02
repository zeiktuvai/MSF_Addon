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

private _infantryGroupClasses = getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Groups');
private _staticTypes = getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Turrets');
private _vicTypes = getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Vehicles');
private _armorTypes = getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Armor');

if (_trigger getVariable ["MSF_Trig_Fortify_Enable", false]) then {
	private _side = _trigger getVariable ["MSF_Trig_Fortify_Side", east];

	// building defense
	if (_trigger getVariable ["MSF_Trig_Fortify_Building_Enable", false]) then {
		private _buildingNum = _trigger getVariable ["MSF_Trig_Fortify_Building_Num", 5];
		if (!isDedicated) then {
			[_trigger, _buildingNum, _side, _infantryGroupClasses] spawn 
			{		
				params ["_trigger", "_buildingNum", "_side", "_groupTypes"];
				[_trigger, _buildingNum, _side, _groupTypes] call MSF_fnc_CreateAreaBuildingDefense;
			};
		}
		else
		{
			[_trigger, _buildingNum, _side, _infantryGroupClasses] call MSF_fnc_CreateAreaBuildingDefense;
		};
	};

	// static vics
	if (_trigger getVariable ["MSF_Trig_Fortify_Vehicle_Enable", false]) then {
		private _vicNum = _trigger getVariable ["MSF_Trig_Fortify_Vehicle_Num", 2];
		if (!isDedicated) then {
			[_trigger, _vicNum, _side, _vicTypes] spawn {
				params ["_trigger", "_vicNum", "_side", "_vicTypes"];
				[_trigger, _vicNum, _side, _vicTypes] call MSF_fnc_CreateAreaVehicleDefense;
			};
		}
		else {
			[_trigger, _vicNum, _side, _vicTypes] call MSF_fnc_CreateAreaVehicleDefense;
		};
	};

	// armored vics
	if (_trigger getVariable ["MSF_Trig_Fortify_Armor_Enable", false]) then {
		private _vicNum = _trigger getVariable ["MSF_Trig_Fortify_Armor_Num", 2];
		if (!isDedicated) then {
			[_trigger, _vicNum, _side, _armorTypes] spawn {
				params ["_trigger", "_vicNum", "_side", "_armorTypes"];
				[_trigger, _vicNum, _side, _armorTypes, true] call MSF_fnc_CreateAreaVehicleDefense;
			};
		}
		else {
			[_trigger, _vicNum, _side, _armorTypes, true] call MSF_fnc_CreateAreaVehicleDefense;
		};
	};

	// static turrets
	if (_trigger getVariable ["MSF_Trig_Fortify_Static_Enable", false]) then {
		private _vicNum = _trigger getVariable ["MSF_Trig_Fortify_Static_Num", 2];
		if (!isDedicated) then {
			[_trigger, _vicNum, _side, _staticTypes] spawn {
				params ["_trigger", "_vicNum", "_side", "_staticTypes"];
				[_trigger, _vicNum, _side, _staticTypes, false, true] call MSF_fnc_CreateAreaVehicleDefense;
			};
		}
		else
		{
			[_trigger, _vicNum, _side, _staticTypes, false, true] call MSF_fnc_CreateAreaVehicleDefense;
		};
	};
};
