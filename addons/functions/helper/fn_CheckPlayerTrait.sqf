params [["_unit", objNull, [objNull]], ["_trait", "", [""]]];

private _type = "";

switch (toLower _trait) do {
	case "engineer": {_type = "engineer";};
	case "medic": {_type = "attendant";};
	case "explosive": {_type = "canDeactivateMines";};
	case "uav": {_type = "uavHacker";};
};

if (_type isEqualTo "") exitWith {false};
getNumber (configOf _unit >> _type) == 1;
