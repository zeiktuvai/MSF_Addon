class rhs_weap_m249_light_s;
class MSF_rhs_m249 : rhs_weap_m249_light_s
{
	scope = 1;
	displayName = "MSF HK416 (M203)";
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "rhsusf_acc_su230";
		};
		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "rhsusf_acc_anpeq15A";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "rhsusf_acc_SFMB556";
		};
	};
};