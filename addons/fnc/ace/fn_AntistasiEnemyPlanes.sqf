if (allAddonsInfo findIf {"A3A" in (_x select 0)} > 0) then {
	private _side = side (allPlayers select 0);

	if (_entity isKindOf "plane") then {
		if (side (units _entity select 0) != _side) then {
			deleteVehicleCrew _entity;
			deleteVehicle _entity;
		};
	};
};