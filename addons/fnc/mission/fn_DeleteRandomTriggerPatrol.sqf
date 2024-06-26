/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script deletes patrols in a the designated trigger area.
        
	Examples:
		[Trigger Objct] call MSF_fnc_DeleteRandomTriggerPatrol;

	Function Ver 1.0
	Implemented in: MSF Addon v1.5.2
*/
params ["_trigger"];

if (_trigger getVariable ["MSF_Trig_Patrol_Despawn", false]) then {
	private _groups = _trigger getVariable ["MSF_Patrol_Group_ID", []];

	if (count _groups > 0) then {
		{
			private _units = units _x;

			{
				if (_x isKindOf "Land Vehicle") then {
					deleteVehicleCrew _x;
				};

				deleteVehicle _x;
			} forEach _units;
		} forEach _groups;
	};

	_trigger setVariable ["MSF_Patrol_Group_ID", []];
};