/*
	Author: zeik_tuvai

	Description:
		This MSF function adds an event handler to each configured vehicle to reduce damage dealt by a certain percent.
	
	Examples:
		[] call MSF_fnc_SetVehicleDamageReduction;

	Function Ver 1.1
	Implemented in: MSF Addon v1.5
*/

// local needs to be run on all computers... and then it can handle the movement between systems.  so maybe back into initplayer.
private _vics = ["MSF_General_DmgReduction", 0] call MSF_fnc_GetVehiclesByPropertyValue;

{
	{[_x] call MSF_fnc_AddVehicleDamageHandler;} forEach _vics;
	// _x addEventHandler ["Local", {
	// 	params ["_entity", "_isLocal"];
		
	// 	if (_islocal == true) then {		 	 
			
	// 		["Locality Change detected, removing handlers"] remoteExec ["systemChat"];
	// 		[_vehicle, "HandleDamage"] remoteExec ["removeAllEventHandlers", _vehicle];

	// 		["Adding Handlers";
	// 		[_x] call MSF_fnc_AddVehicleDamageHandler;
	// 		] remoteExec ["addEventHandler", _vehicle];
	// 	};
	// }];
} forEach _vics;