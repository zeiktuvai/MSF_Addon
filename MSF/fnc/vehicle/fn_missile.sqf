this addEventHandler ["incomingMissile", { 
   params ["_target", "_ammo", "_vehicle", "_instigator", "_missile"]; 
   hint format ["%1 | %2 | %3 | %4 | %5", _target, _ammo, _vehicle, _instigator, _missile];

private _count = _target getVariable ["missileCount", 0];
private _miss = _target getVariable ["missileName", "none"]; 

if ("titan_missile_at_fly" in str _missile) then {
if (str _missile in _miss) then {
_count = _count + 1;
};
} else {
_count = _count + 1;
};

_target setVariable ["missileCount", _count]; 
_target setVariable ["missileName", str _missile]; 

if (_count > 1) then { _target allowDamage true; } else { _target allowDamage false; };
systemChat str _count;
}];


//Problem is that incoming missile doesn't have to hit for it to count....
//but handle damage doesn't know what kind of fire it took...

this addEventHandler ["handleDamage", { 
   	hint format ["%1 | %2 | %3 | %4 | %5", this select 0, _this select 1, _this select 3, currentWeapon (_this select 3), secondaryWeapon (_this select 3)];
   
	private _src = _this select 3;

   	if(currentWeapon _src in secondaryWeapon _src) then 
	{ 
   		private _count = this select 0 getVariable ["missileCount", 0];
		if ( _count > 1) then 
		{
			_unit setVariable ["missileCount", _count + 1];		
			if (_hitSelection isEqualTo "") then {damage this select 0} else {this select 0 getHit _this select 1};
		}
		else
		{
			_this select 2;
		};
		systemChat str _count;
	} 
	else
	{
   		_this select 2;
	}
}];

// this is fucked....