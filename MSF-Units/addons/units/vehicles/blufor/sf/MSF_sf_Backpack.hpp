class B_FieldPack_blk;
class MSF_sf_BaseBackpack : B_FieldPack_blk
{
	displayName = "SF Assault Pack";
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
			count = 5;
		};
		class _xx_bodybag {
			name = "ACE_bodyBag";
			count = 2;
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
		class _xx_mined {
			name = "MineDetector";
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
			count = 2;
		};
		class _xx_smokegreen {
			magazine = "SmokeShellGreen";
			count = 2;
		};
	};
};

class MSF_sf_ExpBackpack : MSF_sf_BaseBackpack
{
	displayName = "SF Exp Assault Pack";
	scope = 2;
	class TransportMagazines {
		class _xx_remchg {
			magazine = "DemoCharge_Remote_Mag";
			count = 2;
		};
		class _xx_m112 {
			magazine = "rhsusf_m112_mag";
			count = 2;
		};		
	};
};



