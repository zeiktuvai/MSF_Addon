class cfgWeapons {

class hlc_rifle_Bushmaster300;

class myNewWeapon : hlc_rifle_Bushmaster300 {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "opticClassName";
		};

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "pointerClassName";
		};

		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "muzzleClassName";
		};

		class LinkedItemsUnder {
			slot = "UnderBarrelSlot";
			item = "bipodClassName";
		};
	};
};
}

