params [["_item", "", [""]]];

private _config = [_item, configNull] call BIS_fnc_configPath;
ctrlSetText [1004, getText (_config >> 'editorPreview')];
ctrlSetText [1005, getText (_config >> "displayName")];
private _desc = getText (_config >> "Armory" >> "description");
ctrlSetText [1205, if (_desc isEqualTo "") then {"No data available."} else {_desc}];
ctrlShow [104, true];
