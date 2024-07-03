class MSF_Gunner :  MSF_Soldier_Base
{
	displayName = "Support Gunner";
	icon = "iconManMG";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf_Trop";
	scope = 2;
	scopecurator = 2;
	weapons[] = {
        "MSF_rhs_m249", "Binocular", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", 
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp", 
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", 
        "rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote"
    };
    items[] = {
		"ACE_Banana", "ACE_WaterBottle"        
    };
    linkedItems[] = {
        "V_PlateCarrier1_tna_F", "rhsusf_opscore_fg_pelt_nsw", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
        "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_rhs_m249", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", 
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp", 
		"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", 
        "rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_WaterBottle" 
	};
	respawnLinkedItems[] = {
        "V_PlateCarrier1_tna_F", "rhsusf_opscore_fg_pelt_nsw", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
        "JAS_GPNVG18_blk_TI"	
	};
    uniformClass = "U_B_T_Soldier_SL_F";
    backpack = "MSF_mc_BaseBackpack";
};