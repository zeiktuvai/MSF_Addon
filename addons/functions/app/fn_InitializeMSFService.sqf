if (isServer) then {
	missionNamespace setVariable ["MSFServiceRunner", true];

	[] spawn {
		while {missionNamespace getVariable ["MSFServiceRunner", true]} do {
			private _msfw = missionNamespace getVariable "MSF_Workers";

			{
				_y params ["_key", "_code", "_interval", "_time"];
				
				if (_interval == 0) then {
					call _code;
				} else {
					if (_time == 0 || time >= _time) then {
						call _code;
						_msfw set [_key, [_key, _code, _interval, time + _interval]];
					};				
				};
			} forEach _msfw;
			
			sleep 1;		
		};
	};
	
};

// Use MSF array to register handlers
// Then get the handlers that are registered and execute them based on code.
// Maybe create a game logic per handler that needs more than 1 second as its interval?
// missionNamespace but only on the server? 
//[key, [key, code, interval, time]]