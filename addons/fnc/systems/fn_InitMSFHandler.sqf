private _handle = [] spawn {
	while {true} do {
		if (MSF_AU_Enemy_Plane) then {[] call MSF_fnc_AntistasiEnemyPlanes;};

		sleep 1;
	};
};

["MSF", "MSFHandlerID", _handle] call MSF_fnc_SetConfigValue;