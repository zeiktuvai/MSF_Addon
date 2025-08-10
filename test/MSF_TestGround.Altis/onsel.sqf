params [["_item", "", [""]]];

private _config = [_item, configNull] call BIS_fnc_configPath;
ctrlSetText [1004, getText (_config >> 'editorPreview')];
