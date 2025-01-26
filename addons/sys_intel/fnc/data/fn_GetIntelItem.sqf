params [["_object", objNull, [objNull]], ["_type", "", [""]], ["_chance", 0.6, [1]]];

private _intels = missionNamespace getVariable "MSF_IntelItems";
private _item = selectRandom (values _intels select { _type in (_x select 2)});

if ([_chance] call MSF_fnc_CalculateProbability && !(isNil "_item")) exitWith {
	private _marker = [_item select 0, _item select 1, _item select 3, _item select 4 select 0, _item select 4 select 1] call MSF_fnc_CreateMapMarker;
	[_item select 5 select 0, [_item select 5 select 1]] remoteExec ["BIS_fnc_showNotification"];
	[player, ["Diary", ["Gathered Intel", format ["<marker name='%1'>%2</marker>", _marker, _item select 6]], taskNull, "", false]] remoteExec ["createDiaryRecord"];

	_intels deleteAt (_item select 0);
};


private _message = "<t size='0.7'>This person has <t color='#ff0000'>no</t> information</t>";
switch (_type) do {
	case "OBJ": { _message = "<t size='0.7'>This document contains <t color='#ff0000'>no useful</t> information</t>"; };
};	

[_message, safeZoneX + 1.2, -1, 1, 1, 0, 2] spawn BIS_fnc_dynamicText; 