ctrlShow [112, true];
ctrlShow [102, false];

private _code = {
	private _name = ctrlText 12011;
	closeDialog 0;

	if (_name in (profileNamespace getVariable ["MSF_VehicleLoadouts", createHashMap])) exitWith {
		cutText [format ["<t color='#8b0000' align='center'>ERROR: Loadout name '%1' exists already.</t>", _name], "PLAIN", 2, false, true, true];
	};

	[_name] call MSF_UI_fnc_CreateLoadout;
};

(findDisplay 6218 displayCtrl 16001) ctrlAddEventHandler ["ButtonClick", toString _code];
(findDisplay 6218 displayCtrl 16002) ctrlAddEventHandler ["ButtonClick", "ctrlShow [102, true]; ctrlShow [112, false];"];
