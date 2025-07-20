#include "\z\msf\addons\main\cfg\MSF_Macros.hpp"
params [["_type", "", [""]]];

private _obj = player getVariable ["MSF_SupplySource", objNull];

switch (_type) do {
	case MSF_CARGO_AMMO;
	case MSF_CARGO_ORD;
	case MSF_CARGO_MED;
	case MSF_CARGO_FOOD: {
		[{[_type] call MSF_Logi_fnc_SpawnLogiCrate;}, [_type], _obj] call MSF_Logi_fnc_RequestLogistics;		
	};
	case "BP_Ammo";
	case "BP_Std";
	case "BP_Medical": {
		private _obj = player getVariable ["MSF_SupplySource", objNull];			
		[{[_type] call MSF_Logi_fnc_SpawnLogiBackpack;}, [_type], _obj] call MSF_Logi_fnc_RequestLogistics;		
	};
};
