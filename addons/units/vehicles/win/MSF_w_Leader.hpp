class MSF_Leader_W :  MSF_Leader
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXGL_White", "Binocular", "Throw", "Put"
    };
    magazines[] = {
		"acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"1Rnd_HE_Grenade_shell", "30Rnd_65x39_caseless_black_mag_Tracer", "ACE_HandFlare_Green",
		"ACE_HandFlare_Green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F",
		"1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
    };
    items[] = {
		"ACE_Banana", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_wirecutter", "ACE_WaterBottle", "ACE_epinephrine", "ACE_splint", "ACE_splint", 
		"ACE_adenosine"       
    };
    linkedItems[] = {
        "NATO_WINTER_V_PLATECARRIERSPEC", "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_BALACLAVA_STEALTH", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_Tan_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXGL_White", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
		"1Rnd_HE_Grenade_shell", "30Rnd_65x39_caseless_black_mag_Tracer", "ACE_HandFlare_Green",
		"ACE_HandFlare_Green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F",
		"1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_wirecutter", "ACE_WaterBottle", "ACE_epinephrine", "ACE_splint", "ACE_splint",
		"ACE_adenosine"
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_V_PLATECARRIERSPEC", "NATO_WINTER_H_HELMETPLAIN", "NATO_WINTER_BALACLAVA_STEALTH", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_Tan_TI"		
	};
    uniformClass = "NATO_WINTER_UNIFORM";
    backpack = "MSF_w_PMAGSupplyBackpack";
};