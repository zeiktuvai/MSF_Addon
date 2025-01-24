params [["_name", "", [""]], ["_position", [], [[]]], ["_title", "", [""]], ["_targetSide", civilian, [civilian]], ["_markerData", [], [[]]],
	["_notificationData", [], [[]]], ["_diaryData", [], [[]]], ["_taskData", [], [[]]]];

if (missionNamespace getVariable ["MSF_Intel_Init", false]) then {
	private _intels = missionNamespace getVariable "MSF_Intel_Items";
	private _key = format ["%1_%2", _name, [str _position] call BIS_fnc_filterString];

	_intels set [_key, [_name, _title, _targetSide, _position, _markerData, _notificationData, _diaryData, _taskData]];	
};
