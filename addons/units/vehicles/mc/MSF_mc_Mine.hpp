class MSF_Mine :  MSF_Soldier_Base
{
	displayName = "Mine Specialist";
	role = "MSFSupport";	
	editorSubcategory = "MSF_EdSubcat_Inf";
	scope = 2;
	scopeCurator = 2;
	canDeactivateMines = 1;
	icon = "iconManExplosive";
	weapons[] = {
        "MSF_rhs_hk416d", "Binocular", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red"
    };
    items[] = {
		"ACE_DefusalKit", "MineDetector", "ACE_Banana" 
    };
    linkedItems[] = {
        "V_EOD_olive_F", "rhs_altyn_visordown", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_hk416d", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",
		"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red"
	};
	RespawnItems[] = {
		"ACE_DefusalKit", "MineDetector", "ACE_Banana"
	};
	respawnLinkedItems[] = {
        "V_EOD_olive_F", "rhs_altyn_visordown", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_mc_MineBackpack";
};