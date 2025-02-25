/*
	Author: zeik_tuvai

	Description:
		MSF Mission Initialization script.  Is used to automatically apply settings and handlers to enabled objects.
        
	Examples:
		[] call MSF_fnc_Init;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/


if (isServer) then {
	[] call MSF_fnc_ACEMedUnconcious;
	[] call MSF_fnc_InfiniteFuelHandler;	
	[] call MSF_fnc_SetUnitDialogOption;
	[] call MSF_fnc_ApplyDamageReduction;
	[] call MSF_fnc_ApplyObjectActions;

	if (getMissionConfigValue ["MSF_Mission_GM", false]) then {
		[] call MSF_fnc_ApplyGMActions;
	};

	if (getMissionConfigValue ["MSF_Mission_EndMission", false]) then {
		[] call MSF_fnc_ApplyEndMission;
	};	

	if (getMissionConfigValue ["MSF_Mission_VicCustomization", true]) then {
		[] call MSF_fnc_RespawnVehicleCustomization;
	};

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

	[] call MSF_fnc_InitMSFHandler;
};

if (!isServer) then
{	
	[player] call MSF_fnc_ConfigRespawnOnPlayer;
	[player, didJIP] call MSF_fnc_JIPSpawnNearPlayer;
	[] call MSF_fnc_ApplyDamageReduction;
};

if (!isDedicated) then
{
	if (MSF_Unit_EnableOverride_W) then {

		//_return select 0 params ["_rifle", "_acc", "_mags"];
		[] call MSF_fnc_AddInventoryOverrideOption;
	};
};

[] call MSF_fnc_RandomSpawn;
