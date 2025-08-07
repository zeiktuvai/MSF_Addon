params [["_selection", "", [""]], ["_item", "", [""]]];

private _config = [_item, configNull] call BIS_fnc_configPath;
private _desc = switch ((parseSimpleArray _selection) select 3) do {
	case "VicStatic": { getText (_config >> "Armory" >> "description"); };
	case "VicTank": {getText (_config >> "Library" >> "libTextDesc"); };
	default {""};
};

ctrlSetText [1004, getText (_config >> 'editorPreview')];
ctrlSetText [1005, getText (_config >> "displayName")];
ctrlSetText [1205, [_desc, "No data available."] select (_desc isEqualTo "")];
ctrlShow [104, true];
ctrlEnable [1600, true];
