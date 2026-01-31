{
	private _units = [_x, (_x getVariable "Units")]call MSF_fnc_GetModuleSyncedUnits;
	[_units select { !(_x isKindOf "EmptyDetector")}, false] call MSF_fnc_ShowHideObjects;
} forEach allMissionObjects "MSF_Module_ShowHide";
