/*
	Author: zeik_tuvai

	Description:
		Part of MSF Persistence module.  This script is used to get vehicle information for storage and retrieval later in another
		mission.

	Parameter(s):
        object - Unit object (vehicle).
        
	Examples:
		[unit] call MSF_Persist_fnc_GetVehicleData;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/


params ["_unit"];

// declare vars
private _vehicleType = typeOf _unit;		
private _vehicleName = vehicleVarName _unit;	
private _inventory = [];
private _damage = [];
private _look = [];
private _ammo = [];
private _fuel = -1;
private _isAlive = true;
private _loc = [];
private _aceRefuel = -1;
private _aceRearm = -1;

// get damage 
_damage = [_unit] call MSF_Persist_fnc_GetObjectDamage;
_isAlive = [true, false] select (_damage == -1);

if (_unit getVariable "MSF_Persist_isLocEnable") then 
{
	_loc pushBack getPosATL _unit;
	_loc pushBack getDir _unit;
};

if (_isAlive) then {
	// get inventory
	_inventory = [_unit] call MSF_Persist_fnc_GetObjectCargo;


	// get vehicle look
	if (_unit getVariable "MSF_Persist_isLookEnable") then {
		_look = [_unit] call BIS_fnc_getVehicleCustomization;		
	};

	// get vehicle ammo
	if (_unit getVariable "MSF_Persist_isAmmoEnable") then {
		_ammo = magazinesAmmo _unit;		
	};

	// get vehicle fuel
	if (_unit getVariable "MSF_Persist_isFuelEnable") then {
		_fuel = fuel _unit;			
	};
};

if (_unit getVariable "MSF_Persist_isACERefuel") then {		
	_aceRefuel = [_unit] call ace_refuel_fnc_getFuel;
};

if (_unit getVariable "MSF_Persist_isACERearm") then {
	_aceRearm = [_unit] call ace_rearm_fnc_getSupplyCount;
};

// Set return variable
_return = [_vehicleName, _vehicleType, _damage, _inventory, _look, _ammo, _fuel, _isAlive, _loc, _aceRefuel, _aceRearm];

// return data
_return;
