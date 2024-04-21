params ["_unit"];

if (getMissionConfigValue "MSF_Multi_RoP") then
{
	[side _unit, _unit] call BIS_fnc_addRespawnPosition;
};