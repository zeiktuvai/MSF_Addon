params [["_side", west, [west]]];

switch (_side) do {
	case west: {"ColorWEST"};
	case east: {"ColorEAST"};
	case independent: {"ColorGUER"};
	default {"ColorBlack"};
};
