class MSF_Mine_W :  MSF_Mine
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXSW_W", "Binocular", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer"
    };
    items[] = {
		"ACE_DefusalKit", "MineDetector", "ACE_Banana" 
    };
    linkedItems[] = {
        "V_EOD_blue_F", "rhs_altyn_visordown", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
    };	
	respawnWeapons[] = {
		"MSF_MXSW_W", "Binocular", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer"
	};
	RespawnItems[] = {
		"ACE_DefusalKit", "MineDetector", "ACE_Banana"
	};
	respawnLinkedItems[] = {
        "V_EOD_blue_F", "rhs_altyn_visordown", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
    uniformClass = "NATO_WINTER_UNIFORM";
    backpack = "MSF_w_MineBackpack";
};