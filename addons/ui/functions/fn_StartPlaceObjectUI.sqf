// This don't work.
params [["_varName", "MSF_PlacePos", [""]]];

private _vic = createVehicleLocal ["Sign_Arrow_Green_F", screenToWorld[0.5,0.5]];

private _uiHandle = [57, [false, false, false], {
	terminate (localNamespace getVariable "MSF_Local" get "MSF_Logi_Place_Handle");
	deleteVehicle (localNamespace getVariable "MSF_Local" get "MSF_Logi_Place_Obj");
	localNamespace getVariable "MSF_Local" deleteAt "MSF_Logi_Place_Handle";
	localNamespace getVariable "MSF_Local" deleteAt "MSF_Logi_Place_Obj";
	localNamespace getVariable "MSF_Local" deleteAt "MSF_Logi_Place_UIHandle";
	(localNamespace getVariable "MSF_Local" get "MSF_Logi_Place_UIHandle") call CBA_fnc_removeKeyHandler
	createVehicle ["SmokeShellGreen", screenToWorld[0.5,0.5]];
	[_varName, screenToWorld[0.5,0.5]] call MSF_fnc_SetLocalValue;
}] call CBA_fnc_addKeyHandler;

// findDisplay 46 displayAddEventHandler ["KeyDown", { 
// 	params ["_displayOrControl", "_key", "_shift", "_ctrl", "_alt"];
// 	if (_key == 57) then {
// 		terminate (player getVariable "MSF_Logi_Place_Handel");
// 		deleteVehicle (player getVariable "MSF_Logi_Place_Obj");
// 		player setVariable ["MSF_Logi_Place_Handel", nil];
// 		player setVariable ["MSF_Logi_Place_Obj", nil];
// 		findDisplay 46 displayRemoveEventHandler ["KeyDown", _thisEventHandler];
// 		createVehicle ["SmokeShellGreen", screenToWorld[0.5,0.5]];
// 	};
// }];

private _spawnHandle = [_vic] spawn
{
	params ["_vic"];
	while {true} do {
	   private _pos = screenToWorld[0.5,0.5];
	  _vic setPosASL [_pos # 0, _pos # 1, (getPosWorld player) # 2 + 0.1];
	  sleep 0.02;
	};
};

["MSF_Logi_Place_Handle", _spawnHandle] call MSF_fnc_SetLocalValue;
["MSF_Logi_Place_UIHandle", _vic] call MSF_fnc_SetLocalValue;
["MSF_Logi_Place_Obj", _vic] call MSF_fnc_SetLocalValue;
