class MSF_SF_Diver_Exp :  MSF_Soldier_Base
{
	displayName = "Explosives Spc. Diver";
	role = "MSFSpecial";	
	editorSubcategory = "MSF_EdSubcat_Inf_Spec";
	scope = 2;
	scopeCurator = 2;
	canDeactivateMines = 1;
	weapons[] = {
        "arifle_SDAR_F", "Binocular", "hgun_P07_snds_F", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "Chemlight_green", "Chemlight_green", "Chemlight_green",
		"20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"
    };
    items[] = {
		"ACE_Banana", "muzzle_snds_L", "ACE_DefusalKit"
    };
    linkedItems[] = {
        "V_RebreatherB", "G_B_Diving", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"arifle_SDAR_F", "Binocular", "rhs_weap_M320", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "Chemlight_green", "Chemlight_green", "Chemlight_green",
		"20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag", "20Rnd_556x45_UW_mag",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"
	};
	RespawnItems[] = {
		"ACE_Banana", "muzzle_snds_L", "ACE_DefusalKit"
	};
	respawnLinkedItems[] = {
        "V_RebreatherB", "G_B_Diving", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "U_B_Wetsuit";
    backpack = "MSF_sf_ExpBackpack";
};