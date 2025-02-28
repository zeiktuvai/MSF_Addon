params [["_side", east, [east]]];

format ["'LandVehicle' in ([_x, true] call BIS_fnc_returnParents) && getNumber (_x >> 'attendant') == 1 && getNumber (_x >> 'side') == %1", _side call BIS_fnc_sideID] configClasses (configFile >> "CfgVehicles")



//spawn parachute vic
params [["_side", east, [east]], ["_pos", [], [[]]]];

private _height = 200;
private _vics = format ["'LandVehicle' in ([_x, true] call BIS_fnc_returnParents) && getNumber (_x >> 'attendant') == 1 && getNumber (_x >> 'side') == %1", _side call BIS_fnc_sideID] configClasses (configFile >> "CfgVehicles");

private _spawnPos = [_pos select 0, _pos select 1, _height];
private _vic = createVehicle [configName selectRandom _vics, _spawnPos];
private _para = "B_parachute_02_F" createVehicle [0,0,0];

_para setPosASL (getPosASL _vic);
_vic attachTo [_para, [0,0,0]];

[_vic, _para] spawn {
	params ["_vic", "_para"];
	
	while {(getPosATL _vic) # 2 >= 2} do {
		_para setVelocity [0, 0, (velocity _para) # 2];
		_para setVectorUp [0,0,1];
		sleep 0.5;
	};
		
	detach _vic;
};

//place smoke code
private _pos = screenToWorld[0.5,0.5];
_veh = [["SmokeShellGreen","a3\weapons_f\ammo\smokegrenade_green_throw.p3d",-1,0,[],[],0,[],false,false],
[_pos # 0, _pos # 1, (getPosWorld player) # 2 + 0.1], 0, false, true, true] call BIS_fnc_createSimpleObject;

_handl = findDisplay 46 displayAddEventHandler ["KeyDown", { 
	params ["_displayOrControl", "_key", "_shift", "_ctrl", "_alt"];
	if (_key == 57) then {
		terminate (player getVariable "MSF_Logi_Place_Handel");
		deleteVehicle (player getVariable "MSF_Logi_Place_Obj");
		player setVariable ["MSF_Logi_Place_Handel", nil];
		player setVariable ["MSF_Logi_Place_Obj", nil];
		findDisplay 46 displayRemoveEventHandler ["keyDown", _thisEventHandler];
		createVehicle ["SmokeShellGreen", screenToWorld[0.5,0.5]];
	};
}];

_hndl = [_veh] spawn
{
	params ["_veh"];
	while {true} do {
	   private _pos = screenToWorld[0.5,0.5];
	  _veh setPosASL [_pos # 0, _pos # 1, (getPosWorld player) # 2 + 0.1];
	  sleep 0.05;
	};
};

player setVariable ["MSF_Logi_Place_Handel", _hndl];
player setVariable ["MSF_Logi_Place_Obj", _veh];