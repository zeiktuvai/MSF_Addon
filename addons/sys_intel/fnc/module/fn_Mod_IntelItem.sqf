params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _position = position _logic;
private _name = _logic getVariable ["Description", "Missconfigured"];
private _civ = _logic getVariable ["AllowCIV", true];
private _mil = _logic getVariable ["AllowMIL", true];
private _obj = _logic getVariable ["AllowOBJ", true];
private _marker = _logic getVariable ["MarkerType", "hd_unknown"];
private _markerColor = _logic getVariable ["MarkerColor", 0];
private _notif = _logic getVariable ["NotificationType", "MapUpdate"];
private _notifText = _logic getVariable ["NotificationText", "Map Updated."];
private _targets = [];

// Get Targets
if (_civ) then { _targets pushBack "CIV"; };
if (_mil) then { _targets pushBack "MIL"; };
if (_obj) then { _targets pushBack "OBJ"; };

// Get synced task
_modules = _logic call BIS_fnc_moduleModules;
_module = objNull;

{if (typeOf _x == "ModuleTaskCreate_F") exitWith {_module = _x}} forEach _modules;
if (isNull _module) exitWith {false};

_task = _module getVariable ["ID", ""];
if (_task == "") exitWith {false};

[_task, objNull, _task call BIS_fnc_taskDescription, _task call BIS_fnc_taskDestination, "CREATED", 10, false] call BIS_fnc_setTask;

// Get Marker Data
private _markerData = []; //[getMarkerType _marker, getMarkerColor _marker];
//deleteMarker _marker;


["MANUAL", _position, _name, _targets, _markerData, [_notif, _notifText], [], [_task]] call MSF_Intel_fnc_AddIntelItem;