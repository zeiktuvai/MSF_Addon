private _markers = uiNamespace getVariable ["MSF_LogiMarkers", []];
private _existing = allMapMarkers select { _x in _markers};

if (count _existing > 0) then {
	{
		if (_forEachIndex + 1 == _count) then { deleteMarker _x; } else { deleteMarkerLocal _x; };
	} forEach _existing;
};

if (count _markers > 0) then {
	uiNamespace setVariable ["MSF_LogiMarkers", nil];
};
