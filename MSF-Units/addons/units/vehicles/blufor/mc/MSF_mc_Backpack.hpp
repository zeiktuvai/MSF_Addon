class B_ViperLightHarness_base_F;
class MSF_mc_BaseBackpack : B_ViperLightHarness_base_F
{
	displayName = "Viper Light Standard Backpack";
	scope = 2;	
	hiddenSelectionsTextures[] = {"\A3\Supplies_F_Exp\Bags\Data\Backpack_ViperOp_khk_co.paa"};
	picture = "\A3\Supplies_F_Exp\Bags\Data\UI\icon_B_ViperLightHarness_khk_F_ca.paa";
	class TransportItems {
		class _xx_quickclot {
			name = "ACE_quikclot";
			count = 5;
		};
		class _xx_packBandage {
			name = "ACE_packingBandage";
			count = 5;
		};
		class _xx_tourniquet {
			name = "ACE_tourniquet";
			count = 2;
		};
		class _xx_splint {
			name = "ACE_splint";
			count = 2;
		};
		class _xx_epi {
			name = "ACE_epinephrine";
			count = 1;
		};
		class _xx_aden {
			name = "ACE_adenosine";
			count = 1;
		};
		class _xx_morph {
			name = "ACE_morphine";
			count = 4;
		};
		class _xx_saline500 {
			name = "ACE_salineIV_500";
			count = 2;
		};
		class _xx_blood {
			name = "ACE_bloodIV";
			count = 1;
		};
		class _xx_bodybag {
			name = "ACE_bodyBag";
			count = 1;
		};
		class _xx_earplug {
			name = "ACE_EarPlugs";
			count = 1;
		};
		class _xx_mapt {
			name = "ACE_MapTools";
			count = 1;
		};
		class _xx_m26 {
			name = "ACE_M26_Clacker";
			count = 1;
		};
		class _xx_strobe{
			name = "ACE_IR_Strobe_Item";
			count = 1;
		};
		class _xx_cabletie{
			name = "ACE_CableTie";
			count = 1;
		};
		class _xx_huntir {
			name = "ACE_HuntIR_monitor";
			count = 1;
		};
		class _xx_waterbot {
			name = "ACE_WaterBottle";
			count = 1;
		};
		class _xx_canteen {
			name = "ACE_Canteen";
			count = 1;
		};
		class _xx_mdagr {
			name = "ACE_microDAGR";
			count = 1;
		};
	};
	class TransportMagazines {
		class _xx_handgrenade {
			magazine = "HandGrenade";
			count = 2;
		};
		class _xx_smokered {
			magazine = "SmokeShellRed";
			count = 1;
		};
		class _xx_smokegreen {
			magazine = "SmokeShellGreen";
			count = 1;
		};
	};
};

class MSF_mc_MarksmanBackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Marksman Backpack";
	class TransportMagazines {
		class _xx_handgrenade {
			magazine = "HandGrenade";
			count = 2;
		};
		class _xx_smokered {
			magazine = "SmokeShellRed";
			count = 1;
		};
		class _xx_smokegreen {
			magazine = "SmokeShellGreen";
			count = 1;
		};
		class _xx_20rnd_m993 {
			magazine = "rhsusf_20Rnd_762x51_m993_Mag";
			count = 2;
		};
	};
};

class MSF_mc_PMAGBackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Infantry Backpack";
	class TransportMagazines {
		class _xx_handgrenade {
			magazine = "HandGrenade";
			count = 2;
		};
		class _xx_smokered {
			magazine = "SmokeShellRed";
			count = 1;
		};
		class _xx_smokegreen {
			magazine = "SmokeShellGreen";
			count = 1;
		};
		class _xx_30rnd_tan_pmag {
			magazine = "rhs_mag_20Rnd_SCAR_762x51_m62_tracer";
			count = 3;
		};
	};
};

class MSF_mc_PMAGSupplyBackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Ammo Bearer Backpack";
	class TransportMagazines {
		class _xx_handgrenade {
			magazine = "HandGrenade";
			count = 2;
		};
		class _xx_smokered {
			magazine = "SmokeShellRed";
			count = 1;
		};
		class _xx_smokegreen {
			magazine = "SmokeShellGreen";
			count = 1;
		};
		class _xx_20rnd_pmag {
			magazine = "rhs_mag_20Rnd_SCAR_762x51_m62_tracer";
			count = 12;
		};
	};
};

class MSF_mc_SniperBackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Sniper Backpack";
	class TransportMagazines {
		class _xx_handgrenade {
			magazine = "HandGrenade";
			count = 2;
		};
		class _xx_smokered {
			magazine = "SmokeShellRed";
			count = 1;
		};
		class _xx_smokegreen {
			magazine = "SmokeShellGreen";
			count = 1;
		};
		class _xx_10rnd_50 {
			magazine = "rhsusf_mag_10Rnd_STD_50BMG_mk211";
			count = 3;
		};
	};
};

class MSF_mc_ATBackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Anti-Tank Backpack";
	class TransportMagazines {
		class _xx_maaws_het {
			magazine = "rhs_mag_maaws_HEAT";
			count = 2;
		};
		class _xx_maaws_hedp {
			magazine = "rhs_mag_maaws_HEDP";
			count = 1;
		};
		class _xx_handgrenade {
			magazine = "HandGrenade";
			count = 2;
		};
		class _xx_smokered {
			magazine = "SmokeShellRed";
			count = 1;
		};
		class _xx_smokegreen {
			magazine = "SmokeShellGreen";
			count = 1;
		};
	};
};

class MSF_mc_AABackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Anti-Air Backpack";
	class TransportMagazines {
		class _xx_titan_aa {
			magazine = "Titan_AA";
			count = 2;
		};
		class _xx_handgrenade {
			magazine = "HandGrenade";
			count = 2;
		};
		class _xx_smokered {
			magazine = "SmokeShellRed";
			count = 1;
		};
		class _xx_smokegreen {
			magazine = "SmokeShellGreen";
			count = 1;
		};
	};
};

class MSF_mc_MedicBackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Medic Backpack";
	class TransportItems {
		class _xx_quickclot {
			name = "ACE_quikclot";
			count = 20;
		};
		class _xx_packBandage {
			name = "ACE_packingBandage";
			count = 25;
		};
		class _xx_tourniquet {
			name = "ACE_tourniquet";
			count = 12;
		};
		class _xx_splint {
			name = "ACE_splint";
			count = 12;
		};
		class _xx_epi {
			name = "ACE_epinephrine";
			count = 5;
		};
		class _xx_aden {
			name = "ACE_adenosine";
			count = 5;
		};
		class _xx_morph {
			name = "ACE_morphine";
			count = 15;
		};
		class _xx_saline500 {
			name = "ACE_salineIV_500";
			count = 5;
		};
		class _xx_blood {
			name = "ACE_bloodIV";
			count = 5;
		};
		class _xx_plasma {
			name = "ACE_plasmaIV";
			count = 2;
		};
		class _xx_blood500 {
			name = "ACE_bloodIV_500";
			count = 2;
		};
		class _xx_plas500 {
			name = "ACE_plasmaIV_500";
			count = 2;
		};
		class _xx_bodybag {
			name = "ACE_bodyBag";
			count = 2;
		};
		class _xx_earplug {
			name = "ACE_EarPlugs";
			count = 4;
		};
		class _xx_cabletie{
			name = "ACE_CableTie";
			count = 2;
		};
		class _xx_waterbot {
			name = "ACE_WaterBottle";
			count = 2;
		};
		class _xx_paid {
			name = "ACE_personalAidKit";
			count = 1;
		};
	};
};

class MSF_mc_EngBackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Engineer Backpack";
	class TransportItems {
		class _xx_quickclot {
			name = "ACE_quikclot";
			count = 5;
		};
		class _xx_packBandage {
			name = "ACE_packingBandage";
			count = 5;
		};
		class _xx_tourniquet {
			name = "ACE_tourniquet";
			count = 2;
		};
		class _xx_splint {
			name = "ACE_splint";
			count = 2;
		};
		class _xx_epi {
			name = "ACE_epinephrine";
			count = 1;
		};
		class _xx_aden {
			name = "ACE_adenosine";
			count = 1;
		};
		class _xx_morph {
			name = "ACE_morphine";
			count = 4;
		};
		class _xx_saline500 {
			name = "ACE_salineIV_500";
			count = 2;
		};
		class _xx_blood {
			name = "ACE_bloodIV";
			count = 1;
		};
		class _xx_bodybag {
			name = "ACE_bodyBag";
			count = 1;
		};
		class _xx_mapt {
			name = "ACE_MapTools";
			count = 1;
		};
		class _xx_strobe{
			name = "ACE_IR_Strobe_Item";
			count = 1;
		};
		class _xx_cabletie{
			name = "ACE_CableTie";
			count = 1;
		};
		class _xx_huntir {
			name = "ACE_HuntIR_monitor";
			count = 1;
		};
		class _xx_waterbot {
			name = "ACE_WaterBottle";
			count = 1;
		};
		class _xx_canteen {
			name = "ACE_Canteen";
			count = 1;
		};
		class _xx_mdagr {
			name = "ACE_microDAGR";
			count = 1;
		};
		class _xx_wirecut {
			name = "ACE_wirecutter";
			count = 1;
		};
		class _xx_mined {
			name = "MineDetector";
			count = 1;
		};
		class _xx_flash {
			name = "ACE_Flashlight_XL50";
			count = 1;
		};
		class _xx_m26 {
			name = "ACE_M26_Clacker";
			count = 2;
		};
		class _xx_fortify {
			name = "ACE_Fortify";
			count = 1;
		};
		class _xx_etool {
			name = "ACE_EntrenchingTool";
			count = 1;
		};
		class _xx_defus {
			name = "ACE_DefusalKit";
			count = 1;
		};
		class _xx_dmsw {
			name = "ACE_DeadManSwitch";
			count = 1;
		};
		class _xx_tool {
			name = "ToolKit";
			count = 1;
		};		
		class _xx_earplug {
			name = "ACE_EarPlugs";
			count = 2;
		};
	};
};

class MSF_mc_MineBackpack : MSF_mc_BaseBackpack
{
	displayName = "Viper Light Mine Spec. Backpack";
	class TransportMagazines {
		class _xx_persmine {
			magazine = "APERSMine_Range_Mag";
			count = 5;
		};
		class _xx_atmine {
			magazine = "ATMine_Range_Mag";
			count = 2;
		};
		class _xx_boundmine {
			magazine = "APERSBoundingMine_Range_Mag";
			count = 1;
		};
		class _xx_handgrenade {
			magazine = "HandGrenade";
			count = 2;
		};
		class _xx_smokered {
			magazine = "SmokeShellRed";
			count = 1;
		};
		class _xx_smokegreen {
			magazine = "SmokeShellGreen";
			count = 1;
		};
	};
};

class TFAR_rt1523g_sage;
class MSF_mc_RTOBackPack : TFAR_rt1523g_sage
{
	displayName = "MSF ASIP Pack";
	scope = 2;	
	class TransportItems {
		class _xx_quickclot {
			name = "ACE_quikclot";
			count = 5;
		};
		class _xx_packBandage {
			name = "ACE_packingBandage";
			count = 5;
		};
		class _xx_tourniquet {
			name = "ACE_tourniquet";
			count = 2;
		};
		class _xx_splint {
			name = "ACE_splint";
			count = 2;
		};
		class _xx_epi {
			name = "ACE_epinephrine";
			count = 1;
		};
		class _xx_aden {
			name = "ACE_adenosine";
			count = 1;
		};
		class _xx_morph {
			name = "ACE_morphine";
			count = 4;
		};
		class _xx_saline500 {
			name = "ACE_salineIV_500";
			count = 2;
		};
		class _xx_blood {
			name = "ACE_bloodIV";
			count = 1;
		};
		class _xx_bodybag {
			name = "ACE_bodyBag";
			count = 1;
		};
		class _xx_earplug {
			name = "ACE_EarPlugs";
			count = 1;
		};
		class _xx_mapt {
			name = "ACE_MapTools";
			count = 1;
		};
		class _xx_m26 {
			name = "ACE_M26_Clacker";
			count = 1;
		};
		class _xx_strobe{
			name = "ACE_IR_Strobe_Item";
			count = 1;
		};
		class _xx_cabletie{
			name = "ACE_CableTie";
			count = 1;
		};
		class _xx_huntir {
			name = "ACE_HuntIR_monitor";
			count = 1;
		};
		class _xx_waterbot {
			name = "ACE_WaterBottle";
			count = 1;
		};
		class _xx_canteen {
			name = "ACE_Canteen";
			count = 1;
		};
		class _xx_mdagr {
			name = "ACE_microDAGR";
			count = 1;
		};
	};
	class TransportMagazines {
		class _xx_handgrenade {
			magazine = "HandGrenade";
			count = 2;
		};
		class _xx_smokered {
			magazine = "SmokeShellRed";
			count = 1;
		};
		class _xx_smokegreen {
			magazine = "SmokeShellGreen";
			count = 1;
		};
	};
};

