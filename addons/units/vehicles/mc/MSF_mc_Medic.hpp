class MSF_Medic :  MSF_Soldier_Base
{
	displayName = "Combat Medic";
	role = "MSFSupport";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
    attendant = 1;
	weapons[] = {
        "MSF_rhs_hk416d", "Binocular", "rhs_weap_rsp30_red", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_Mk318_SCAR", "rhs_mag_rsp30_red"
    };
    items[] = {
		"ACE_Banana"  
    };
    linkedItems[] = {
        "rhsusf_spcs_ocp_medic", "H_HelmetB_light", "rhs_googles_clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_hk416d", "Binocular", "rhs_weap_rsp30_red", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_Mk318_SCAR", "rhs_mag_rsp30_red"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "rhsusf_spcs_ocp_medic", "H_HelmetB_light", "rhs_googles_clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk_TI"
	};
    uniformClass = "rhs_uniform_cu_ocp";
    backpack = "MSF_mc_MedicBackpack";
};