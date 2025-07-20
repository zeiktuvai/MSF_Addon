params [["_faction", 1, [1]]];

switch (_faction) do {
	case 0;
	case 1;
	case 2: { str ([_faction] call BIS_fnc_sideType) };
	case 3: { "ANYPLAYER" };
	default { "WEST" };
};
