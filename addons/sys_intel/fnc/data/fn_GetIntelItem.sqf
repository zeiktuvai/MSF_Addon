params [["_object", objNull, [objNull]], ["_type", "", [""]], ["_chance", 0.6, [1]]];

if ([_chance] call MSF_fnc_CalculateProbability) then {
	private _intels = missionNamespace getVariable "MSF_Intel_Items";
	private _item = selectRandom (values _intels select { _type in (_x select 2)});

	if (!isNil "_item") exitWith {
	[_item select 0, _item select 1, _item select 3, _item select 4 select 0, _item select 4 select 1] call MSF_fnc_CreateMapMarker;
	[_item select 5 select 0, [_item select 5 select 1]] remoteExec ["BIS_fnc_showNotification"];
	_intels deleteAt (_item select 0);
	};
};

switch (_type) do {
	case "MIL";
	case "CIV": { ["<t size='0.7'>This person has <t color='#ff0000'>no</t> information</t>", safeZoneX + 2, -1, 1, 1, 0, 2] spawn BIS_fnc_dynamicText; };
	case "OBJ": { ["<t size='0.7'>This document contains <t color='#ff0000'>no useful</t> information</t>", safeZoneX + 2, -1, 1, 1, 0, 2] spawn BIS_fnc_dynamicText; };
	default { ["<t size='0.7'>This person has <t color='#ff0000'>no</t> information</t>", safeZoneX + 2, -1, 4, 1, 0, 2] spawn BIS_fnc_dynamicText; };
};	