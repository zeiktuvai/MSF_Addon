private _handle = [] spawn {
	private _fuelTick = 1;
	
	while {true} do {
		if (MSF_AU_Enemy_Plane) then {[] call MSF_fnc_AntistasiEnemyPlanes;};

		private _vics = missionNamespace getVariable "MSF" getOrDefault ["FuelHandlerVics", []];
		if (count _vics > 0 && _fuelTick >= MSF_Fuel_Tick) then {
			[_vics] call MSF_fnc_InfiniteFuelHandler;
			_fuelTick = 1;
		}
		else
		{
			_fuelTick = _fuelTick + 1;
		};

		sleep 1;
	};
};

["MSF", "MSFHandlerID", _handle] call MSF_fnc_SetConfigValue;