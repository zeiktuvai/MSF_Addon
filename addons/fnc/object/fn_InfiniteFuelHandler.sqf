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

[] spawn 
{ 		
	private _interval = getMissionConfigValue ["MSF_Vic_InfiniteFuel_Tick", 120];
	
	while { true } do 
	{
		private _vicList = (["MSF_General_InfiniteFuel"] call MSF_fnc_GetVehiclesByProperty) select { alive _x };
	
		{
			if (fuel _x < 1) then 
			{ 
				_x setFuel 1; 
			}; 
		} forEach _vicList;

		sleep _interval;
	};
};