params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _leader = leader (_units # 0);
private _center = allMissionObjects "MSF_Module_TrackingCenter" select 0;
_logic setVariable ["MSF_tArty_Center", _center];
_logic setVariable ["MSF_tArty_Units", _units];

[str _logic, {	
	[_arguments select 0] call MSF_Arty_fnc_ArtilleryServiceWorker;
}, 30, [_logic], 10] call MSF_fnc_RegisterServiceWorker;

//300
