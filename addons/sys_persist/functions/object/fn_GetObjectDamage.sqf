params ["_unit"];

private _return = [];

if (damage _unit == 1) then {
	_return = [-1];
}
else 
{
	private ["_hitC","_cfg","_PartN","_HitP"];
	_hitC = (count ((configFile >> "CfgVehicles" >> _vehicleType >> "HitPoints") call Bis_fnc_getCfgSubClasses)) - 1; 

	for "_i" from 0 to _hitC do { 
		_cfg = (configFile >> "CfgVehicles" >> _vehicleType >> "HitPoints") select _i; 
		_PartN = getText(_cfg >> "name");
		_HitP = _unit getHit _PartN;
		_return pushBack [_i,[_PartN,_HitP]];
	};
};

_return;