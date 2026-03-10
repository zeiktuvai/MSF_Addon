params [["_namePrefix", "", [""]],["_pos", [], [[]]], ["_color", "ColorUNKNOWN", [""]], ["_area", [], [[]]], ["_icon", false, [false]], ["_iconText", "", [""]]];

private _mark = createMarkerLocal [format ["%1_%2", _namePrefix, call MSF_fnc_GetTimeBasedGUID], _pos];
		
if (_icon) then {
	_mark setMarkerTypeLocal "mil_warning";
	_mark setMarkerTextLocal _iconText;
} else {
	_mark setMarkerShapeLocal (["ELLIPSE", "RECTANGLE"] select (_area # 3));
	_mark setMarkerSizeLocal [_area # 0, _area # 1];
	_mark setMarkerBrushLocal "Grid";
	_mark setMarkerAlphaLocal 0.6;
};
		
_mark setMarkerColor _color;
