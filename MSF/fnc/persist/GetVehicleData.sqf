/*
	Author: zeik_tuvai

	Description:
		Part of MSF Persistence module.  This script is used to get vehicle information for storage and retrieval later in another
		mission.

	Parameter(s):
        object - Unit object (vehicle).
        
	Examples:
		[unit] call GetVehicleData.sqf;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/


params ["_unit"];

// declare vars
private _vehicleType = typeOf _unit;		
private _vehicleName = vehicleVarName _unit;
private _containers = everyContainer _unit; 	
private _inventory = [];
private _damage = [];
private _look = [];
private _ammo = [];
private _fuel = -1;
private _isAlive = true;
private _deathLoc = [];
private _aceSupply = [];

// get damage 
if (_unit getVariable "MSF_Persist_isDamageEnable") then {
	if (damage _unit == 1) then {
		_isAlive = false;
		if (MSF_Persist_Data_Death) then 
		{
			_deathLoc pushBack getPosATL _unit;
			_deathLoc pushBack getDir _unit;
		};
	}
	else 
	{
		private ["_hitC","_cfg","_PartN","_HitP"];
		_hitC = (count ((configFile >> "CfgVehicles" >> _vehicleType >> "HitPoints") call Bis_fnc_getCfgSubClasses)) - 1; 

		for "_i" from 0 to _hitC do { 
			_cfg = (configFile >> "CfgVehicles" >> _vehicleType >> "HitPoints") select _i; 
			_PartN = getText(_cfg >> "name");
			_HitP = _unit getHit _PartN;
			_damage pushBack [_i,[_PartN,_HitP]];
		}; 
	};	
};

if (_isAlive) then {
	// get inventory
	if (_unit getVariable "MSF_Persist_isInvEnable") then {
		private _items = itemCargo _unit select {
			_item = _x; 
			_containers findIf 
			{ 
				_x select 0 == _item 
			} 
			isEqualTo -1 
			};

		private _vicContents = [ 
			_items call BIS_fnc_consolidateArray,
			magazinesAmmoCargo _unit call BIS_fnc_consolidateArray,
			weaponsItemsCargo _unit call BIS_fnc_consolidateArray
		];

		_containerCont = [];

		{
			_x params[ "_cType", "_cont" ];
			
			_containerCont pushBack [ 
				_cType,
				[
					itemCargo _cont call BIS_fnc_consolidateArray,
					magazinesAmmoCargo _cont call BIS_fnc_consolidateArray,
					weaponsItemsCargo _cont call BIS_fnc_consolidateArray
				]
			];
		} forEach _containers;

		_inventory pushBack [ _vicContents, _containerCont ];		
	};


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
	private _fuelsupply = [_unit] call ace_refuel_fnc_getFuel; 	
	_aceSupply pushBack _fuelsupply;
};

if (_unit getVariable "MSF_Persist_isACERearm") then {
	private _ammosupply = [_unit] call ace_rearm_fnc_getSupplyCount;
	_aceSupply pushBack _ammosupply;
};

// Set return variable
_return = [_vehicleName, _vehicleType, _damage, _inventory, _look, _ammo, _fuel, _isAlive, _deathLoc, _aceSupply];

// return data
_return;