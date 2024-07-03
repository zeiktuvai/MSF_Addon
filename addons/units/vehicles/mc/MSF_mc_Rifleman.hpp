class MSF_Rifleman :  MSF_Soldier_Base
{
	displayName = "Rifleman";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	scope = 2;
	scopecurator = 2;
	weapons[] = {
        "MSF_rhs_hk416d", "Binocular", "rhs_weap_M320", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", 
		"1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell",	"UGL_FlareGreen_F", "rhs_mag_M397_HET",
		"rhs_mag_M397_HET", "rhs_mag_M397_HET", "ACE_40mm_Flare_green",  "ACE_40mm_Flare_green", 
		"1Rnd_Smoke_Grenade_shell"
    };
    items[] = {
		"MineDetector", "ACE_Banana"  
    };
    linkedItems[] = {
        "V_PlateCarrier2_tna_F", "rhsusf_opscore_fg_pelt_nsw", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_hk416d", "Binocular", "rhs_weap_M320", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"rhs_mag_30Rnd_556x45_Mk318_PMAG", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", 
		"1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell",	"UGL_FlareGreen_F", "rhs_mag_M397_HET",
		"rhs_mag_M397_HET", "rhs_mag_M397_HET", "ACE_40mm_Flare_green",  "ACE_40mm_Flare_green", 
		"1Rnd_Smoke_Grenade_shell" 
	};
	RespawnItems[] = {
		"MineDetector", "ACE_Banana"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier2_tna_F", "rhsusf_opscore_fg_pelt_nsw", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_mc_PMAGSupplyBackpack";
};