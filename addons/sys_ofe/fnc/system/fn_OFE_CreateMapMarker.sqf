// This will need to integrate with intel system.
// _type: 0 Checkpoint, 1 Outpost, 2 Base, 3 helibase, 4 bastion, 5 poi

params [["_type", 0, [0]], ["_position", [0,0,0], [[]]]];
private ["_name", "_markerType", "_markerColor", "_markerText"];

switch (_type) do {
	case 0: {
		_name = "Checkpoint_" + (str _position);
		_markerType = "mil_dot";
		_markerColor = "Color1_FD_F";
		_markerText = "Checkpoint";
	};
	case 5;
	case 1: {
		_name = "Outpost_" + (str _position);
		_markerType = "mil_triangle";
		_markerColor = "Color1_FD_F";
		_markerText = "Outpost";
	};
	case 6;
	case 2: {
		_name = "Base_" + (str _position);
		_markerType = "loc_Bunker";
		_markerColor = "Color1_FD_F";
		_markerText = "Base";
	 };
	case 3;
	case 7: {
		_name = "HeliBase_" + (str _position);
		_markerType = "mil_marker";
		_markerColor = "Color1_FD_F";
		_markerText = "Heli-Base";
	};
	case 4: {
		_name = "Bastion_" + (str _position);
		_markerType = "mil_objective";
		_markerColor = "Color1_FD_F";
		_markerText = "Enemy Bastion";
	};
	case 8: {
		_name = "AirBase_" + (str _position);
		_markerType = "mil_marker";
		_markerColor = "Color1_FD_F";
		_markerText = "AirBase";
	};
	case 9: {
		_name = "POI_" + (str _position);
		_markerType = "hd_unknown";
		_markerColor = "Color3_FD_F";
		_markerText = "Point of Interest";
	};
	case
	default {
		_name = "POI_" + (str _position);
		_markerType = "hd_unknown";
		_markerColor = "Color3_FD_F";
		_markerText = "Point of Interest";
	 };
};

_marker = createMarkerLocal [_name, _position];
_marker setMarkerTypeLocal _markerType;
_marker setMarkerColorLocal _markerColor;
_marker setMarkerText _markerText;