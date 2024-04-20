/*
	Author: zeik_tuvai

	Description:
		Sets the unit respawn loadouts based on provided names from CfgRespawnInventory.

	Parameter(s):
        object - Unit object (player or unit).
        array - Array of loadout names from CfgRespawnInventory (string)
		bool - Apply all inventories

	Examples:
		[player, loadouts, applyAll] call MSF_fnc_ApplyRespawnInventory;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/

params ["_unit", "_respawn", "_applyAll"];

_applyAll = false;

if (_applyAll) then
{
    private _configClasses = "true" configClasses (missionConfigFile >> "CfgRespawnInventory");
    private _loadouts = _configClasses apply { configName _x };
    private _ld = _loadouts select { !(["_N", _x] call BIS_fnc_inString) };
    
    {
        [_unit, _x] call BIS_fnc_addRespawnInventory;
    } forEach _ld;

}
else
{
    {
        [_unit, _x] call BIS_fnc_addRespawnInventory;
    } forEach _respawn;
};