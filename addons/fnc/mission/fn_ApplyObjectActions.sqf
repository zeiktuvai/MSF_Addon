if(isServer) then 
{
	private _objects = ["MSF_Gen_prog_en"] call MSF_fnc_GetObjectsByProperty;

	{
		[
			_x,
			_x getVariable "MSF_Gen_prog_time",
			_x getVariable "MSF_Gen_prog_name",
			_x getVariable "MSF_Gen_prog_action",
			_x getVariable "MSF_Gen_prog_fail",
			_x getVariable "MSF_Gen_prog_repeat"
		] call MSF_fnc_SetTimeBasedInteraction;
	} forEach _objects;
};