params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _leader = leader (_units # 0);
private _center =  allMissionObjects "MSF_Module_TrackingCenter" select 0;