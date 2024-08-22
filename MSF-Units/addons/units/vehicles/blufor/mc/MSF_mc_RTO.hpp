class MSF_RTO :  MSF_Soldier_Base
{
	displayName = "Radio Operator (RTO)[TFAR]";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	weapons[] = {
        "MSF_rhs_SCARH", "Binocular", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer"
    };
    items[] = {
		"MineDetector", "ACE_Banana", "ACE_RangeCard"
    };
    linkedItems[] = {
        "rhsusf_spcs_ocp_teamleader_alt", "H_HelmetSpecB", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_Tan_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_SCARH", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad",  "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer",
		"rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer", "rhs_mag_20Rnd_SCAR_762x51_m62_tracer"	
	};
	RespawnItems[] = {
		"MineDetector", "ACE_Banana", "ACE_RangeCard"
	};
	respawnLinkedItems[] = {
        "rhsusf_spcs_ocp_teamleader_alt", "H_HelmetSpecB", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_Tan_TI"
	};
    uniformClass = "rhs_uniform_cu_ocp";
    backpack = "MSF_mc_RTOBackPack";
};