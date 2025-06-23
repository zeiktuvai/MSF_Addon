params [["_loadout", "", [""]], ["_type", 0, [0]]];

switch (_type) do {
	case 0: {
		[_loadout] spawn {
			params ["_loadout"];
			private _local = profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap];
			if (_loadout in _local) then {
				private _result = [format ["Are you sure you want to delete %1?", _loadout], "Delete", true, true] call BIS_fnc_guiMessage;
				if (_result) then {
					_local deleteAt _loadout;
					[] call MSF_UI_fnc_OnVehicleLoadoutLoad;
				};
			};
		};
	};
	case 1: {};
};
