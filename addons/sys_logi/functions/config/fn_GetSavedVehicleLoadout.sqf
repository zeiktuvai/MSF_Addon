params [["_key", "", [""]], ["_location", 0, [0]]];

switch (_location) do {
	case 1: {
		
	};	
	case 0;
	default {
		profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap] get _key;		
	};
};
