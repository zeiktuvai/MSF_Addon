params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];


		private _area = [_x] call MSF_fnc_GetAreaRadius;
		private _activ = triggerActivation _x;
		private _height = if (_x getVariable ["MSF_Trig_Fortify_HeightLimit", false]) then { -1 } else { 50 };
		private _activationSize = _x getVariable ["MSF_Trig_Fortify_ActivationSize", [300,300]];
		private _onStart = _x getVariable ["MSF_Trig_Fortify_SpawnImmediately", false];
		private _onActivated = (triggerStatements _x) select 1;

		_x setTriggerStatements[_statement select 0, "[thisTrigger] remoteExec [""MSF_fnc_FortifyArea"", 2]; " + (_onActivated), _statement select 2];
