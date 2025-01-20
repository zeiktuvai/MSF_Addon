params ["_enabled"];

if (isServer) then {
	if (_enabled && allAddonsInfo findIf {"A3A" in (_x select 0)} > 0) then {
		missionNamespace setVariable ["MSF_AU_EHId",
			addMissionEventHandler ["EntityCreated", {
				params ["_entity"];

				private _side = side (allPlayers select 0);

				if (_entity isKindOf "plane") then {
					if (side (units _entity select 0) != _side) then {
						deleteVehicleCrew _entity;
					};
				};
			}]
		];
	}
	else
	{
		private _ehId = missionNamespace getVariable "MSF_AU_EHId";

		if (!isNil "_ehId") then {
			removeMissionEventHandler ["EntityCreated", _ehId];
		};
	};
};