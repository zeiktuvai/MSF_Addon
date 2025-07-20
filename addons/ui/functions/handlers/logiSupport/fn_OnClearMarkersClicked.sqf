private _markers = uiNamespace getVariable ["MSF_LogiMarkers", []];
private _count = count _markers;

if (_count > 0) then {
	{
		if (_forEachIndex + 1 == _count) then { deleteMarker _x; } else { deleteMarkerLocal _x; };
	} forEach _markers;	
	uiNamespace setVariable ["MSF_LogiMarkers", nil];
};
