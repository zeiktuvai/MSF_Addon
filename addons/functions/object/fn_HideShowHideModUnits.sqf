{
	private _units = _x getVariable "Units";

	if (typeName _units == "ARRAY") then {
		private _id = ((_units select 0) * -1) -1;
		[getMissionLayerEntities _id select 0, false] call MSF_fnc_ShowHideObjects;
	}
	else
	{
		[synchronizedObjects _x select { !(_x isKindOf "EmptyDetector")}, false] call MSF_fnc_ShowHideObjects;
	};
} forEach allMissionObjects "MSF_Module_ShowHide";
