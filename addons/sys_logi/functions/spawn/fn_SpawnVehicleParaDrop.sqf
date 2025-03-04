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