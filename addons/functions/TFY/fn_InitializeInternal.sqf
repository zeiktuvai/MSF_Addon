params ["_postInit", "_didJIP"];

if (!isDedicated) then {
	[_didJIP] spawn {
		params ["_didJIP"];

		sleep 5;
		[player, _didJIP] remoteExec ["TFY_fnc_Setup", 2];
	};
};
