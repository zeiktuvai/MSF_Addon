params [["_selection", "", [""]], ["_item", "", [""]]];

private _config = [_item, configNull] call BIS_fnc_configPath;
private _desc = switch ((parseSimpleArray _selection) select 3) do {
	case "VicStatic": { getText (_config >> "Armory" >> "description"); };
	case "VicCar";
	case "VicApc";
	case "VicArty";
	case "VicTank": { 
		private _text = getText (_config >> "Library" >> "libTextDesc");
		if (isLocalized _text) then { localize _text } else { _text };
	};
	default {""};
};

ctrlSetText [1004, getText (_config >> 'editorPreview')];
ctrlSetText [1005, getText (_config >> "displayName")];
ctrlSetText [1205, [_desc, "No data available."] select (_desc isEqualTo "")];
ctrlShow [104, true];
ctrlEnable [1600, true];
