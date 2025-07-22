params [["_ID", "", [""]]];

private _intel = (missionNamespace getVariable "MSF_IntelItems") get _ID;

if (!isNil "_intel") then {
	_intel params ["_key", "_title", "_targetType", "_position", "_level", "_markerData", "_notificationData", "_diaryData", "_taskData"];	
	private _marker = [_key, _title, _position, _markerData select 0, _markerData select 1] call MSF_fnc_CreateMapMarker;
		
	if (count _taskData > 0 ) then {
		_taskData params ["_taskID", "_taskTitle", "_taskDesc", "_taskType", "_taskState"];
		[side (allPlayers select 0), _taskID, [_taskDesc, _taskTitle, ""], _position, "SUCCEEDED", 5, true, _taskType] call BIS_fnc_taskCreate;	
	};

	[player, ["Diary", ["Gathered Intel", format ["<marker name='%1'>%2</marker>", _marker, _title]], taskNull, "", false]] remoteExec ["createDiaryRecord"];

	["MSF_IntelItems", _intel select 0] call MSF_fnc_DeleteConfigValue;	
};
