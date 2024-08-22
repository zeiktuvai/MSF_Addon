class MSF_Pilot :  MSF_Soldier_Base
{
	displayName = "Pilot";
	role = "MSFCrew";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	icon = "iconManEngineer";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_rhs_SCARH_STD", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellRed", "SmokeShellRed", "9Rnd_45ACP_Mag", 
		"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhsusf_mag_7x45acp_MHP"
    };
    items[] = {
		"ACE_EarPlugs", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_MapTools", "ACE_RangeCard", "ACE_Banana", "ACE_packingBandage", "ACE_packingBandage",
		"ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_adenosine", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_splint",
		"ACE_tourniquet", "ACE_tourniquet", "ACE_salineIV_500", "ACE_DAGR", "ACE_WaterBottle", "ACE_Canteen", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot",
		"ACE_quikclot", "ACE_quikclot", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_salineIV_500", "ACE_bodyBag", "ACE_bloodIV", "ACE_microDAGR",
		"muzzle_snds_M"
    };
    linkedItems[] = {
        "V_Chestrig_oli", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI",
    };	
	respawnWeapons[] = {
		"MSF_rhs_SCARH_STD", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellRed", "SmokeShellRed", "9Rnd_45ACP_Mag", 
		"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhsusf_mag_7x45acp_MHP"
	};
	RespawnItems[] = {
		"ACE_EarPlugs", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_MapTools", "ACE_RangeCard", "ACE_Banana", "ACE_packingBandage", "ACE_packingBandage",
		"ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_adenosine", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_splint",
		"ACE_tourniquet", "ACE_tourniquet", "ACE_salineIV_500", "ACE_DAGR", "ACE_WaterBottle", "ACE_Canteen", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot",
		"ACE_quikclot", "ACE_quikclot", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_salineIV_500", "ACE_bodyBag", "ACE_bloodIV", "ACE_microDAGR",
		"muzzle_snds_M"
	};
	respawnLinkedItems[] = {
        "V_Chestrig_oli", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI",
	};
    uniformClass = "U_B_HeliPilotCoveralls";
    backpack = "B_Parachute";
};

