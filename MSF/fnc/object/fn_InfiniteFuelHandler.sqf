/*
	Author: zeik_tuvai

	Description:
		This script spawns a handler that checks for vehicles with infinite fuel enabled, and as long as they are alive it will refuel them to
		full every 300 seconds.  It will not run if no vehicles are enabled for infinite fuel and If all vehicles die, then it no longer runs.
        
	Examples:
		[] call MSF_fnc_InfiniteFuelHandler;

	Function Ver 1.0
	Implemented in: MSF Addon v1.0
*/


private _vics = ["MSF_Helper_InfFuel_Enable"] call MSF_fnc_GetVehiclesByProperty;

if (count _vics > 0) then {
	[_vics] spawn 
	{ 
		params ["_vicList"];

		while { count (_vicList select { alive _x }) > 0 } do 
		{
			{
				if (fuel _x < 1) then 
				{ 
					_x setFuel 1; 
				}; 
			} forEach _vicList;
			systemChat format ["%1 vics alive, sleeping", count (_vicList select { alive _x }) ];
			sleep 300;
		};
	};
};