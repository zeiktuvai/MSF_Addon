
params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _prob = _logic getVariable ["Probability", 1];
private _fire = _logic getVariable ["Fire", false];
private _fireProb = _logic getVariable ["FireProbability", false];
private _area = [_logic, false] call MSF_fnc_GetAreaRadius;
private _modPos = position _logic;

private _houses = nearestObjects [_modPos, ["house"], _area];
{
   if ([_prob] call MSF_fnc_GetSpawnChance) then
   {
		private _dam = random 1;
		if (_dam > 0.5) then { _dam = 1; };
		_x setDamage _dam;
   };
} forEach _houses;

if (_fire) then {	
	{
		if (damage _x >= 0.6) then {			
			if ([_fireProb] call MSF_fnc_GetSpawnChance) then {
				"test_EmptyObjectForFireBig" createVehicle position _x;				
			};
		};
	} forEach _houses;	
}