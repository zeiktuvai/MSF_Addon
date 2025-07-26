params [["_side", west, [west]], ["_pos", [], [[]]], ["_type", "", [""]], ["_height", 200, [0]]];

private _obj = objNull;
private _spawnPos = [_pos select 0, _pos select 1, _height];

switch (_type) do {
	case "Ambulance": {
		private _vics = format ["'LandVehicle' in ([_x, true] call BIS_fnc_returnParents) && getNumber (_x >> 'attendant') == 1 && getNumber (_x >> 'side') == %1", _side call BIS_fnc_sideID] configClasses (configFile >> "CfgVehicles");
		_obj = createVehicle [configName selectRandom _vics, _spawnPos];
		[_obj, true, 0, true, [0,0,0,0,1,0]] call MSF_Logi_fnc_GenerateInventory;
	 };
	case "SupplyDepot": {
		_obj = createVehicle ["MSF_SupplyDepot", _spawnPos];		
	};
	case "FuelTank": {
		_obj = createVehicle [selectRandom ["B_Slingload_01_Fuel_F", "Land_Pod_Heli_Transport_04_fuel_F"], _spawnPos];
	};
	case "VicAmmo": {
		_obj = createVehicle [selectRandom ["Box_IND_AmmoVeh_F", "Box_East_AmmoVeh_F", "Box_EAF_AmmoVeh_F", "Box_NATO_AmmoVeh_F"], _spawnPos];
	};
};

private _para = "B_parachute_02_F" createVehicle [0,0,0];
_para setPosASL (getPosASL _obj);
_obj attachTo [_para, [0,0,0]];

[_obj, _para] spawn {
	params ["_obj", "_para"];
	
	while {(getPosATL _obj) # 2 >= 2} do {
		_para setVelocity [0, 0, (velocity _para) # 2];
		_para setVectorUp [0,0,1];
		sleep 0.5;
	};
		
	detach _obj;
};
