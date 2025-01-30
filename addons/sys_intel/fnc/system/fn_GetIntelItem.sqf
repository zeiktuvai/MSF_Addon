params [["_object", objNull, [objNull]], ["_type", "", [""]], ["_chance", 0.6, [1]]];

private _intelLevel = (missionNamespace getVariable "MSF") get "IntelLevel";
private _intels = missionNamespace getVariable "MSF_IntelItems";
private _items = values _intels select { _type in (_x select 2)};
private _item = selectRandom (_items select { (_x select 4) <= _intelLevel });

if ([_chance] call MSF_fnc_CalculateProbability && !(isNil "_item")) exitWith {
	_item params ["_key", "_title", "_targetType", "_position", "_level", "_markerData", "_notificationData", "_diaryData", "_taskData"];
	
	private _marker = [_key, _title, _position, _markerData select 0, _markerData select 1] call MSF_fnc_CreateMapMarker;
	[_notificationData select 0, [_notificationData select 1]] remoteExec ["BIS_fnc_showNotification"];
	[player, ["Diary", ["Gathered Intel", format ["<marker name='%1'>%2</marker>", _marker, _diaryData]], taskNull, "", false]] remoteExec ["createDiaryRecord"];
	
	if (count _taskData > 0 ) then {
		_taskData params ["_taskID", "_taskTitle", "_taskDesc", "_taskType", "_taskState"];
		[side (allPlayers select 0), _taskID, [_taskDesc, _taskTitle, ""], _position, _taskState, 5, true, _taskType] call BIS_fnc_taskCreate;	
	};

	["MSF_IntelItems", _item select 0] call MSF_fnc_DeleteConfigValue;
};

private _message = "<t size='0.7'>This person has <t color='#ff0000'>no</t> information</t>";
switch (_type) do {
	case "OBJ": { _message = "<t size='0.7'>This contains <t color='#ff0000'>no useful</t> information</t>"; };
};	

[_message, safeZoneX + 1.2, -1, 1, 1, 0, 2] spawn BIS_fnc_dynamicText; 