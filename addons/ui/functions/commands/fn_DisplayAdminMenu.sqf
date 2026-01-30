createDialog "MSF_Admin";
ctrlSetText [1001, "Admin Commands"];

tvClear 1500;
if (allPlayers select {side _x == west} isNotEqualTo []) then {tvAdd [1500, [], "West"];};
if (allPlayers select {side _x == east} isNotEqualTo []) then {tvAdd [1500, [], "East"];};
if (allPlayers select {side _x == independent} isNotEqualTo []) then {tvAdd [1500, [], "Ind"];};

{
	private _sideId = 0;
	switch (side _x) do {
		case east: {_sideId = 1;};
		case independent: {_sideId = 2;};
	};

	private _idx = tvAdd [1500, [_sideId], name _x];
	tvSetData [1500, [_sideId, _idx], str _x];
} forEach allPlayers;
