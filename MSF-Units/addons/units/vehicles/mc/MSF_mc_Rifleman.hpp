class MSF_Rifleman :  MSF_Soldier_Base
{
	displayName = "Rifleman";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_rhs_SCARH", "Binocular", "rhs_weap_M320", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", 
		"1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell",	"UGL_FlareGreen_F", "rhs_mag_M397_HET",
		"rhs_mag_M397_HET", "rhs_mag_M397_HET", "ACE_40mm_Flare_green",  "ACE_40mm_Flare_green", 
		"1Rnd_Smoke_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
    };
    items[] = {
		"MineDetector", "ACE_Banana", "ACE_RangeCard"
    };
    linkedItems[] = {
        "rhsusf_spcs_ocp_rifleman", "rhsusf_opscore_mc_pelt", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_Tan_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_SCARH", "Binocular", "rhs_weap_M320", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", 
		"1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell",	"UGL_FlareGreen_F", "rhs_mag_M397_HET",
		"rhs_mag_M397_HET", "rhs_mag_M397_HET", "ACE_40mm_Flare_green",  "ACE_40mm_Flare_green", 
		"1Rnd_Smoke_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
	};
	RespawnItems[] = {
		"MineDetector", "ACE_Banana", "ACE_RangeCard"
	};
	respawnLinkedItems[] = {
        "rhsusf_spcs_ocp_rifleman", "rhsusf_opscore_mc_pelt", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_Tan_TI"
	};
    uniformClass = "rhs_uniform_cu_ocp";
    backpack = "MSF_mc_PMAGSupplyBackpack";
};