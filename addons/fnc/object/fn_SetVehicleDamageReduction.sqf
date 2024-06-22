/*
	Author: zeik_tuvai

	Description:
		This MSF function adds an event handler to each configured vehicle to reduce damage dealt by a certain percent.
	Properties:
		_vics  Array 	List of vehicles
	Examples:
		[] call MSF_fnc_SetVehicleDamageReduction;

	Function Ver 1.1
	Implemented in: MSF Addon v1.5
*/

param ["_vics"];

{
	_x addEventHandler ["HandleDamage", {
		private _unit = _this select 0;		
		private _hit = _this select 1;
		private _dam = _this select 2;
		private _toughness = [1 - (_unit getVariable "MSF_General_DmgReduction"), 2] call BIS_fnc_cutDecimals;
		private _damage = 0;

		if ("wheel" in _hit || "track" in _hit) then {
			_damage = if (_hit isEqualTo "") then {damage _unit} else {_unit getHit _hit};
		} else {
			_damage = if (_hit isEqualTo "") then {damage _unit + (_dam * _toughness)} else {(_unit getHit _hit) + (_dam * _toughness)};
		};
		
		[format ["dmg: %1  vic: %2", _damage, _unit]] remoteExec ["systemChat"];
		_damage;
	}];
} forEach _vics;
