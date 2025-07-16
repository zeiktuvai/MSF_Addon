/*
	Author: zeik_tuvai

	Description:
		Part of MSF Persistence module.  This script is used to set vehicle information retrieved from a previous mission in a
		series.

	Parameter(s):
        object - Unit object (vehicle).
		string - Unit variable name.
		string - Unit type.
		array of arrays - [["Object name", number]].
		array of arrays - [[num, ["part name", damage value]]].
		array of arrays - ["item", val].
		array of arrays - [["magazine", ammo]].
		int - fuel value.
		bool - is vehicle dead or alive.
		array of arrays - [[123,456,789],0.213434].
        
	Examples:
		[unit, type, contents, damage, look, ammo, fuel, isAlive, loc, refuel, rearm] call MSF_Persist_fnc_SetVehicleData;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/

params ["_unit", "_vicType", "_inventory", "_damage", "_look", "_ammo", "_fuel", "_isAlive", "_loc", "_aceRefuel", "_aceRearm"];

//if (typeOf _unit != _vicType) exitWith {["Vehicle Type does not match; vehicle %1 of type %2 does not match saved type of %3", vehicleVarName _unit, typeOf _unit, _vicType] call BIS_fnc_error;};

// restore damage 
if (_unit getVariable "MSF_Persist_isDamageEnable") then {
	if (!_isAlive) then {
		_unit setDamage [1, false];
	} else {
		{ 
			_x params ["_num", "_part"];	
			_unit setHit _part;
		} forEach _damage;	
	};	
};

if (_unit getVariable "MSF_Persist_isLocEnable") then {
	_loc params ["_pos", "_dir"];

	_unit setPosATL _pos;
	_unit setDir _dir;
};

if (_isALive) then {	
	// restore inventory
	[_unit, _inventory] call MSF_Persist_fnc_SetObjectCargo;

	// restore vehicle customizations
	if (_unit getVariable "MSF_Persist_isLookEnable") then {
		if (count _look > 0) then {
			private _style = _look select 0;
			private _acc = _look select 1;

			[_unit, _style, _acc] call BIS_fnc_initVehicle;		
		};
	};

	// Restore ammo
	if (_unit getVariable "MSF_Persist_isAmmoEnable") then {
		{
		_x params ["_mag", "_count"];
		
		_unit addMagazine [_mag, _count];
		} forEach _ammo;
	};

	// restore fuel
	if (_unit getVariable "MSF_Persist_isFuelEnable") then {
		if (_fuel != -1) then {
			_unit setFuel _fuel;		
		};
	};

	if (_unit getVariable "MSF_Persist_isACERefuel") then {		
		[_unit, _aceRefuel] call ace_refuel_fnc_makeSource;
		[_unit, _aceRefuel] call ace_refuel_fnc_setFuel;
	};

	if (_unit getVariable "MSF_Persist_isACERearm") then {
		[_unit, false] call ace_rearm_fnc_disable;
		[_unit, _aceRearm] call ace_rearm_fnc_setSupplyCount;
	};
};
