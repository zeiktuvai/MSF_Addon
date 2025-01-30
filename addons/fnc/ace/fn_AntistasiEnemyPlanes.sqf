params ["_enabled"];

if (!isServer) then {
	private _foundation = localNamespace getVariable "MSF_Local";
	
	if (_enabled && allAddonsInfo findIf {"A3A" in (_x select 0)} > 0) then {
		private _eh = addMissionEventHandler ["EntityCreated", {
			params ["_entity"];

			private _side = side (allPlayers select 0);

			if (_entity isKindOf "plane") then {
				if (side (units _entity select 0) != _side) then {
					deleteVehicleCrew _entity;
					deleteVehicle _entity;
				};
			};
		}];

		_foundation set ["AU_Plane_EHID", _eh];
	}
	else
	{
		private _ehId = _foundation get "AU_Plane_EHID";

		if (!isNil "_ehId") then {
			removeMissionEventHandler ["EntityCreated", _ehId];
			_foundation deleteAt "AU_Plane_EHID";
		};
	};
};