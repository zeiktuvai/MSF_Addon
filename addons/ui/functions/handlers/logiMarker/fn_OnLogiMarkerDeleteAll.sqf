private _markers = allMapMarkers select { "MSF_Logi" in _x };

{
	deleteMarker _x;
} forEach _markers;

closeDialog 0;
