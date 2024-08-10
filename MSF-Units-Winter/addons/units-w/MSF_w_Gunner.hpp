class MSF_Gunner_W :  MSF_Gunner
{	
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MMG_W", "Binocular", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "130Rnd_338_Mag", "130Rnd_338_Mag"
    };
    items[] = {
		"ACE_Banana", "ACE_WaterBottle"        
    };
    linkedItems[] = {
        "NATO_WINTER_V_PLATECARRIERSPEC", "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_BALACLAVA_STEALTH_G", "ItemMap", "ItemRadio", "ItemCompass", 
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MMG_W", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "130Rnd_338_Mag", "130Rnd_338_Mag"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_WaterBottle" 
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_V_PLATECARRIERSPEC", "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_BALACLAVA_STEALTH_G", "ItemMap", "ItemRadio", "ItemCompass",
		"ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"	
	};
    uniformClass = "NATO_WINTER_UNIFORM";
    backpack = "MSF_w_SAWBackpack";
};