params [["_obj", objNull, [objNull]]];

private _objs = position _obj nearObjects ["AreaMarker_01_F", 15];

if (count _objs == 0) then {
	private _newObj = createVehicle ["AreaMarker_01_F", position _obj, [], 20];
	_newObj setObjectScale 0.4;
	createVehicle ["ace_flags_carrier_black", position _newObj, [], 0, "CAN_COLLIDE"];
	systemChat "No Supply Point found, spawning one.";
	position _newObj;
}
else
{
	position (_objs # 0);
};

