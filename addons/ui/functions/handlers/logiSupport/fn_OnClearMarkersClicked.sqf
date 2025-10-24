private _markers = uiNamespace getVariable ["MSF_LogiMarkers", []];
private _existing = allMapMarkers select { _x in _markers};

if (_existing isNotEqualTo []) then {
	{
		if (_forEachIndex + 1 == count _markers) then { deleteMarker _x; } else { deleteMarkerLocal _x; };
	} forEach _existing;
};

if (_markers isNotEqualTo []) then {
	uiNamespace setVariable ["MSF_LogiMarkers", nil];
};
