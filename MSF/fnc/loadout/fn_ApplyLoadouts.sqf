params ["_unit", "_uniform"];

private _playerClass = typeOf _unit;

// Get class loadouts
private _playerLoadout = [_playerClass, _uniform] call MSF_fnc_GetDynamicLoadoutByClass;

// Apply Automatic Loadout
if (count _playerLoadout > 0) then
{
	// Set initial loadout
	[_playerObject, _playerLoadout select 0] call MSF_fnc_ApplyInitialLoadout;
};

// Apply Automatic Loadout
if (count _playerLoadout > 0) then
{	
	// Set respawn loadout
	[_playerObject, _playerLoadout select 1] call TFY_fnc_ApplyRespawnInventories;
};