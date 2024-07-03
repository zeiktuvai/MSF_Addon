class MSF_Rifleman :  MSF_Soldier_Base
{
	displayName = "Rifleman";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
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
        "rhsusf_spcs_ocp_rifleman", "rhsusf_opscore_mc_pelt", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_Tan_TI"
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
        "rhsusf_spcs_ocp_rifleman", "rhsusf_opscore_mc_pelt", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_Tan_TI"
	};
    uniformClass = "rhs_uniform_cu_ocp";
    backpack = "MSF_mc_PMAGSupplyBackpack";
};