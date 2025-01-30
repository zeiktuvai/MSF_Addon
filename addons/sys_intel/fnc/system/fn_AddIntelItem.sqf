params [["_name", "", [""]], ["_position", [], [[]]], ["_title", "", [""]], ["_targetType", ["CIV", "MIL", "OBJ"], [[]]], ["_intelLevel", 1, [1]],
	["_markerData", [], [[]]], ["_notificationData", [], [[]]], ["_diaryData", "", [""]], ["_taskData", [], [[]]]];

private _intel = [] call MSF_fnc_GetIsIntelEnabled;

if (_intel) then
{
	private _intels = missionNamespace getVariable "MSF_IntelItems";
	private _key = format ["%1_%2-%3", _name, _position select 0, _position select 1] call BIS_fnc_filterString;

	_intels set [_key, [_key, _title, _targetType, _position, _intelLevel, _markerData, _notificationData, _diaryData, _taskData]];	
};