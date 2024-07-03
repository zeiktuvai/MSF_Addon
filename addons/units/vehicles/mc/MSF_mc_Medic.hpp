class MSF_Medic :  MSF_Soldier_Base
{
	displayName = "Combat Medic";
	role = "MSFSupport";	
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	scope = 2;
	scopecurator = 2;
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
        "V_TacVestIR_blk", "H_HelmetB_Light_tna_F", "rhs_googles_clear", "ItemMap", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
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
        "V_TacVestIR_blk", "H_HelmetB_Light_tna_F", "rhs_googles_clear", "ItemMap", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", 
		"JAS_GPNVG18_blk_TI"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_mc_MedicBackpack";
};
