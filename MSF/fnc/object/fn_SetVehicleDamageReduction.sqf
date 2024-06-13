/*
	Author: zeik_tuvai

	Description:
		This MSF function adds an event handler to each configured vehicle to reduce damage dealt by a certain percent.
	
	Examples:
		[] call MSF_fnc_SetVehicleDamageReduction;

	Function Ver 1.1
	Implemented in: MSF Addon v1.5
*/

 private _vics = ["MSF_General_DmgReduction", 0] call MSF_fnc_GetVehiclesByPropertyValue;

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
		
		systemChat format ["dmg: %1  vic: %2", _damage, _unit];
		_damage;
	}];

	_x addEventHandler ["Local", {
		params ["_entity", "_isLocal"];
		
		if (_islocal == true) then {		 	 
			
			systemChat "Locality Change detected, removing handlers";
			[_vehicle, "HandleDamage"] remoteExec ["removeAllEventHandlers", _vehicle];

			systemChat "Adding Handlers";
			[_vehicle, ["HandleDamage", {
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
					
					systemChat format ["dmg: %1  vic: %2", _damage, _unit];
					_damage;
				}]
			] remoteExec ["addEventHandler", _vehicle];
		};
	}];
} forEach _vics;

// old
// {
// 	[_x, "HandleDamage"] remoteExec ["removeAllEventHandlers"];
// 	[_x, ["HandleDamage", {
// 		private _unit = _this select 0;		
// 		private _hit = _this select 1;
// 		private _dam = _this select 2;
// 		private _toughness = [1 - (_unit getVariable "MSF_General_DmgReduction"), 2] call BIS_fnc_cutDecimals;
// 		private _damage = 0;

// 		if ("wheel" in _hit || "track" in _hit) then {
// 			_damage = if (_hit isEqualTo "") then {damage _unit} else {_unit getHit _hit};
// 		} else {
// 			_damage = if (_hit isEqualTo "") then {damage _unit + (_dam * _toughness)} else {(_unit getHit _hit) + (_dam * _toughness)};
// 		};
		
// 		_damage;
// 		}]
// 	] remoteExec ["addEventHandler"];
// } forEach _vics;



// Bad
// {	
// 	_x addEventHandler ["HandleDamage", {
// 		private _unit = _this select 0;		
// 		private _hit = _this select 1;
// 		private _dam = _this select 2;
// 		private _toughness = [1 - (_unit getVariable "MSF_General_DmgReduction"), 2] call BIS_fnc_cutDecimals;
// 		private _damage = 0;

// 		if ("wheel" in _hit || "track" in _hit) then {
// 			_damage = if (_hit isEqualTo "") then {damage _unit} else {_unit getHit _hit};
// 		} else {
// 			_damage = if (_hit isEqualTo "") then {damage _unit + (_dam * _toughness)} else {(_unit getHit _hit) + (_dam * _toughness)};
// 		};
		
// 		systemChat format ["dmg: %1", _damage];
// 		_damage;
// 		}];
// } forEach _vics;