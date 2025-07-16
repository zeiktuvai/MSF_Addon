// This will need to integrate with intel system.
// _type: 0 Checkpoint, 1 Outpost, 2 Base, 3 helibase, 4 bastion, 5 poi

params [["_type", "", [""]], ["_position", [0,0,0], [[]]]];
private ["_markerType", "_markerColor"];

switch (_type) do {
	case "Checkpoint": {		
		_markerType = "mil_dot";
		_markerColor = "Color1_FD_F";		
	};
	case "Outpost": {
		_markerType = "mil_triangle";
		_markerColor = "Color1_FD_F";
	};
	case "Base": {
		_markerType = "loc_Bunker";
		_markerColor = "Color1_FD_F";
	 };	
	case "HeliBase": {
		_markerType = "mil_marker";
		_markerColor = "Color1_FD_F";
	};
	case "Bastion": {
		_markerType = "mil_objective";
		_markerColor = "Color1_FD_F";
	};
	case "AirBase": {
		_markerType = "mil_marker";
		_markerColor = "Color1_FD_F";
	};
	case "POI": {
		_markerType = "hd_unknown";
		_markerColor = "Color3_FD_F";
	};
	case
	default {
		_markerType = "hd_unknown";
		_markerColor = "Color3_FD_F";
	 };
};

private _name = _type + "_" + (str _position);

_marker = createMarkerLocal [_name, _position];
_marker setMarkerTypeLocal _markerType;
_marker setMarkerColorLocal _markerColor;
_marker setMarkerText ([_type, "Point of Interest"] select (_type == "POI"));
