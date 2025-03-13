params [["_type", "", [""]]];

private _vic = createVehicleLocal ["Sign_Arrow_Green_F", screenToWorld[0.5,0.5]];

findDisplay 46 displayAddEventHandler ["KeyDown", { 
	params ["_displayOrControl", "_key", "_shift", "_ctrl", "_alt"];
	if (_key == 57) then {
		terminate (localNamespace getVariable "MSF_Local" get "MSF_Logi_Place_Handle");
		deleteVehicle (localNamespace getVariable "MSF_Local" get "MSF_Logi_Place_Obj");
		findDisplay 46 displayRemoveEventHandler ["KeyDown", _thisEventHandler];
		createVehicle ["SmokeShellGreen", screenToWorld[0.5,0.5]];

		private _queue = missionNamespace getVariable "MSF" get "Logi_Queue";
		[_queue, [localNamespace getVariable "MSF_Local" get "MSF_Logi_Place_Type", screenToWorld[0.5,0.5], side player], 0] call BIS_fnc_priorityQueue_PushItem;

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

["MSF_Logi_Place_Handle", _spawnHandle] call MSF_fnc_SetLocalValue;
["MSF_Logi_Place_Obj", _vic] call MSF_fnc_SetLocalValue;
["MSF_Logi_Place_Type", _type] call MSF_fnc_SetLocalValue;