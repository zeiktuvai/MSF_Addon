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
		[{[_unit, _type] call MSF_Logi_fnc_SpawnLogiBackpack;}, [_unit, _type], _obj] call MSF_Logi_fnc_RequestLogistics;
		
	};
	// case "V_Medical";
	// case "V_Supply": {
	// 	if ([] call MSF_Logi_fnc_CheckAvailablePoints) then {
	// 		[10, [_unit, _type], {
	// 			_args params ["_unit", "_type"];
	// 			private _msfl = localNamespace getVariable "MSF_Local" getOrDefault ['Logi_Items', createHashMap];
	// 			private _item = _msfl getOrDefault [_type, nil];
				
	// 			_msfl set [_type, [_name, if (isNil "_item") then {1} else {(_item # 1) + 1}]];
	// 			(localNamespace getVariable "MSF_Local") set ["Logi_Items", _msfl];
	// 			private _logiPoints = ((missionNamespace getVariable "MSF") get "Logi_Points");
	// 			["MSF", "Logi_Points", _logiPoints - MSF_Logi_PointsPerVic] call MSF_fnc_SetConfigValue;
	// 		}, {}, "Preparing..."] remoteExec ["ace_common_fnc_progressBar", _unit];
	// 	};		
	// };	
};
