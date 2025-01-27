params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _position = position _logic;
private _name = _logic getVariable ["Description", "Missconfigured"];
private _civ = _logic getVariable ["AllowCIV", true];
private _mil = _logic getVariable ["AllowMIL", true];
private _obj = _logic getVariable ["AllowOBJ", true];
private _marker = _logic getVariable ["MarkerType", "hd_unknown"];
private _markerColor = _logic getVariable ["MarkerColor", 0];
private _notif = _logic getVariable ["NotificationType", "MapUpdate"];
private _notifText = _logic getVariable ["NotificationText", ""];
private _diary = _logic getVariable ["DiaryText", ""];
private _taskTitle = _logic getVariable ["TaskTitle", ""];
private _taskDesc = _logic getVariable ["TaskDesc", ""];
private _taskAssgn = _logic getVariable ["TaskAssigned", false];
private _taskType = _logic getVariable ["TaskType", "Default"];
private _taskID = [format ["task_%1", _position select 0]] call BIS_fnc_filterString;
_logic setVariable ["TaskID", _taskID];
private _targets = [];

// Get Targets
if (_civ) then { _targets pushBack "CIV"; };
if (_mil) then { _targets pushBack "MIL"; };
if (_obj) then { _targets pushBack "OBJ"; };

[
	"MANUAL",
	_position,
	_name,
	_targets,
	[ _marker, _markerColor],
	[_notif, _notifText],
	[_name, _diary] select (_diary != ""),
	[_taskID, _taskTitle, _taskDesc, _taskType, ["CREATED", "ASSIGNED"] select (_taskAssgn)]
] call MSF_Intel_fnc_AddIntelItem;