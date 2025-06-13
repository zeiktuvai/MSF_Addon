private _vics = ["FuelHandlerVics"] call MSF_fnc_GetConfigValue;
			
if (count _vics > 0) then {
	{
		if (fuel _x < 1) then 
		{ 
			[_x, 1] remoteExec ["setFuel", _x];
		}; 
	} forEach _vics;	
};
