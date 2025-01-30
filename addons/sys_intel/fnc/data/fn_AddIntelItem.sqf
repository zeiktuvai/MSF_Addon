params [["_name", "", [""]], ["_position", [], [[]]], ["_title", "", [""]], ["_targetType", ["CIV", "MIL", "OBJ"], [[]]], ["_markerData", [], [[]]],
	["_notificationData", [], [[]]], ["_diaryData", "", [""]], ["_taskData", [], [[]]]];

private _foundation = missionNamespace getVariable "MSF";
	
if (_foundation get ["isIntelEnabled", false]) then
{
	private _intels = missionNamespace getVariable "MSF_IntelItems";
	private _key = format ["%1_%2-%3", _name, _position select 0, _position select 1] call BIS_fnc_filterString;

	_intels set [_key, [_key, _title, _targetType, _position, _markerData, _notificationData, _diaryData, _taskData]];	
};