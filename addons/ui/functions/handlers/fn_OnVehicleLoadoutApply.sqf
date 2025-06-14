params [["_loadout", "", [""]], ["_type", 0, [0]]];

player setVariable ["MSF_VicLoadout", [_loadout, 0] call MSF_Logi_fnc_GetSavedVehicleLoadout select 1];

_ctrl = findDisplay 46 ctrlCreate ["RscStructuredText", 62181]; 
_ctrl ctrlSetPosition [((getResolution select 2) * 0.5 * pixelW) - 50 * (pixelW * pixelGrid * 0.50), ((getResolution select 3) * 0.5 * pixelH) - 20 * (pixelH * pixelGrid * 0.50), 100 * (pixelW * pixelGrid * 0.50), 10 * (pixelH * pixelGrid * 0.50)];
_ctrl ctrlCommit 0;
_ctrl ctrlSetStructuredText parseText "<t color='#8b0000' align='center'>Place cursor on vehicle to apply loadout and press SPACE.<br/>(Any Other Key [Except movement] to cancel)</t>";

findDisplay 46 displayAddEventHandler ["KeyDown", { 
	params ["_displayOrControl", "_key", "_shift", "_ctrl", "_alt"];
	if (_key == 57) then {
		private _obj = cursorObject;
		if (_obj isKindOf "LandVehicle") then {
			[_obj, player getVariable ["MSF_VicLoadout", []]] call MSF_Persist_fnc_SetObjectCargo;
		};
	};

	switch (_key) do {
		case 17;
		case 30;
		case 31;
		case 32: {};
		default {
			private _disp = findDisplay 46;
			_disp displayRemoveEventHandler ["KeyDown", _thisEventHandler];
			ctrlDelete (_disp displayCtrl 62181);
			player setVariable ["MSF_VicLoadout", nil];
		};
	};
}];
