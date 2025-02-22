class MSFConfig
{
	class InventorySets
	{
		items[] = {"ACE_DefusalKit", "ACE_CableTie", "ToolKit", "ACE_UAVBattery", "ACE_wirecutter", "ACE_IR_Strobe_Item", "ACE_Yardage450", "ACE_EarPlugs"};		
		launcherRounds[] = {"MRAWS_HEAT_F", "Titan_AA", "Titan_AT"};
		grenades[] = {"HandGrenade", "SmokeShellGreen", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareCIR_F", "UGL_FlareRed_F", "UGL_FlareWhite_F", "ACE_M84", "ACE_M14", "1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203"};		
		aceMedical[] = {"ACE_bloodIV_500", "ACE_bloodIV", "ACE_quikclot", "ACE_packingBandage", "ACE_elasticBandage", "ACE_fieldDressing", "ACE_adenosine", "ACE_bodyBag", "ACE_bodyBag_blue", "ACE_bodyBag_white", "ACE_EarPlugs", "ACE_epinephrine", "ACE_morphine", "ACE_plasmaIV", "ACE_plasmaIV_500", "ACE_plasmaIV_250", "ACE_salineIV", "ACE_salineIV_250", "ACE_salineIV_500", "ACE_splint", "ACE_tourniquet"};
		aceFood[] = {"ACE_Can_RedGull", "ACE_Can_Spirit", "ACE_Canteen", "ACE_Canteen_Empty", "ACE_Canteen_Half", "ACE_Humanitarian_Ration", "ACE_MRE_BeefStew", "ACE_MRE_ChickenTikkaMasala", "ACE_MRE_ChickenHerbDumplings", "ACE_MRE_CreamChickenSoup", "ACE_MRE_CreamTomatoSoup", "ACE_MRE_LambCurry", "ACE_MRE_MeatballsPasta", "ACE_MRE_SteakVegetables", "ACE_Sunflower_Seeds", "ACE_WaterBottle", "ACE_WaterBottle_Empty", "ACE_WaterBottle_Half", "ACE_Can_Franta"};
	};
	class Weapons
	{
		Primary[] = {};
		Secondary[] = {};
		Launcher[] = {};
	};
	class UnitSets
	{
		// Groups[] = {"MSF_InfTeam_ARC", "MSF_InfTeam_AT_ARC", "MSF_InfTeam_AA_ARC", "MSF_InfSentry_ARC", "MSF_ReconTeam_ARC", "MSF_ReconPatrol_ARC",	"MSF_ReconSentry_ARC"};
		// Vehicles[] = {"MSF_O_ARC_MRAP", "MSF_O_ARC_MRAP_GMG", "MSF_O_ARC_MRAP_HMG", "MSF_O_ARC_DAGOR", "MSF_O_ARC_DAGOR_AT", "MSF_O_ARC_DAGOR_Armed"};
		// Armor[] = {};
		// Turrets[] = {"MSF_O_ARC_GMG_01", "MSF_O_ARC_GMG_01_High", "MSF_O_ARC_HMG_01", "MSF_O_ARC_HMG_01_High", "MSF_O_ARC_Mortar"};
		// Units[] = {"MSF_O_ARC_AARifleman", "MSF_O_ARC_ATRifleman", "MSF_O_ARC_Autorifleman", "MSF_O_ARC_Medic", "MSF_O_ARC_Grenadier", "MSF_O_ARC_Engineer", "MSF_O_ARC_Leader", "MSF_O_ARC_Marksman", "MSF_O_ARC_Rifleman"};
		// Air[] = {};
		// VehiclePatrols[] = {"MSF_O_ARC_MRAP", "MSF_O_ARC_MRAP_GMG", "MSF_O_ARC_MRAP_HMG", "MSF_O_ARC_DAGOR", "MSF_O_ARC_DAGOR_AT", "MSF_O_ARC_DAGOR_Armed"};
		// OPFOR - CSAT
		class Set1
		{
			Groups[] = {"O_T_InfSentry", "O_T_InfTeam", "O_T_InfTeam_AA", "O_T_InfTeam_AT", "O_T_reconPatrol", "O_T_reconSentry", "O_T_reconTeam", "O_T_SniperTeam"};
			Vehicles[] = {"O_T_APC_Tracked_02_cannon_ghex_F", "O_T_APC_Wheeled_02_rcws_v2_ghex_F", "O_T_MRAP_02_ghex_F", "O_T_MRAP_02_gmg_ghex_F", "O_T_MRAP_02_hmg_ghex_F", "O_T_LSV_02_unarmed_F", "O_T_LSV_02_armed_F", "O_T_LSV_02_AT_F"};
			Armor[] = {"O_T_MBT_04_cannon_F", "O_T_MBT_04_command_F", "O_T_MBT_02_cannon_ghex_F"};
			Turrets[] = {"O_GMG_01_F", "O_GMG_01_high_F", "O_GMG_01_A_F", "O_HMG_01_F", "O_HMG_01_high_F", "O_HMG_01_A_F", "O_Mortar_01_F"};
			Units[] = {"O_T_Soldier_F", "O_T_Soldier_LAT_F", "O_T_Soldier_HAT_F", "O_T_Soldier_SL_F", "O_T_Soldier_TL_F", "O_T_Soldier_Repair_F", "O_T_Soldier_M_F", "O_T_Soldier_AR_F", "O_T_Medic_F", "O_T_Engineer_F"};
			Air[] = {"O_Heli_Light_02_dynamicLoadout_F", "O_Heli_Attack_02_dynamicLoadout_F"};
			VehiclePatrols[] = {"O_T_MRAP_02_ghex_F", "O_T_MRAP_02_gmg_ghex_F", "O_T_MRAP_02_hmg_ghex_F", "O_T_LSV_02_unarmed_F", "O_T_LSV_02_armed_F", "O_T_LSV_02_AT_F"};
		};
		// Independant - AAF
		class Set2
		{
			Groups[] = {"HAF_InfSentry", "HAF_InfTeam", "HAF_InfTeam_AA", "HAF_InfTeam_AT", "HAF_SniperTeam", "I_InfTeam_Light"};
			Vehicles[] = {"I_MRAP_03_F", "I_MRAP_03_hmg_F"};
			Armor[] = {"I_APC_tracked_03_cannon_F", "I_APC_Wheeled_03_cannon_F", "I_MBT_03_cannon_F", "I_LT_01_cannon_F"};
			Turrets[] = {"I_HMG_02_F", "I_HMG_02_high_F", "I_GMG_01_F", "I_GMG_01_high_F", "I_HMG_01_high_F", "I_soldier_F"};
			Units[] = {"I_soldier_F", "I_Soldier_LAT_F", "I_Soldier_LAT2_F", "I_Soldier_lite_F", "I_Soldier_GL_F", "I_crew_F", "I_Soldier_AR_F"};
			Air[] = {"I_Heli_Transport_02_F", "I_Heli_light_03_dynamicLoadout_F", "I_Plane_Fighter_03_dynamicLoadout_F"};
			VehiclePatrols[] = {"I_MRAP_03_F", "I_MRAP_03_hmg_F"};
		};
		// BLUFOR - NATO
		class Set3
		{
			Groups[] = {"B_InfTeam_Light", "BUS_InfSentry", "BUS_InfTeam", "BUS_InfTeam_AA", "BUS_InfTeam_AT", "BUS_ReconPatrol", "BUS_ReconSentry", "BUS_ReconTeam", "BUS_SniperTeam"};
			Vehicles[] = {"B_MRAP_01_F", "B_MRAP_01_gmg_F", "B_MRAP_01_hmg_F", "B_LSV_01_armed_F", "B_LSV_01_unarmed_F", "B_LSV_01_AT_F", "B_Soldier_F", "B_APC_Wheeled_01_cannon_F"};
			Armor[] = {"B_APC_Tracked_01_rcws_F", "B_AFV_Wheeled_01_cannon_F", "B_AFV_Wheeled_01_up_cannon_F", "B_MBT_01_TUSK_F", "B_MBT_01_cannon_F"};
			Turrets[] = {"B_static_AT_F", "B_static_AA_F", "B_GMG_01_high_F", "B_HMG_01_high_F"};
			Units[] = {"B_crew_F", "B_Soldier_F", "B_soldier_LAT_F", "B_soldier_LAT2_F", "B_HeavyGunner_F", "B_soldier_M_F"};
			Air[] = {"B_Heli_Light_01_dynamicLoadout_F", "B_Heli_Light_01_F", "B_Heli_Attack_01_dynamicLoadout_F", "B_Heli_Transport_01_F"};
			VehiclePatrols[] = {"B_MRAP_01_F", "B_MRAP_01_gmg_F", "B_MRAP_01_hmg_F", "B_LSV_01_armed_F", "B_LSV_01_unarmed_F", "B_LSV_01_AT_F", "B_Soldier_F", "B_APC_Wheeled_01_cannon_F"};
		};
	};
	class CivUnits
	{
		Civ_African[] = {"C_Man_casual_1_F_afro","C_Man_casual_2_F_afro","C_Man_casual_3_F_afro","C_Man_casual_4_F_afro","C_Man_casual_5_F_afro","C_Man_casual_6_F_afro","C_man_polo_1_F_afro","C_man_polo_2_F_afro","C_man_polo_3_F_afro","C_man_polo_4_F_afro","C_man_polo_5_F_afro","C_man_polo_6_F_afro"};
		Civ_Asian[] = {"C_Man_casual_1_F_asia","C_Man_casual_2_F_asia","C_Man_casual_3_F_asia","C_Man_casual_4_F_asia","C_Man_casual_5_F_asia","C_Man_casual_6_F_asia","C_man_polo_1_F_asia","C_man_polo_2_F_asia","C_man_polo_3_F_asia","C_man_polo_4_F_asia","C_man_polo_5_F_asia","C_man_polo_6_F_asia"};
		Civ_European[] = {"C_Man_casual_1_F_euro","C_Man_casual_2_F_euro","C_Man_casual_3_F_euro","C_Man_casual_4_F_euro","C_Man_casual_5_F_euro","C_Man_casual_6_F_euro","C_man_polo_1_F_euro","C_man_polo_2_F_euro","C_man_polo_3_F_euro","C_man_polo_4_F_euro","C_man_polo_5_F_euro","C_man_polo_6_F_euro"};
		Civ_Livionian[] = {"C_Man_1_enoch_F","C_Man_2_enoch_F","C_Man_3_enoch_F","C_Man_4_enoch_F","C_Man_5_enoch_F","C_Man_6_enoch_F","C_Farmer_01_enoch_F"};
		Civ_Tanoan[] = {"C_Man_casual_1_F_tanoan","C_Man_casual_2_F_tanoan","C_Man_casual_3_F_tanoan","C_Man_casual_4_F_tanoan","C_Man_casual_5_F_tanoan","C_Man_casual_6_F_tanoan"};
	};
	class CargoSets
	{
		SupplyBoxes[] = {"Box_FIA_Ammo_F", "Box_FIA_Support_F", "Box_FIA_Wps_F"};
		VicAmmoBoxes[] = {"Box_NATO_AmmoVeh_F", "Box_EAF_AmmoVeh_F", "Box_East_AmmoVeh_F", "Box_IND_AmmoVeh_F"};
		MedicalBoxes[] = {"Land_PortableCabinet_01_medical_F", "Box_B_UAV_06_medical_F", "Land_PaperBox_01_small_closed_white_med_F", "ACE_medicalSupplyCrate"};
		FoodBoxes[] = {"Land_MetalCase_01_medium_F", "Land_MetalCase_01_small_F", "Box_I_UAV_06_F", "Land_PaperBox_01_small_closed_brown_food_F"};
		WeaponBoxes[] = {"Box_NATO_Wps_F", "Box_IND_Wps_F", "Box_EAF_Wps_F", "Box_T_East_Wps_F"};
		AmmoBoxes[] = {"Box_NATO_Ammo_F", "Box_IND_Ammo_F", "Box_T_East_Ammo_F", "Box_EAF_Ammo_F"};
		LauncherBoxes [] = {"Box_IND_WpsLaunch_F", "Box_EAF_WpsLaunch_F", "Box_NATO_WpsLaunch_F", "Box_East_WpsLaunch_F"};
	};
	class EmptyUnitSets
	{
		UnmannedVic[] = {
			"B_MRAP_01_F", "B_MRAP_01_gmg_F", "B_MRAP_01_hmg_F", "B_LSV_01_unarmed_F", "B_LSV_01_AT_F", "B_LSV_01_armed_F", "B_Quadbike_01_F", "B_Truck_01_covered_F",
			"I_MRAP_03_F", "I_MRAP_03_gmg_F", "I_MRAP_03_hmg_F", "I_Truck_02_covered_F","O_MRAP_02_F", "O_MRAP_02_gmg_F", "O_MRAP_02_hmg_F"
		};
		UnmannedArmor[] = {
			"I_APC_tracked_03_cannon_F", "I_APC_Wheeled_03_cannon_F", "I_MBT_03_cannon_F", "B_MBT_01_TUSK_F", "B_MBT_01_cannon_F", "O_MBT_04_command_F", "O_MBT_02_cannon_F",
			"B_MBT_01_arty_F", "O_MBT_02_arty_F", "I_Truck_02_MRL_F"
		};
		UnmannedStatic[] = {
			"B_HMG_01_A_F", "B_GMG_01_F", "B_static_AA_F", "I_Mortar_01_F"
		};
		UnmannedHeli[] = {
			"B_Heli_Transport_03_unarmed_F", "B_Heli_Light_01_F", "B_Heli_Transport_01_F", "O_Heli_Transport_04_covered_F", "O_Heli_Light_02_unarmed_F", "I_Heli_Transport_02_F",
			"I_Heli_light_03_unarmed_F"
		};
		UnmannedPlane[] = {
			"B_Plane_CAS_01_dynamicLoadout_F", "B_Plane_Fighter_01_F", "O_Plane_CAS_02_dynamicLoadout_F", "O_Plane_Fighter_02_F", "I_Plane_Fighter_04_F", "I_Plane_Fighter_03_dynamicLoadout_F"
		};
		FuelTruck[] = {
			"B_Truck_01_fuel_F", "O_Truck_02_fuel_F", "I_Truck_02_fuel_F"
		};
		AmmoTruck [] = {
			"B_Truck_01_ammo_F", "O_Truck_02_Ammo_F", "I_Truck_02_ammo_F"
		};
	};
};


