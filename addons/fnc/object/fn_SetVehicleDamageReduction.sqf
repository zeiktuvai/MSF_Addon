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

params ["_vics"];

{
	_x addEventHandler ["HandleDamage", {
		private _unit = _this select 0;		
		private _hit = _this select 1;
		private _dam = _this select 2;
		private _toughness = 1 - (arv getVariable "MSF_General_DmgReduction");
		private _damage = 0;

		if ("wheel" in _hit || "track" in _hit) then {
			_damage = if (_hit isEqualTo "") exitWith {
				if (MSF_Debug_Message_Enabled) then
					{
						[format ["Incoming Dmg: %1; Part Hit: %2; Toughness Val: %3; Applied Damage: %4; Vic Damage: %5; Hit Damage: %6 Vehicle: %7", _dam, _hit, _thoughness, _damage, damage _unit, _unit getHit _hit, _unit]] remoteExec ["systemChat"];
					};
				}
		} else {
			_damage = if (_hit isEqualTo "") then {damage _unit + (_dam * _toughness)} else {(_unit getHit _hit) + (_dam * _toughness)};
		};

		if (MSF_Debug_Message_Enabled) then
		{
			[format ["Incoming Dmg: %1; Part Hit: %2; Toughness Val: %3; Applied Damage: %4; Vic Damage: %5; Hit Damage: %6 Vehicle: %7", _dam, _hit, _thoughness, _damage, damage _unit, _unit getHit _hit, _unit]] remoteExec ["systemChat"];
		};
		
		_damage;
	}];
} forEach _vics;


