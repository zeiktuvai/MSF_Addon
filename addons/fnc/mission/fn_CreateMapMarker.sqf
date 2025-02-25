params [["_name", "", [""]], ["_text", "", [""]], ["_position", [], [[]]], ["_type", "", [""]], ["_color", "", [""]], ["_size", [0, 0], [[]]]];

_marker = createMarkerLocal [format ["M_%1", _name], _position];

if (_type == "ELLIPSE" || _type == "RECTANGLE") then {
	_marker setMarkerShapeLocal _type;
	_marker setMarkerSize [_size select 0, _size select 1];
}
else
{
	_marker setMarkerTypeLocal _type;
};

_marker setMarkerColorLocal _color;
_marker setMarkerText _text;

_marker;