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
			_damage = 0;			
		} else {
			private _prevDam = [_unit getHit _hit, damage _unit] select (_hit isEqualTo "");
			_damage = _prevDam + ((_dam - _prevDam) * _toughness);
		};

		if (MSF_Debug_Message_Enabled) then
		{
			[format ["Incoming Dmg: %1; Part Hit: %2; Toughness Val: %3; Applied Damage: %4; Vic Damage: %5; Hit Damage: %6 Vehicle: %7", _dam, _hit, _toughness, _damage, damage _unit, _unit getHit _hit, _unit]] remoteExec ["systemChat"];
		};
		
		_damage;
	}];
} forEach _vics;


