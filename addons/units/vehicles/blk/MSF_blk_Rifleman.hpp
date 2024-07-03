class MSF_Rifleman_N : MSF_Rifleman
{
	displayName = "Rifleman";
	role = "MSFAssault";	
	editorSubcategory = "MSF_EdSubcat_Inf_Night";
	scope = 2;
	linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "rhs_googles_orange", "ItemMap", "ItemCompass", "ACE_Altimeter",
		"ItemGPS", "JAS_GPNVG18_blk_TI"        
    };
	respawnLinkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "rhs_googles_orange", "ItemMap", "ItemCompass", "ACE_Altimeter",
		"ItemGPS", "JAS_GPNVG18_blk_TI"        
    };
    uniformClass = "rhs_uniform_g3_blk";
    backpack = "MSF_mc_PMAGSupplyBackpack";
};

//Put supressor in inventory muzzle_snds_M