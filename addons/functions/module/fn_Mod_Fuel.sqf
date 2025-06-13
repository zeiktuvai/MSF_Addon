params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _vics = missionNamespace getVariable "MSF" getOrDefault ["FuelHandlerVics", []];
private _compatUnits = _units select { _x isKindOf "LandVehicle" || _x isKindOf "Air" || _x isKindOf "Ship" };

_vics append _compatUnits;

["MSF", "FuelHandlerVics", _vics] call MSF_fnc_SetConfigValue;