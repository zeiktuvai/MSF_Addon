class TFY_Commander_N
{
    displayName = "Commander";
    icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa";
    role = "TFY_Leader";
    weapons[] = {"rhs_weap_m16a4_imod_M203", "Binocular"};
    magazines[] = {
        "acex_intelitems_notepad", "HandGrenade", "HandGrenade", "HandGrenade", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
        "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "ACE_HandFlare_Green", "ACE_HandFlare_Green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", 
        "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F", "rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan", "1Rnd_HE_Grenade_shell"
        };
    items[] = {
        "ACE_EarPlugs", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_MapTools", "ACE_wirecutter", "ACE_WaterBottle", 
        "ACE_WaterBottle", "ACE_Banana", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bloodIV", "ACE_bodyBag", 
        "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", 
        "ACE_splint", "ACE_splint", "ACE_splint", "ACE_adenosine", "ACE_adenosine", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", 
        "ACE_salineIV_500", "ACE_plasmaIV_500", "ACE_Canteen","ACE_HuntIR_monitor"};
    linkedItems[] = {
        "V_PlateCarrier1_blk", "H_HelmetB_black", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_blk_TI",  "rhsusf_acc_su230", "muzzle_snds_M", "rhsusf_acc_anpeq15side_bk"
    };  
    uniformClass = "rhs_uniform_g3_blk";
    backpack = "B_TacticalPack_blk";
};
class TFY_Autorifleman_N
{
    displayName = "Autorifleman";
    icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
    role = "TFY_Assault";
    weapons[] = {
        "rhs_weap_m249", "Binocular"
    };
    magazines[] = {
        "acex_intelitems_notepad", "rhsusf_100Rnd_556x45_M855_soft_pouch", "HandGrenade", "HandGrenade", "HandGrenade", "SmokeShellGreen", 
        "SmokeShellGreen", "SmokeShellGreen", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote", 
        "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", 
        "rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote"
    };
    items[] = {
        "ACE_MapTools", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_IR_Strobe_Item", "ACE_EarPlugs", "ACE_CableTie", "ACE_WaterBottle", "ACE_WaterBottle",
        "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", 
        "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV", "ACE_bodyBag", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", 
        "ACE_morphine", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "ACE_Canteen", "ACE_salineIV_500", "ACE_salineIV_500"
    };
    linkedItems[] = {
        "V_PlateCarrier1_blk", "H_HelmetB_black", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", 
        "JAS_GPNVG18_blk_TI", "rhsusf_acc_saw_bipod"
    };
    uniformClass = "rhs_uniform_g3_blk";
    backpack = "B_AssaultPack_blk";
};
class TFY_Marksman_N
{
    displayName = "Marksman";
    icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
    role = "TFY_Recon";
    weapons[] = {
        "rhs_weap_m14ebrri","Rangefinder","rhsusf_weap_glock17g4"
    };
    magazines[] = {
        "acex_intelitems_notepad", "HandGrenade", "HandGrenade", "SmokeShellGreen", "SmokeShellRed", "rhsusf_20Rnd_762x51_m993_Mag", 
        "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", 
        "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_mag_17Rnd_9x19_FMJ", "rhsusf_20Rnd_762x51_m993_Mag", 
        "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", "rhsusf_20Rnd_762x51_m993_Mag", 
        "rhsusf_mag_17Rnd_9x19_JHP"
    };
    items[] = {
        "ACE_EarPlugs", "ACE_MapTools", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_HuntIR_monitor", "ACE_WaterBottle", 
        "ACE_bloodIV", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_quikclot", 
        "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", "ACE_elasticBandage", 
        "ACE_elasticBandage", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", 
        "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_adenosine", "ACE_adenosine", "ACE_salineIV_500", "ACE_salineIV_500", "ACE_Canteen"
    };
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetB_black", "G_Balaclava_TI_tna_F", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI", 
        "rhsusf_acc_anpeq15side_bk", "NForce_Atcr_RMR_Top_SkeetIR_Down", "rhsusf_acc_harris_bipod", "rhsusf_acc_aac_762sdn6_silencer"
    };
    uniformClass = "rhs_uniform_g3_blk";
    backpack = "B_AssaultPack_blk";
};
class TFY_Rifleman_N
{
    displayName = "Rifleman";
    icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
    role = "TFY_Assault";
    weapons[] = {
        "rhs_weap_hk416d145","Binocular","rhs_weap_M320"
    };
    magazines[] = {
        "acex_intelitems_notepad", "HandGrenade", "HandGrenade", "HandGrenade", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", 
        "SmokeShellGreen", "SmokeShellGreen", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", 
        "1Rnd_Smoke_Grenade_shell", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "UGL_FlareGreen_F", "rhs_mag_M397_HET", 
        "rhs_mag_M397_HET", "rhs_mag_M397_HET", "ACE_40mm_Flare_green", "ACE_40mm_Flare_green", "rhs_mag_30Rnd_556x45_Mk318_PMAG", "1Rnd_Smoke_Grenade_shell"
    };
    items[] = {
        "ACE_EarPlugs", "ACE_MapTools", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_IR_Strobe_Item", "ACE_CableTie", "MineDetector", "ACE_WaterBottle", 
        "ACE_Canteen", "ACE_Banana", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", 
        "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV", "ACE_bodyBag", "ACE_epinephrine", "ACE_epinephrine", 
        "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "ACE_adenosine", 
        "ACE_adenosine", "ACE_salineIV_500", "ACE_salineIV_500"
    };
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetB_black", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI", "rhsusf_acc_anpeq15side_bk", 
        "rhsusf_acc_su230", "muzzle_snds_M"
    };
    uniformClass = "rhs_uniform_g3_blk";
    backpack = "B_AssaultPack_blk";
};
class TFY_Grenadier_N
{
    displayName = "Grenadier";
    icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
    role = "TFY_Assault";
    weapons[] = {
        "rhs_weap_hk416d145_m320","Rangefinder"
    };
    magazines[] = {
        "acex_intelitems_notepad", "HandGrenade", "HandGrenade", "HandGrenade", "SmokeShellGreen", "SmokeShellGreen", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "1Rnd_SmokeGreen_Grenade_shell", 
        "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", 
        "1Rnd_HE_Grenade_shell", "UGL_FlareGreen_F", "UGL_FlareGreen_F", "rhs_mag_M397_HET", "rhs_mag_M397_HET", "rhs_mag_M433_HEDP", "rhs_mag_M433_HEDP", 
        "rhs_mag_M441_HE", "rhs_mag_M441_HE", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "ACE_HuntIR_M203", "rhs_mag_m4009", 
        "rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan", "1Rnd_HE_Grenade_shell"
    };
    items[] = {
        "ACE_EarPlugs", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_MapTools", "ACE_HuntIR_monitor", "ACE_Banana", 
        "ACE_WaterBottle", "ACE_Canteen", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_bloodIV", "ACE_bodyBag", 
        "ACE_epinephrine", "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", 
        "ACE_splint", "ACE_splint", "ACE_splint", "ACE_adenosine", "ACE_adenosine", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", 
        "ACE_salineIV_500", "ACE_plasmaIV_500", "ACE_Canteen"
    };
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetB_black", "rhsusf_oakley_goggles_clr", "ItemMap", "ItemCompass", "ACE_Altimeter", 
        "ItemGPS", "JAS_GPNVG18_blk_TI", "rhsusf_acc_su230", "rhsusf_acc_anpeq15side_bk", "muzzle_snds_M"
    };   
    uniformClass = "rhs_uniform_g3_blk";
    backpack = "B_AssaultPack_blk";
};
class TFY_ATRifleman_N
{
    displayName = "AT Rifleman";
    icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
    role = "TFY_Spc";
    weapons[] = {
        "rhs_weap_hk416d145","Rangefinder","launch_MRAWS_green_F"
    };
    magazines[] = {
        "acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "HandGrenade", "HandGrenade", "SmokeShellGreen", "SmokeShellGreen",
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "rhs_mag_maaws_HEAT", "rhs_mag_maaws_HEAT", "rhs_mag_maaws_HEDP", "rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhs_mag_maaws_HEAT"
    };
    items[] = {
        "ACE_EarPlugs", "ACE_MapTools", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_IR_Strobe_Item", "ACE_HuntIR_monitor", "ACE_CableTie", "ACE_WaterBottle", 
        "ACE_Banana", "ACE_Canteen", "ACE_adenosine", "ACE_adenosine", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", 
        "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV", "ACE_bloodIV", "ACE_epinephrine", 
        "ACE_epinephrine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_salineIV_500", "ACE_salineIV_500"
    };
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "rhs_googles_orange", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI", 
        "rhsusf_acc_su230", "rhsusf_acc_anpeq15side_bk", "muzzle_snds_M"
    };
    uniformClass = "rhs_uniform_g3_blk";
    backpack = "B_AssaultPack_blk";
};
class TFY_AARifleman_N
{
    displayName = "AA Rifleman";
    icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
    role = "TFY_Spc";
    weapons[] = {
        "rhs_weap_hk416d145","Binocular","launch_I_Titan_F"
    };
    magazines[] = {
        "acex_intelitems_notepad", "HandGrenade", "HandGrenade", "HandGrenade", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen",
        "SmokeShellGreen", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "Titan_AA", "Titan_AA", "rhs_mag_30Rnd_556x45_Mk318_PMAG", "Titan_AA"
    };
    items[] = {
        "ACE_EarPlugs", "ACE_MapTools", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_HuntIR_monitor", "ACE_bodyBag", 
        "ACE_splint", "ACE_WaterBottle", "ACE_Banana", "ACE_Canteen", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", 
        "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV", "ACE_epinephrine", "ACE_epinephrine", 
        "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "ACE_salineIV_500", 
        "ACE_salineIV_500"
    };
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "rhs_googles_orange", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI", 
        "rhsusf_acc_su230", "rhsusf_acc_anpeq15side_bk", "muzzle_snds_M"
    };
    uniformClass = "rhs_uniform_g3_blk";
    backpack = "B_AssaultPack_blk";
};
class TFY_UAVOperator_N
{
    displayName = "UAV Operator";
    icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa";
    role = "TFY_Recon";
    weapons[] = {
        "rhs_weap_hk416d145", "rhs_weap_rsp30_red", "Binocular"
    };
    magazines[] = {
        "acex_intelitems_notepad", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "HandGrenade", "HandGrenade", 
        "SmokeShellRed", "SmokeShellPurple", "SmokeShellPurple", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG", "SmokeShellGreen", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_rsp30_red"
    };
    items[] = {
        "ACE_EarPlugs", "ACE_MapTools", "ACE_DefusalKit", "ACE_M26_Clacker", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_Banana", "ACE_Canteen", "ACE_WaterBottle", 
        "ACE_HuntIR_monitor", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_quikclot", 
        "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_bodyBag", "ACE_epinephrine", "ACE_adenosine", "ACE_morphine", "ACE_morphine", 
        "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_salineIV_500", "ACE_salineIV_500", "ACE_UAVBattery"
    };
    linkedItems[] = {
        "V_PlateCarrier2_blk", "H_HelmetSpecB_blk", "rhs_googles_clear", "ItemMap", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", "JAS_GPNVG18_blk_TI",
        "rhsusf_acc_rotex5_grey", "rhsusf_acc_anpeq15side_bk", "rhsusf_acc_su230a", "rhsusf_acc_grip2"
    };
    uniformClass = "rhs_uniform_g3_blk";
    backpack = "B_AssaultPack_blk";
};
class TFY_VehicleCrewman_N
{
    displayName = "Vehicle Crewman";
    icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa";
    role = "TFY_Crew";
    weapons[] = {
        "rhs_weap_hk416d145","Binocular", "rhsusf_weap_m1911a1"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellGreen", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "HandGrenade", "HandGrenade", "SmokeShellRed", 
        "SmokeShellRed", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhsusf_mag_7x45acp_MHP"
    };
    items[] = {
        "ACE_EarPlugs", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_MapTools", "ACE_M26_Clacker", "ACE_DAGR", "ACE_HuntIR_monitor", "ACE_ATragMX", "ACE_RangeCard",
        "ACE_WaterBottle", "ACE_Banana", "ACE_Canteen", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", 
        "ACE_packingBandage", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_bloodIV", "ACE_epinephrine", "ACE_epinephrine", 
        "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_tourniquet", "ACE_tourniquet", "ACE_splint", "ACE_splint", "ToolKit", 
        "ACE_adenosine", "ACE_adenosine", "ACE_bodyBag", "ACE_salineIV_500", "ACE_salineIV_500"
    };
    linkedItems[] = {
        "V_PlateCarrier2_rgr", "H_HelmetCrew_B", "G_Tactical_Clear", "ItemMap", "ItemCompass", "ACE_Altimeter", "ItemGPS", "JAS_GPNVG18_blk_TI", "rhsusf_acc_su230",
        "rhsusf_acc_anpeq15side_bk", "muzzle_snds_M"
    };
    uniformClass = "U_B_HeliPilotCoveralls";
    backpack = "B_ViperLightHarness_oli_F";
};
class TFY_Medic_N
{
    displayName = "Combat Lifesaver";
    icon = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
    role = "TFY_Support";
    weapons[] = {
        "rhs_weap_hk416d145","Binocular","rhs_weap_rsp30_red"
    };
    magazines[] = {
        "acex_intelitems_notepad", "SmokeShellGreen", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", "HandGrenade", "HandGrenade", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 
        "ACE_painkillers", "ACE_painkillers", "ACE_painkillers", "ACE_painkillers", "ACE_painkillers", "rhs_mag_30Rnd_556x45_Mk318_SCAR", "rhs_mag_rsp30_red"
    };
    items[] = {
        "ACE_EarPlugs", "ACE_MapTools", "ACE_M26_Clacker", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_CableTie", "ACE_Banana", "ACE_Canteen", "ACE_WaterBottle", 
        "ACE_WaterBottle", "ACE_EarPlugs", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_CableTie", "ACE_splint", "ACE_splint", "ACE_splint", "ACE_splint", 
        "ACE_splint", "ACE_splint", "ACE_splint", "ACE_splint", "ACE_splint", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet", "ACE_tourniquet",
        "ACE_tourniquet", "ACE_bloodIV", "ACE_bloodIV", "ACE_bloodIV", "ACE_bloodIV", "ACE_bloodIV", "ACE_bodyBag", "ACE_morphine", "ACE_morphine", "ACE_morphine",
        "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_morphine", "ACE_epinephrine", "ACE_epinephrine", 
        "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", "ACE_epinephrine", 
        "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_adenosine", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", 
        "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", 
        "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", 
        "ACE_quikclot", "ACE_quikclot", "ACE_quikclot", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", 
        "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", 
        "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", 
        "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", "ACE_packingBandage", 
        "ACE_EarPlugs", "ACE_IR_Strobe_Item", "ACE_bodyBag_blue", "ACE_surgicalKit", "ACE_suture", "ACE_suture", "ACE_suture", "ACE_suture", "ACE_suture", 
        "ACE_salineIV_500", "ACE_salineIV_500", "ACE_salineIV_500", "ACE_salineIV_500", "ACE_salineIV_500", "ACE_personalAidKit", "ACE_personalAidKit", 
        "ACE_personalAidKit", "ACE_personalAidKit", "ACE_personalAidKit"
    };
    linkedItems[] = {
        "V_TacVestIR_blk", "H_HelmetB_light_black", "rhs_googles_clear", "ItemMap", "ItemCompass", "ACE_Altimeter", "B_UavTerminal", "JAS_GPNVG18_blk_TI", 
        "rhsusf_acc_nt4_tan", "rhsusf_acc_su230a_c", "rhsusf_acc_anpeq15side_bk",
    };
    uniformClass = "rhs_uniform_g3_blk";
    backpack = "B_AssaultPack_blk";
};
