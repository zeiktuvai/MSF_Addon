params [["_type", "", [""]]];

private _vic = createVehicleLocal ["Sign_Arrow_Green_F", screenToWorld[0.5,0.5]];

findDisplay 46 displayAddEventHandler ["KeyDown", { 
	params ["_displayOrControl", "_key", "_shift", "_ctrl", "_alt"];
	if (_key == 57) then {
		terminate (localNamespace getVariable "MSF_Local" get "MSF_Logi_Place_Handle");
		"MSFLogi_Controls" cutFadeOut 0;
		deleteVehicle (localNamespace getVariable "MSF_Local" get "MSF_Logi_Place_Obj");
		findDisplay 46 displayRemoveEventHandler ["KeyDown", _thisEventHandler];
		createVehicle ["SmokeShellGreen", screenToWorld[0.5,0.5]];

		private _reqType = localNamespace getVariable "MSF_Local" get "MSF_Logi_Place_Type";
		[missionNamespace, "MSF_Logi_DropRequested", [side player, screenToWorld[0.5,0.5], _reqType]] remoteExec ["BIS_fnc_callScriptedEventHandler", 2];

		localNamespace getVariable "MSF_Local" deleteAt "MSF_Logi_Place_Obj";
		localNamespace getVariable "MSF_Local" deleteAt "MSF_Logi_Place_Handle";
		localNamespace getVariable "MSF_Local" deleteAt "MSF_Logi_Place_Type";
	};
}];

private _spawnHandle = [_vic] spawn
{
	params ["_vic"];
	while {true} do {
	   private _pos = screenToWorld[0.5,0.5];
	  _vic setPosASL [_pos # 0, _pos # 1, (getPosWorld player) # 2 + 0.1];
	  sleep 0.02;
	};
};

"MSFLogi_Controls" cutRsc ["MSF_Hud_LogiControls", "PLAIN", -1, false, true];
["MSF_Logi_Place_Handle", _spawnHandle] call MSF_fnc_SetLocalValue;
["MSF_Logi_Place_Obj", _vic] call MSF_fnc_SetLocalValue;
["MSF_Logi_Place_Type", _type] call MSF_fnc_SetLocalValue;
