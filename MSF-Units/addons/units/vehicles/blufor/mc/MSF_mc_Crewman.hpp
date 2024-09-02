class MSF_Crewman :  MSF_Soldier_Base
{
	displayName = "Vehicle Crewman";
	role = "MSFCrew";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	icon = "iconManEngineer";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_rhs_SCARH", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
        "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag",
		"9Rnd_45ACP_Mag", "rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhsusf_mag_7x45acp_MHP"
    };
    items[] = {
		"ACE_ATragMX", "ACE_RangeCard", "ACE_Banana", "ToolKit"
    };
    linkedItems[] = {
        "rhsusf_spcs_ocp_crewman", "H_HelmetCrew_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS",
		"JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_SCARH", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellRed", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
        "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag",
		"9Rnd_45ACP_Mag", "rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhsusf_mag_7x45acp_MHP"
	};
	RespawnItems[] = {
		 "ACE_ATragMX", "ACE_RangeCard", "ACE_Banana", "ToolKit"
	};
	respawnLinkedItems[] = {
        "rhsusf_spcs_ocp_crewman", "H_HelmetCrew_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI"
	};
    uniformClass = "U_B_HeliPilotCoveralls";
    backpack = "MSF_mc_PMAGBackpack";
};