params ["_selection"];

private _category = (parseSimpleArray _selection) # 6;

switch (_category) do {
	case 1: { [_selection] call MSF_UI_fnc_DisplayVicSelection; };
	default { [_selection] call MSF_UI_fnc_DisplayLogiMap; };
};
