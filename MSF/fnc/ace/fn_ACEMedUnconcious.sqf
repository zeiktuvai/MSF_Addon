/*
	Author: zeik_tuvai

	Description:
		Part of MSF ACE Extensions.  This script works with the MSF Settings area in addon options for enabling/disabling ACE
		Medical unconciousness.

	Parameter(s):
        object - Unit object (player or unit).
        
	Examples:
		[player] call TFY_fncACE_MedicalUnconcious;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/

if (isServer) then {
	{
		private _unit = _x;

		["ace_unconscious", { 
			params ["_unit", "_state"]; 

			if (player isEqualTo _unit && _state) then
			{         
				if (!MSF_ACE_Extensions_Unconcious) then {_unit setDamage 1;};
			};
		}] call CBA_fnc_addEventHandler;
	} forEach allPlayers;
};

