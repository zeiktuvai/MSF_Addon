params [["_objType", "", [""]], ["_scale", 1, [1]]];

private _placeHolder = createSimpleObject [_objType, screenToWorld[0.5,0.5], true];
//createVehicleLocal [_objType, screenToWorld[0.5,0.5]];

findDisplay 46 displayAddEventHandler ["KeyDown", { 
	params ["_displayOrControl", "_key", "_shift", "_ctrl", "_alt"];
	if (_key == 57) then {
		terminate (localNamespace getVariable "MSF_Local" get "MSF_Logi_Place_Handle");
		//"MSFLogi_Controls" cutFadeOut 0;		
		deleteVehicle (player getVariable "MSF_Logi_Place_Obj");
		findDisplay 46 displayRemoveEventHandler ["KeyDown", _thisEventHandler];
		private _obj = createVehicle [player getVariable "MSF_Logi_Place_Type", screenToWorld[0.5,0.5], [], 0, "CAN_COLLIDE"];
		if (_scale != 1) then {_obj setObjectScale _scale};
		player setVariable ["MSF_Logi_Place_Obj", nil];
		player setVariable ["MSF_Logi_Place_Type", nil];
		player setVariable ["MSF_Logi_Place_Handle", nil];
	};
}];

private _spawnHandle = [_placeHolder] spawn
{
	params ["_placeHolder"];
	while {true} do {
	   private _pos = screenToWorld[0.5,0.5];
	  _placeHolder setPosASL [_pos # 0, _pos # 1, (getPosWorld player) # 2 + 0.1];
	  sleep 0.02;
	};
};

player setVariable ["MSF_Logi_Place_Obj", _placeHolder];
player setVariable ["MSF_Logi_Place_Type", _objType];
player setVariable ["MSF_Logi_Place_Handle", _spawnHandle];


//private _reqType = localNamespace getVariable "MSF_Local" get "MSF_Logi_Place_Type";
//[missionNamespace, "MSF_Logi_DropRequested", [side player, screenToWorld[0.5,0.5], _reqType]] remoteExec ["BIS_fnc_callScriptedEventHandler", 2];


// "MSFLogi_Controls" cutRsc ["MSF_Hud_LogiControls", "PLAIN", -1, false, true];
// ["MSF_Logi_Place_Handle", _spawnHandle] call MSF_fnc_SetLocalValue;
//"Sign_Arrow_Green_F"