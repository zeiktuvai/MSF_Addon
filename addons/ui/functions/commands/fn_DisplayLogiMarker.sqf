disableSerialization;

private _class = "MSF_Logi_Markers";
private _idd = [_class] call MSF_UI_fnc_GetMSFIDD;
createDialog _class;

[_idd] call MSF_UI_fnc_SetTabletStats;
ctrlSetText [1001, "Logistics Map Marker Management"];
lnbAddColumn [1500, 0.05];
lnbAddColumn [1500, 0.75];

{
	lnbAddRow [1500, ["", markerText _x, mapGridPosition markerPos _x]];
	lnbSetPicture [1500, [_forEachIndex, 0], [markerType _x] call BIS_fnc_textureMarker];
	lnbSetData [1500, [_forEachIndex, 1], _x];
} forEach (allMapMarkers select { "MSF_Logi" in _x });

uiNamespace setVariable ["MSF_Logi_MarkerSel", []];
[_class] call MSF_UI_fnc_OnLogiMarkerMapLoad;
