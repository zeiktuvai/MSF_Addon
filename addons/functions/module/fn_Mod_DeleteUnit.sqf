params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _cond = {	
	count (allUnits	select { _x inArea thisTrigger }) > 0;
};

private _act = {
	private _units = [];
	
	{
		_units append (units group _x);
		
	} forEach (thisTrigger getVariable "SyncedUnits");
		
	{
		if (_x inArea thisTrigger) then {
			if (!(isNull objectParent _x)) then
			{
				private _vic = objectParent _x;
				deleteVehicleCrew _vic;
				deleteVehicle _vic;
			}
			else
			{
				deleteVehicle _x;
			};			 
		};

	} forEach _units;
};

private _trig = createTrigger ["EmptyDetector", position _logic];
_trig setVariable ["SyncedUnits", _units];
_trig setTriggerActivation ["NONE", "PRESENT", true];
_trig setTriggerStatements [toString _cond, toString _act, ""];
_trig setTriggerArea (_logic getVariable "objectArea");
