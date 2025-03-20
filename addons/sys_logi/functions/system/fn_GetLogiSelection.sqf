#include "\z\msf\addons\main\cfg\MSF_Macros.hpp"
params [["_unit", objNull, [objNull]],["_type", "", [""]]];

//[player, "Acts_Accessing_Computer_Loop", 1] call ace_common_fnc_doAnimation;
//TODO: Check if available points on execution

switch (_type) do {
	case MSF_CARGO_AMMO;
	case MSF_CARGO_ORD;
	case MSF_CARGO_MED;
	case MSF_CARGO_FOOD: {
		[10, [_unit, _type], {[_args select 0, _args select 1] call MSF_Logi_fnc_SpawnLogiCrate;}, {}, "Preparing..."] remoteExec ["ace_common_fnc_progressBar", _unit];
	};		
	case "BP_Ammo";
	case "BP_Std";
	case "BP_Medical": {
		[10, [_unit, _type], {[_args select 0, _args select 1] call MSF_Logi_fnc_SpawnLogiBackpack}, {}, "Preparing..."] remoteExec ["ace_common_fnc_progressBar", _unit];
	};
	case "V_Medical";
	case "V_Ammo": {
		[10, [_unit, _type], {
			_args params ["_unit", "_type"];
			private _msfl = localNamespace getVariable "MSF_Local" getOrDefault ['Logi_Items', createHashMap];
			private _logiInfo = ((missionNamespace getVariable "MSF") get "Logi_Inventory") get _type;
			private _item = _msfl getOrDefault [_type, nil];
			
			_msfl set [_type, [_logiInfo # 1, if (isNil "_item") then {1} else {(_item # 1) + 1}]];
			(localNamespace getVariable "MSF_Local") set ["Logi_Items", _msfl];
			private _logiPoints = ((missionNamespace getVariable "MSF") get "Logi_Points");
			["MSF", "Logi_Points", _logiPoints - MSF_Logi_PointsPerVic] call MSF_fnc_SetConfigValue;		
		}, {}, "Preparing..."] remoteExec ["ace_common_fnc_progressBar", _unit];
	};	
};