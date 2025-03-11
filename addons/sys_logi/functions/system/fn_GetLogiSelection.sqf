#include "\z\msf\addons\main\cfg\MSF_Macros.hpp"
params [["_unit", objNull, [objNull]],["_type", "", [""]]];

systemChat format ["Unit: %1 Type: %2", _unit, _type];
//[player, "Acts_Accessing_Computer_Loop", 1] call ace_common_fnc_doAnimation;

// systemChat str (local _unit);
switch (_type) do {
	case MSF_CARGO_AMMO;
	case MSF_CARGO_ORD;
	case MSF_CARGO_MED;
	case MSF_CARGO_FOOD: {
		[10, [_unit, _type], {[_args select 0, _args select 1] call MSF_Logi_fnc_SpawnLogiCrate;}, {}, "Preparing..."] remoteExec ["ace_common_fnc_progressBar", _unit];
	};		
	case "BP_Ammo";
	case "BP_Medical": {
		[10, [_unit, _type], {[_args select 0, _args select 1] call MSF_Logi_fnc_SpawnLogiBackpack}, {}, "Preparing..."] remoteExec ["ace_common_fnc_progressBar", _unit];
	};	
};