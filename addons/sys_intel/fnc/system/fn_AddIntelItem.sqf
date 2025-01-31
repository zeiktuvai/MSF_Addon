params [["_name", "", [""]], ["_position", [], [[]]], ["_title", "", [""]], ["_targetType", ["CIV", "MIL", "OBJ"], [[]]], ["_intelLevel", 1, [1]],
	["_markerData", [], [[]]], ["_notificationData", [], [[]]], ["_diaryData", "", [""]], ["_taskData", [], [[]]]];

private _intel = [] call MSF_fnc_GetIsIntelEnabled;
private _key = "";

if (_intel) then
{
	_key = format ["%1_%2-%3", _name, _position select 0, _position select 1] call BIS_fnc_filterString;
	["MSF_IntelItems", _key, [_key, _title, _targetType, _position, _intelLevel, _markerData, _notificationData, _diaryData, _taskData]] call MSF_fnc_SetConfigValue;
};

_key;