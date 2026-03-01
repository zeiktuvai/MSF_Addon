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
		private _mark = createMarkerLocal [format ["radzone_%1", count _trigs], position _logic];
		_mark setMarkerShapeLocal (["ELLIPSE", "RECTANGLE"] select (_area # 3));
		_mark setMarkerSizeLocal [_area # 0, _area # 1];
		_mark setMarkerBrushLocal "Grid";
		_mark setMarkerAlphaLocal 0.6;
		_mark setMarkerColor "ColorUNKNOWN";

		if (_mapDetail == 0) exitWith {};
		
		{
			private _zoneArea = _x getVariable ["objectArea", [0,0,0,false,-1]];
			private _markz = createMarkerLocal [format ["radzoneDet_%1", _forEachIndex], position _x];
			_markz setMarkerShapeLocal (["ELLIPSE", "RECTANGLE"] select (_zoneArea # 3));
			_markz setMarkerSizeLocal [_zoneArea # 0, _zoneArea # 1];
			_markz setMarkerBrushLocal "Grid";
			_markz setMarkerAlphaLocal 0.6;
			_markz setMarkerColor "ColorRED";				
		} forEach _zones;
		
		if (_mapDetail == 1) exitWith {};
		
		private _markd = createMarkerLocal [format ["radzoneDet_%1", count _trigs], position _logic];
		_markd setMarkerTypeLocal "mil_warning";
		_markd setMarkerColorLocal "ColorUNKNOWN";
		_markd setMarkerText "Radiation Zone";
	};
};

[] call MSF_CBRN_fnc_SetRadiationArea;
