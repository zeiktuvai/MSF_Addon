params [["_name", "", [""]], ["_text", "", [""]], ["_position", [], [[]]], ["_type", "", [""]], ["_color", "", [""]]];

_marker = createMarkerLocal [format ["M_%1", _name], _position];
_marker setMarkerTypeLocal _type;
_marker setMarkerColorLocal _color;
_marker setMarkerText _text;