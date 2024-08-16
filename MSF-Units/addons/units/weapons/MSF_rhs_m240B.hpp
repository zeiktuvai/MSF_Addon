class rhs_weap_m240B;
class MSF_rhs_m240B : rhs_weap_m240B
{
	scope = 1;
	displayName = "MSF M240B";
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "rhsusf_acc_ELCAN_ard";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15A";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "rhsusf_acc_ARDEC_M240";
		};
	};
};