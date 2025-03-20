if (allAddonsInfo findIf {"A3A" in (_x select 0)} > 0) then {
	private _side = side (allPlayers select 0);

	{
		if (side (units _x select 0) != _side) then {
			deleteVehicleCrew _x;
			deleteVehicle _x;
		};
	} forEach (vehicles select { _x isKindOf "plane"});
};