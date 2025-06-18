params [["_key", "", [""]], ["_location", 0, [0]], ["_itemsOnly", true, [true]]];

private _return = [];
private _idx = 0;

switch (_location) do {
	case 1: {
		
	};	
	case 0;
	default {
		private _item = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap] get _key;
		_return = if (_itemsOnly) then {_item # 0} else {_item};
	};
};

_return;