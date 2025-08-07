params [["_obj", objNull, [objNull]]];

private _objs = position _obj nearObjects ["AreaMarker_01_F", 20];

if (count _objs == 0) then {
	private _newObj = createVehicle ["AreaMarker_01_F", position _obj, [], 20];
	private _pos = position _newObj;
	_newObj setObjectScale 0.6;
	createVehicle ["ace_flags_carrier_black", _pos, [], 0, "CAN_COLLIDE"];
	createVehicle ["ACE_Chemlight_IR_Dummy", [_pos # 0, (_pos # 1) + 2, _pos # 2], [], 0, "CAN_COLLIDE"];
	systemChat "No Supply Point found, spawning one.";
	position _newObj;
}
else
{
	position (_objs # 0);
};

//Chemlight_red
