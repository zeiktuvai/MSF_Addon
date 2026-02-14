params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _factor = _logic getVariable ["DmgReduction", 0.5];

{
	_x addEventHandler ["HandleDamage", {
		params ["_unit", "_hit", "_dam"];
		//private _unit = _this select 0;		
		//private _hit = _this select 1;
		//private _dam = _this select 2;
		private _toughness = 1; //- _factor;
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
} forEach (_units select { _x isKindOf "LandVehicle" || _x isKindOf "Air" || _x isKindOf "Ship" });
