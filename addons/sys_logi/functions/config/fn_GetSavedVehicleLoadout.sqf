params [["_key", "", [""]], ["_location", 0, [0]]];

private _items = [];
private _idx = 0;

switch (_location) do {
	case 1: {
		//TODO: Server code
	};	
	case 0;
	default {
		_items = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap] get _key;
	};
};

_items;