/*
	Author: zeik_tuvai

	Description:
		Returns configured loadouts based on player object class.

	Parameter(s):
        string - Object class.
		int - selected uniform type.

	Examples:
		[class, type] call MSF_fnc_GetDynamicLoadoutByClass;


	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/

params ["_class", "_uniformType"];
private ["_soldierClasses", "_initialLoadout", "_respawnLoadouts", "_return"];
_return = [];

switch (_uniformType) do
{
	case 0: {
		_soldierClasses = createHashMapFromArray
		[
			["B_Soldier_F", ["TFY_Rifleman"]],
			["B_Soldier_A_F", ["TFY_Rifleman"]],
			["B_soldier_AR_F", ["TFY_Rifleman"]],
			["B_Soldier_lite_F", ["TFY_Rifleman"]],
			["B_Soldier_GL_F", ["TFY_Grenadier"]],
			["B_medic_F", ["TFY_Medic"]],
			["B_crew_F", ["TFY_VehicleCrewman"]],
			["B_engineer_F", ["TFY_VehicleCrewman"]],
			["B_soldier_repair_F", ["TFY_VehicleCrewman"]],
			["B_support_GMG_F", ["TFY_Autorifleman"]],
			["B_support_MG_F", ["TFY_Autorifleman"]],
			["B_HeavyGunner_F", ["TFY_Autorifleman"]],
			["B_support_Mort_F", ["TFY_Autorifleman"]],
			["B_soldier_M_F", ["TFY_Marksman"]],
			["B_Sharpshooter_F", ["TFY_Marksman"]],
			["B_Soldier_SL_F", ["TFY_Commander"]],
			["B_Soldier_TL_F", ["TFY_Commander"]],
			["B_soldier_UAV_F", ["TFY_UAVOperator"]],
			["B_soldier_UAV_06_F", ["TFY_UAVOperator"]],
			["B_soldier_UAV_06_medical_F", ["TFY_UAVOperator"]],
			["B_soldier_UGV_02_Demining_F", ["TFY_UAVOperator"]],
			["B_soldier_UGV_02_Science_F", ["TFY_UAVOperator"]],
			["B_soldier_AT_F", ["TFY_ATRifleman", "TFY_AARifleman"]],
			["B_soldier_AA_F", ["TFY_AARifleman", "TFY_ATRifleman"]],
			["B_soldier_LAT_F", ["TFY_ATRifleman"]],
			["B_soldier_LAT2_F", ["TFY_ATRifleman"]],
			["B_diver_F", ["TFY_Diver", "TFY_Rifleman", "TFY_Autorifleman", "TFY_ATRifleman"]],
			["B_diver_TL_F", ["TFY_Diver", "TFY_Rifleman", "TFY_Autorifleman", "TFY_ATRifleman"]],
			["B_diver_exp_F", ["TFY_Diver_Expl", "TFY_Rifleman", "TFY_Autorifleman", "TFY_ATRifleman"]],
			["B_soldier_mine_F", ["TFY_MineSpec"]]
		];
	};
	case 1: {
		_soldierClasses = createHashMapFromArray
		[
			["B_Soldier_F", ["TFY_Rifleman_N"]],
			["B_Soldier_A_F", ["TFY_Rifleman_N"]],
			["B_soldier_AR_F", ["TFY_Rifleman_N"]],
			["B_Soldier_lite_F", ["TFY_Rifleman_N"]],
			["B_Soldier_GL_F", ["TFY_Grenadier_N"]],
			["B_medic_F", ["TFY_Medic_N"]],
			["B_crew_F", ["TFY_VehicleCrewman_N"]],
			["B_engineer_F", ["TFY_VehicleCrewman_N"]],
			["B_soldier_repair_F", ["TFY_VehicleCrewman_N"]],
			["B_support_GMG_F", ["TFY_Autorifleman_N"]],
			["B_support_MG_F", ["TFY_Autorifleman_N"]],
			["B_HeavyGunner_F", ["TFY_Autorifleman_N"]],
			["B_support_Mort_F", ["TFY_Autorifleman_N"]],
			["B_soldier_M_F", ["TFY_Marksman_N"]],
			["B_Sharpshooter_F", ["TFY_Marksman_N"]],
			["B_Soldier_SL_F", ["TFY_Commander_N"]],
			["B_Soldier_TL_F", ["TFY_Commander_N"]],
			["B_soldier_UAV_F", ["TFY_UAVOperator_N"]],
			["B_soldier_UAV_06_F", ["TFY_UAVOperator_N"]],
			["B_soldier_UAV_06_medical_F", ["TFY_UAVOperator_N"]],
			["B_soldier_UGV_02_Demining_F", ["TFY_UAVOperator_N"]],
			["B_soldier_UGV_02_Science_F", ["TFY_UAVOperator_N"]],
			["B_soldier_AT_F", ["TFY_ATRifleman_N", "TFY_AARifleman_N"]],
			["B_soldier_AA_F", ["TFY_AARifleman_N", "TFY_ATRifleman_N"]],
			["B_soldier_LAT_F", ["TFY_ATRifleman_N"]],
			["B_soldier_LAT2_F", ["TFY_ATRifleman_N"]],
			["B_diver_F", ["TFY_Diver", "TFY_Rifleman", "TFY_Autorifleman", "TFY_ATRifleman"]],
			["B_diver_TL_F", ["TFY_Diver", "TFY_Rifleman", "TFY_Autorifleman", "TFY_ATRifleman"]],
			["B_diver_exp_F", ["TFY_Diver_Expl", "TFY_Rifleman", "TFY_Autorifleman", "TFY_ATRifleman"]],
			["B_soldier_mine_F", ["TFY_MineSpec"]]
		];
	};
	case 2: {
		_soldierClasses = createHashMapFromArray
		[
			["B_Soldier_F", ["TFY_Winter_Rifleman"]],
			["B_Soldier_A_F", ["TFY_Winter_Rifleman"]],
			["B_soldier_AR_F", ["TFY_Winter_Rifleman"]],
			["B_Soldier_lite_F", ["TFY_Winter_Rifleman"]],
			["B_Soldier_GL_F", ["TFY_Winter_Grenadier"]],
			["B_medic_F", ["TFY_Winter_Medic"]],
			["B_crew_F", ["TFY_Winter_VehicleCrewman"]],
			["B_engineer_F", ["TFY_Winter_VehicleCrewman"]],
			["B_soldier_repair_F", ["TFY_Winter_VehicleCrewman"]],
			["B_support_GMG_F", ["TFY_Winter_Gunner"]],
			["B_support_MG_F", ["TFY_Winter_Gunner"]],
			["B_HeavyGunner_F", ["TFY_Winter_Gunner"]],
			["B_support_Mort_F", ["TFY_Winter_Gunner"]],
			["B_soldier_M_F", ["TFY_Winter_Marksman"]],
			["B_Sharpshooter_F", ["TFY_Winter_Marksman"]],
			["B_Soldier_SL_F", ["TFY_Winter_Commander"]],
			["B_Soldier_TL_F", ["TFY_Winter_Commander"]],
			["B_soldier_UAV_F", ["TFY_Winter_UAVOperator"]],
			["B_soldier_UAV_06_F", ["TFY_Winter_UAVOperator"]],
			["B_soldier_UAV_06_medical_F", ["TFY_Winter_UAVOperator"]],
			["B_soldier_UGV_02_Demining_F", ["TFY_Winter_UAVOperator"]],
			["B_soldier_UGV_02_Science_F", ["TFY_Winter_UAVOperator"]],
			["B_soldier_AT_F", ["TFY_Winter_ATRifleman", "TFY_Winter_AARifleman"]],
			["B_soldier_AA_F", ["TFY_Winter_AARifleman", "TFY_Winter_ATRifleman"]],
			["B_soldier_LAT_F", ["TFY_Winter_ATRifleman"]],
			["B_soldier_LAT2_F", ["TFY_Winter_ATRifleman"]],
			["B_diver_F", ["TFY_Diver", "TFY_Winter_Rifleman", "TFY_Winter_Gunner", "TFY_Winter_ATRifleman"]],
			["B_diver_TL_F", ["TFY_Diver", "TFY_Winter_Rifleman", "TFY_Winter_Gunner", "TFY_Winter_ATRifleman"]],
			["B_diver_exp_F", ["TFY_Diver_Expl", "TFY_Winter_Rifleman", "TFY_Winter_Gunner", "TFY_Winter_ATRifleman"]],
			["B_soldier_mine_F", ["TFY_MineSpec"]],
			["NATO_WINTER_SOLDIER_A", ["TFY_Winter_Rifleman"]],
			["NATO_WINTER_SOLDIER", ["TFY_Winter_Rifleman"]],		
			["NATO_WINTER_SOLDIER_LITE", ["TFY_Winter_Rifleman"]],		
			["NATO_WINTER_SOLDIER_GL", ["TFY_Winter_Grenadier"]],
			["NATO_WINTER_SOLDIER_LAT", ["TFY_Winter_ATRifleman"]],
			["NATO_WINTER_SOLDIER_LAT2", ["TFY_Winter_ATRifleman"]],
			["NATO_WINTER_SOLDIER_AT", ["TFY_Winter_ATRifleman", "TFY_Winter_AARifleman"]],
			["NATO_WINTER_SOLDIER_AA", ["TFY_Winter_AARifleman", "TFY_Winter_ATRifleman"]],
			["NATO_WINTER_SOLDIER_TL", ["TFY_Winter_Rifleman"]],
			["NATO_WINTER_SOLDIER_M", ["TFY_Winter_Marksman"]],
			["NATO_WINTER_SOLDIER_SHARPSHOOTER", ["TFY_Winter_Marksman"]],
			["NATO_WINTER_SNIPER", ["TFY_Winter_Marksman"]],
			["NATO_WINTER_SOLDIER_AR", ["TFY_Winter_Gunner"]],
			["NATO_WINTER_SOLDIER_GMG", ["TFY_Winter_Gunner"]],
			["NATO_WINTER_SOLDIER_HMG", ["TFY_Winter_Gunner"]],
			["NATO_WINTER_SOLDIER_MORT", ["TFY_Winter_Gunner"]],
			["NATO_WINTER_SOLDIER_HEAVYGUNNER", ["TFY_Winter_Gunner"]],
			["NATO_WINTER_SOLDIER_SL", ["TFY_Winter_Commander"]],
			["NATO_WINTER_CREW", ["TFY_Winter_VehicleCrewman"]],
			["NATO_WINTER_SOLDIER_REPAIR", ["TFY_Winter_VehicleCrewman"]],
			["NATO_WINTER_SOLDIER_ENGINEER", ["TFY_Winter_VehicleCrewman"]],
			["NATO_WINTER_SOLDIER_MEDIC", ["TFY_Winter_Medic"]],
			["NATO_WINTER_SOLDIER_UAV", ["TFY_Winter_UAVOperator"]],
			["NATO_WINTER_SOLDIER_EXP", ["TFY_Winter_MineSpec"]]
		];
	};
};

if (_class in _soldierClasses) then {
	_initialLoadout = _soldierClasses get _class select 0;
	_respawnLoadouts = _soldierClasses get _class;
	_return = [_initialLoadout, _respawnLoadouts];	
};

_return;