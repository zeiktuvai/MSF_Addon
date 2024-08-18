class MSF_Grenadier :  MSF_Soldier_Base
{
	displayName = "Grenadier";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_rhs_SCARH_STD", "rhs_weap_M320", "Rangefinder", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_HE_Grenade_shell", 
		"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F", "rhs_mag_M397_HET",
		"rhs_mag_M397_HET", "rhs_mag_M433_HEDP", "rhs_mag_M433_HEDP", "rhs_mag_M441_HE", "rhs_mag_M441_HE",
		"ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "rhs_mag_m4009",
		"1Rnd_HE_Grenade_shell"
    };
    items[] = {
		"ACE_Banana"      
    };
    linkedItems[] = {
        "rhsusf_spcs_ocp_grenadier", "rhsusf_opscore_mc_cover_pelt_nsw", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_Tan_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_SCARH_STD", "rhs_weap_M320", "Rangefinder", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_HE_Grenade_shell", 
		"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F", "rhs_mag_M397_HET",
		"rhs_mag_M397_HET", "rhs_mag_M433_HEDP", "rhs_mag_M433_HEDP", "rhs_mag_M441_HE", "rhs_mag_M441_HE",
		"ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "rhs_mag_m4009",
		"1Rnd_HE_Grenade_shell"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "rhsusf_spcs_ocp_grenadier", "rhsusf_opscore_mc_cover_pelt_nsw", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_Tan_TI"	
	};
    uniformClass = "rhs_uniform_cu_ocp";
    backpack = "MSF_mc_PMAGBackpack";
};