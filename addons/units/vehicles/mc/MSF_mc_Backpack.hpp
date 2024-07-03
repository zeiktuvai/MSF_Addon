class B_ViperLightHarness_oli_F;  //B_ViperLightHarness_blk_F
class MSF_mc_BaseBackpack : B_ViperLightHarness_oli_F
{
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
	class TransportMagazines {
		class _xx_20rnd_m993 {
			magazine = "rhsusf_20Rnd_762x51_m993_Mag";
			count = 2;
		};
	};
};

class MSF_mc_PMAGBackpack : MSF_mc_BaseBackpack
{
	class TransportMagazines {
		class _xx_30rnd_tan_pmag {
			magazine = "rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan";
			count = 3;
		};
	};
};

class MSF_mc_PMAGSupplyBackpack : MSF_mc_BaseBackpack
{
	class TransportMagazines {
		class _xx_20rnd_pmag {
			magazine = "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red";
			count = 6;
		};
		class _xx_30rnd_tan_pmag {
			magazine = "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red";
			count = 6;
		};
	};
};

class MSF_mc_ATBackpack : MSF_mc_BaseBackpack
{
	class TransportMagazines {
		class _xx_maaws_het {
			magazine = "rhs_mag_maaws_HEAT";
			count = 2;
		};
		class _xx_maaws_hedp {
			magazine = "rhs_mag_maaws_HEDP";
			count = 1;
		};
	};
};

class MSF_mc_AABackpack : MSF_mc_BaseBackpack
{
	class TransportMagazines {
		class _xx_titan_aa {
			magazine = "Titan_AA";
			count = 2;
		};
	};
};

class MSF_mc_MedicBackpack : MSF_mc_BaseBackpack
{
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
		class _xx_suture {
			name = "ACE_suture";
			count = 4;
		};
	};
};