params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _position = position _logic;
private _name = _logic getVariable ["Description", "Missconfigured"];
private _civ = _logic getVariable ["AllowCIV", true];
private _mil = _logic getVariable ["AllowMIL", true];
private _obj = _logic getVariable ["AllowOBJ", true];
private _eTask = _logic getVariable ["EnableTask", true];
private _eNotif = _logic getVariable ["EnableNotification", true];
private _eDiary = _logic getVariable ["EnableDiary", true];
private _marker = _logic getVariable ["MarkerType", "hd_unknown"];
private _markerColor = _logic getVariable ["MarkerColor", 0];
private _markerArea = _logic getVariable ["MarkerSize", [0,0]];
private _notif = _logic getVariable ["NotificationType", "MapUpdate"];
private _notifText = _logic getVariable ["NotificationText", ""];
private _taskTitle = _logic getVariable ["TaskTitle", ""];
private _taskDesc = _logic getVariable ["TaskDesc", ""];
private _taskAssgn = _logic getVariable ["TaskAssigned", false];
private _taskType = _logic getVariable ["TaskType", "Default"];
private _level = _logic getVariable ["IntelLevel", 1];
private _activationSide = _logic getVariable ["ActivationSide", 3];
private _taskID = [format ["task_%1", _position select 0]] call BIS_fnc_filterString;
private _diarySubj = _logic getVariable ["DiarySubj", ""];
private _diaryText = _logic getVariable ["DiaryText", ""];
private _diaryTitle = _logic getVariable ["DiaryTitle", ""];
private _taskComplID = _logic getVariable ["TaskComplID", ""];
_logic setVariable ["TaskID", _taskID];
private _targets = [];

// Get Targets
if (_civ) then { _targets pushBack "CIV"; };
if (_mil) then { _targets pushBack "MIL"; };
if (_obj) then { _targets pushBack "OBJ"; };

private _intelID = [
	"MANUAL",
	_position,
	_name,
	_targets,
	_level,
	[_marker, _markerColor, _markerArea],
	[[],[_notif, _notifText]] select _eNotif,
	[[],[_diarySubj, _diaryTitle, _diaryText]] select _eDiary,
	[[],[_taskID, _taskTitle, _taskDesc, _taskType, ["CREATED", "ASSIGNED"] select (_taskAssgn)]] select _eTask,
	_taskComplID
] call MSF_Intel_fnc_AddIntelItem;

[_units, false] call MSF_fnc_ShowHideObjects;
[_logic, 300, 300, [_activationSide] call MSF_fnc_GetModuleActivationSide, "present", false, _units, "POI", [], _intelID] call MSF_fnc_OFE_CreateModuleActivationTrigger;
