params [["_key", "", [""]], ["_location", [0], [[]]]];

switch (_location select 0) do {
	case 1: {
		private _sel = _location;
		_sel resize 2;
		private _uid = tvData [1500, _sel];
		missionNamespace getVariable "MSF_Shared_VehicleLoadouts" get _uid get "Loadouts" get _key;
	};	
	case 0;
	default {
		profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap] get _key;		
	};
};
