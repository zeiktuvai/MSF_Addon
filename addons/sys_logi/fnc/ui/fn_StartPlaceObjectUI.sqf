private _vic = createVehicleLocal ["Sign_Arrow_Green_F", screenToWorld[0.5,0.5]];

findDisplay 46 displayAddEventHandler ["KeyDown", { 
	params ["_displayOrControl", "_key", "_shift", "_ctrl", "_alt"];
	if (_key == 57) then {
		terminate (player getVariable "MSF_Logi_Place_Handel");
		deleteVehicle (player getVariable "MSF_Logi_Place_Obj");
		player setVariable ["MSF_Logi_Place_Handel", nil];
		player setVariable ["MSF_Logi_Place_Obj", nil];
		findDisplay 46 displayRemoveEventHandler ["KeyDown", _thisEventHandler];
		createVehicle ["SmokeShellGreen", screenToWorld[0.5,0.5]];
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

player setVariable ["MSF_Logi_Place_Handel", _spawnHandle];
player setVariable ["MSF_Logi_Place_Obj", _vic];
