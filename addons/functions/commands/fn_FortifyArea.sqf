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
_vals params ["_side", "_building", "_bldgStr", "_bldgProb", "_vehicle", "_vicNum", "_vicFill", "_vicProb", "_armor", "_armorNum", "_armorProb",
	"_static", "_staticNum", "_staticProb", "_air", "_airNum", "_airProb", "_logicArea", "_intelProvider", "_units"];

private _classes = ["unit", _side] call MSF_fnc_GetConfigData;

[_units, true] call MSF_fnc_ShowHideObjects;

// building defense
if (_building) then {
	[_trigger, _bldgStr, _side, _classes get "Units", _bldgProb, _logicArea, _intelProvider] spawn 
	{		
		params ["_trigger", "_bldgStr", "_side", "_infantryGroupClasses", "_bldgProb", "_logicArea", "_intelProvider"];
		private _units = [_trigger, _bldgStr, _side, _infantryGroupClasses, _bldgProb, _logicArea] call MSF_fnc_SpawnAreaBuildingDefense;

		// intel system provider
		if (count _intelProvider > 0) then
		{
			_intelProvider params ["_intelP", "_interactC", "_intelC"];

			if (_intelP) then {
				{
					if ([_interactC] call MSF_fnc_CalculateProbability) then {
						[_x, _intelC] call MSF_Intel_fnc_AddIntelInteraction;
					};		
				} forEach _units;		
			};
		};
	};	
};

// static vics
if (_vehicle) then {
	[_trigger, _vicNum, _side, _classes get "Vehicles", _classes get "Units", _vicProb, _logicArea, _vicFill] spawn {
		params ["_trigger", "_vicNum", "_side", "_vicTypes", "_fillUnits", "_vicProb", "_logicArea", "_vicFill"];
		[_trigger, _vicNum, _side, _vicTypes, _fillUnits, 0, _vicProb, _logicArea, _vicFill] call MSF_fnc_SpawnAreaVehicleDefense;
	};
};

// armored vics
if (_armor) then {
	[_trigger, _armorNum, _side, _classes get "Armor", _armorProb, _logicArea] spawn {
		params ["_trigger", "_armorNum", "_side", "_armorTypes", "_armorProb", "_logicArea"];
		[_trigger, _armorNum, _side, _armorTypes, [], 1, _armorProb, _logicArea] call MSF_fnc_SpawnAreaVehicleDefense;
	};
};

// static turrets
if (_static) then {
	[_trigger, _staticNum, _side, _classes get "Turrets", _staticProb, _logicArea] spawn {
		params ["_trigger", "_staticNum", "_side", "_staticTypes", "_staticProb", "_logicArea"];
		[_trigger, _staticNum, _side, _staticTypes, [], 2, _staticProb, _logicArea] call MSF_fnc_SpawnAreaVehicleDefense;
	};
};

// Air units
if (_air) then {		
	[_trigger, _airNum, _side, _classes get "Air", _airProb] spawn {
		params ["_trigger", "_airNum", "_side", "_airClasses", "_airProb"];
		[_trigger, _airNum, _side, _airClasses, _airProb] call MSF_fnc_SpawnAreaAirAttack;
	};
};	
