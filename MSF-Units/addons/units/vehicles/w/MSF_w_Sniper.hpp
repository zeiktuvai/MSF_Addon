class MSF_Sniper_W : MSF_Sniper
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
		"MSF_rhs_M107b","Rangefinder","rhsusf_weap_m1911a1", "Throw", "Put"
	};
	linkedItems[] = {
		"NATO_WINTER_V_PLATECARRIER1", "H_Shemag_olive_hs", "G_Balaclava_TI_tna_F", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
	respawnWeapons[] = {
		"MSF_rhs_M107b","Rangefinder","rhsusf_weap_m1911a1", "Throw", "Put"
	};
	respawnLinkedItems[] = {
		"NATO_WINTER_V_PLATECARRIER1", "H_Shemag_olive_hs", "G_Balaclava_TI_tna_F", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"		
	};
	uniformClass = "NATO_WINTER_UNIFORM_GHILLIE";
	backpack = "MSF_w_SniperBackpack";
};