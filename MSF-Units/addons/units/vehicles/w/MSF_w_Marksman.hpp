class MSF_Marksman_W : MSF_Marksman
{
	editorSubcategory = "MSF_EdSubcat_Inf_Winter";
	weapons[] = {
		"MSF_MXM_W","Rangefinder","rhsusf_weap_glock17g4", "Throw", "Put"
	};
	magazines[] = {
		"acex_intelitems_notepad", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", 
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "rhsusf_mag_17Rnd_9x19_JHP"
	};
	items[] = {
		"ACE_Banana", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", 
		"ACE_elasticBandage", "ACE_epinephrine", "ACE_morphine", "ACE_adenosine"
	};
	linkedItems[] = {
		"NATO_WINTER_V_CHESTRIG", "NATO_WINTER_H_HELMETPLAIN", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"
	};
	respawnWeapons[] = {
		"MSF_MXM_W","Rangefinder","rhsusf_weap_glock17g4", "Throw", "Put"
	};
	respawnMagazines[] = {
		"acex_intelitems_notepad", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", 
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer",
		"rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ",
		"30Rnd_65x39_caseless_black_mag_Tracer", "30Rnd_65x39_caseless_black_mag_Tracer", "rhsusf_mag_17Rnd_9x19_JHP"
	};
	RespawnItems[] = {
		"ACE_Banana", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", 
		"ACE_elasticBandage", "ACE_epinephrine", "ACE_morphine", "ACE_adenosine"
	};
	respawnLinkedItems[] = {
		"NATO_WINTER_V_CHESTRIG", "NATO_WINTER_H_HELMETPLAIN", "ItemMap", "ItemRadio", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI"			
	};
	uniformClass = "NATO_WINTER_UNIFORM_GHILLIE";
	backpack = "MSF_w_PMAGBackpack";
};