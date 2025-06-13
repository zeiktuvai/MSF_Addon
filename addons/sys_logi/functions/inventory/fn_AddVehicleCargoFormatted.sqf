params[["_type", 0, [0]], ["_inventory", [], [[]]], ["_container", objNull, [objNull]]];

{
	_x params[ "_info", "_count" ];
	
	switch (_type) do {
		//Items
		case 0 : {
			_container addItemCargoGlobal[ _info, _count ];
		};
		//Magazines
		case 1 : {
			_info params[ "_magazineType", "_ammoCount" ];
			
			_container addMagazineAmmoCargo[ _magazineType, _count, _ammoCount ];
		};
		//Weapons
		case 2 : {
			_container addWeaponWithAttachmentsCargoGlobal[ _info, _count ];
		};
	};
} forEach _inventory;
