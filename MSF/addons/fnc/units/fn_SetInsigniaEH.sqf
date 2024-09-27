[_unit] call MSF_fnc_ApplyInsignia;

_unit addMPEventHandler ["MPRespawn", {
		params ["_unit"]; 
	
		[_unit] spawn {
			params ["_unit"]; 

			uiSleep 1;
			[_unit] call MSF_fnc_ApplyInsignia;  
		};
}];