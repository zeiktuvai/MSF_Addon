#include "\z\msf\addons\main\cfg\MSF_Macros.hpp"

if (isServer) then {
	[] call MSF_Logi_fnc_SetupUAVSystem;
	["MSF", "Logi_Points", 9] call MSF_fnc_SetConfigValue;
	
	[true, "respawn", {
		params ["_newVeh", "_veh"];
		if (_newVeh getVariable ["MSF_Logi_isRarm", false]) then {
			[_newVeh] call MSF_Logi_fnc_SetupRearmInteraction;
		};
		if (_newVeh getVariable ["MSF_Logi_isInventory", false]) then {
			private _opts = _newVeh getVariable "MSF_Logi_InvGen";
			_opts params ["_clear", "_count", "_fill", "_weights"];
			[_newVeh, _clear, _count, _fill, _weights] call MSF_Logi_fnc_GenerateInventory;	
		};
		if (_newVeh getVariable ["MSF_Logi_isSupplyTruck", false]) then {
			[_newVeh] call MSF_Logi_fnc_InitializeSupplyTruck;
		};
	}] call BIS_fnc_addScriptedEventHandler;

	[missionNamespace, "MSF_Logi_DropRequested", {
		params ["_side", "_pos", "_type"];
		[_side, _pos, _type] call MSF_Logi_fnc_SpawnVehicleParaDrop;
	}] call BIS_fnc_addScriptedEventHandler;
	
	missionNamespace setVariable ["MSF_Shared_VehicleLoadouts", createHashMap, true];
};

if (hasInterface && ([] call BIS_fnc_getNetMode != "SinglePlayer")) then {
	[] call MSF_Logi_fnc_ShareVehicleLoadout;
};
//"a3\ui_f\data\map\vehicleicons\iconbackpack_ca.paa"
//"a3\ui_f\data\gui\rsc\rscdisplayarsenal\backpack_ca.paa"

//fuel truck
//"a3\soft_f_epc\truck_03\data\ui\truck_03_fuel_ca.paa"