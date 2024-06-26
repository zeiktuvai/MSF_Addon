params ["_obj", "_value"];

if (_value == true) then {
	if (triggerArea _obj select 0 == 0 && triggerArea _obj select 1 == 0) then {
		["Trigger has no area (size), expand trigger or no groups will spawn.", 1, 10, true] call BIS_fnc_3DENNotification;
	};
};