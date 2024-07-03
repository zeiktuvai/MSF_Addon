class MSF_Crewman :  MSF_Soldier_Base
{
	displayName = "Vehicle Crewman";
	role = "MSFCrew";	
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	icon = "iconManEngineer";
	scope = 2;
	scopecurator = 2;
	weapons[] = {
        "MSF_rhs_hk416d", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag",
		"9Rnd_45ACP_Mag", "rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhsusf_mag_7x45acp_MHP"
    };
    items[] = {
		"ACE_ATragMX", "ACE_RangeCard", "ACE_Banana", "ToolKit"
    };
    linkedItems[] = {
        "V_PlateCarrier2_tna_F", "rhsusf_opscore_fg_pelt_nsw", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_hk416d", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag",
		"9Rnd_45ACP_Mag", "rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhsusf_mag_7x45acp_MHP"
	};
	RespawnItems[] = {
		 "ACE_ATragMX", "ACE_RangeCard", "ACE_Banana", "ToolKit"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetCrew_B", "G_Tactical_Clear", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI"
	};
    uniformClass = "U_B_HeliPilotCoveralls";
    backpack = "MSF_mc_PMAGBackpack";
};