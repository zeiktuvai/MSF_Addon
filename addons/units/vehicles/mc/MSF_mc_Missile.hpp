class MSF_ATRifleman :  MSF_Soldier_Base
{
	displayName = "AT Specialist";
	role = "MSFSpecial";
	icon = "iconManAT";
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	scope = 2;
	scopecurator = 2;
	weapons[] = {
        "MSF_rhs_hk416d", "Rangefinder", "launch_MRAWS_green_F", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_maaws_HEAT",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red"
    };
    items[] = {
		"ACE_Banana"  
    };
    linkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "rhs_googles_orange", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_hk416d", "Rangefinder", "launch_MRAWS_green_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_maaws_HEAT",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "rhs_googles_orange", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_mc_ATBackpack";
};

class MSF_AARifleman :  MSF_Soldier_Base
{
	displayName = "AA Specialist";
	role = "MSFSpecial";
	icon = "iconManAT";
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	scope = 2;
	scopecurator = 2;
	weapons[] = {
        "MSF_rhs_hk416d", "Rangefinder", "launch_I_Titan_F", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "Titan_AA",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red"
    };
    items[] = {
		"ACE_Banana"  
    };
    linkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "rhs_googles_orange", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_hk416d", "Rangefinder", "launch_I_Titan_F", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "Titan_AA",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red"
	};
	RespawnItems[] = {
		"ACE_Banana"
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier2_tna_F", "H_HelmetB_Enh_tna_F", "rhs_googles_orange", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_mc_AABackpack";
};