/*
	Author: zeik_tuvai

	Description:
		Part of MSF module.  This script is used to apply custom loadouts to player objects.
        
	Examples:
		[player] call MSF_fnc_InitializeLoadouts;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/
params ["_unit"];

if (getMissionConfigValue "MSF_Loadout_Dyn_Enable") then
{
	private ["_uniformType", "_loadouts"];

	if (_unit getVariable ["MSF_Player_Loadout_Override", false]) then {
		// unit override
		_uniformType = _unit getVariable "MSF_Player_Loadout_Uni";
		_loadouts = [typeOf _unit, _uniformType] call MSF_fnc_GetDynamicLoadoutByClass;
	} else {
		// mission level uniforms
		_uniformType = getMissionConfigValue "MSF_Loadout_NATO_Uniform";
		_loadouts = [typeOf _unit, _uniformType] call MSF_fnc_GetDynamicLoadoutByClass;
	};
	
	if (count _loadouts > 0) then
	{
		// Set initial loadout
		[_unit, _loadouts select 0] call MSF_fnc_ApplyInitialLoadout;
	};

	// Check for respawn loadout override
	if (_unit getVariable ["MSF_Player_Loadout_All", false]) then
	{		
		[_unit, _loadouts select 1, true] call MSF_fnc_ApplyRespawnInventory;
	}
	else
	{			
		if (count _loadouts > 0) then
		{	
			// Set respawn loadout
			[_unit, _loadouts select 1, false] call MSF_fnc_ApplyRespawnInventory;
		};
	};
};