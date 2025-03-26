if (isServer) then {
	private _handle = [] spawn {
		private _fuelTick = 1;
		
		while {true} do {
			//if (MSF_AU_Enemy_Plane) then {[] call MSF_fnc_AntistasiEnemyPlanes;};

			
			private _vics = ["FuelHandlerVics"] call MSF_fnc_GetConfigValue;
			
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

	missionNamespace setVariable ["MSFHandlerID", _handle];
};

// Use MSF array to register handlers
// Then get the handlers that are registered and execute them based on code.
// Maybe create a game logic per handler that needs more than 1 second as its interval?
// missionNamespace but only on the server? 


// if (isServer) then {
// 	private _handle = [] spawn {
// 		private _fuelTick = 1;
		
// 		while {true} do {
// 			if (MSF_AU_Enemy_Plane) then {[] call MSF_fnc_AntistasiEnemyPlanes;};

// 			private _vics = missionNamespace getVariable "MSF" getOrDefault ["FuelHandlerVics", []];
// 			if (count _vics > 0 && _fuelTick >= MSF_Fuel_Tick) then {
// 				[_vics] call MSF_fnc_InfiniteFuelHandler;
// 				_fuelTick = 1;
// 			}
// 			else
// 			{
// 				_fuelTick = _fuelTick + 1;
// 			};

// 			sleep 1;
// 		};
// 	};

// 	missionNamespace setVariable ["MSFHandlerID", _handle];
// };