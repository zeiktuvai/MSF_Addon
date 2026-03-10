params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _area = _logic getVariable ["objectArea", [0,0,0,false,-1]];
private _map = _logic getVariable ["ShowOnMap", false];
private _mapDetail = _logic getVariable ["MapDetail", 0];

if (count (nearestObjects [position a, ["MSF_Module_Radiation_Area"], (_area # 0) + 50]) > 1) exitWith {};

private _zones = synchronizedObjects _logic select {typeOf _x == "MSF_Module_Radiation_Hotspot"};
private _trig = createTrigger ["emptyDetector", getPos _logic];

_trig setTriggerArea _area;
_trig setTriggerActivation ["ANYPLAYER", "PRESENT", true];
_trig setTriggerStatements ["this", "", ""];
_trig setVariable ["Rad_Zones", _zones];

private _trigs = missionNamespace getVariable ["MSF_RadiationZones", []];
_trigs pushBack _trig;
missionNamespace setVariable ["MSF_RadiationZones", _trigs];

if (isServer) then {
	if (_map) then {
		["MSF_radzone", position _logic, "ColorUNKNOWN", _area] call MSF_CBRN_fnc_CreateRadiationMarker;

		if (_mapDetail == 0) exitWith {};

		{
			private _zoneArea = _x getVariable ["objectArea", [0,0,0,false,-1]];
			["MSF_radzoneHot", position _x, "ColorRED", _zoneArea] call MSF_CBRN_fnc_CreateRadiationMarker;
		} forEach _zones;

		if (_mapDetail == 1) exitWith {};

		["MSF_radzoneIcon", position _logic, "ColorUNKNOWN", [], true,  "Radiation Zone"] call MSF_CBRN_fnc_CreateRadiationMarker;
	};
};
