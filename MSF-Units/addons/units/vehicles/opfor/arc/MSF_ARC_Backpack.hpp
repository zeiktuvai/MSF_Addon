class B_Kitbag_rgr;
class MSF_O_ARC_Backpack : B_Kitbag_rgr
{
    scope = 2;
    displayName = "Kitbag (ARC)";
    picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
    hiddenSelectionsTextures[] = {"z\msf\addons\units\data\arc\MSF_O_ARC_Backpack.paa"};

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

class MSF_O_ARC_MedicBackpack : MSF_O_ARC_Backpack
{
	displayName = "Kitbag Medic (ARC)";
	scope = 2;
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