class MSF_Pilot_W :  MSF_Pilot
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
        "MSF_MXC_W", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellRed", "SmokeShellRed", "9Rnd_45ACP_Mag", 
		"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "rhsusf_mag_7x45acp_MHP"
    };
    items[] = {
		"ACE_EarPlugs", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_MapTools", "ACE_RangeCard", "ACE_Banana", "ACE_packingBandage", "ACE_packingBandage",
		"ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_adenosine", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_splint",
		"ACE_tourniquet", "ACE_tourniquet", "ACE_salineIV_500", "ACE_DAGR", "ACE_WaterBottle", "ACE_Canteen", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot",
		"ACE_quikclot", "ACE_quikclot", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_salineIV_500", "ACE_bodyBag", "ACE_bloodIV", "ACE_microDAGR",
		"muzzle_snds_M"
    };
    linkedItems[] = {
        "NATO_WINTER_V_CHESTRIG", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI",
    };	
	respawnWeapons[] = {
		"MSF_MXC_W", "Binocular", "rhsusf_weap_m1911a1", "Throw", "Put"
	};
	respawnMagazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellRed", "SmokeShellRed", "9Rnd_45ACP_Mag", 
		"9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer", "rhsusf_mag_7x45acp_MHP"
	};
	RespawnItems[] = {
		"ACE_EarPlugs", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_MapTools", "ACE_RangeCard", "ACE_Banana", "ACE_packingBandage", "ACE_packingBandage",
		"ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_adenosine", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_splint",
		"ACE_tourniquet", "ACE_tourniquet", "ACE_salineIV_500", "ACE_DAGR", "ACE_WaterBottle", "ACE_Canteen", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot",
		"ACE_quikclot", "ACE_quikclot", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_salineIV_500", "ACE_bodyBag", "ACE_bloodIV", "ACE_microDAGR",
		"muzzle_snds_M"
	};
	respawnLinkedItems[] = {
        "NATO_WINTER_V_CHESTRIG", "H_PilotHelmetHeli_B", "G_Tactical_Clear", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
		"JAS_GPNVG18_blk_TI",
	};
    uniformClass = "NATO_WINTER_HELIPILOT_COVERALLS";
    backpack = "B_Parachute";
};
