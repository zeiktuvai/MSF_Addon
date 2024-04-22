


if(isServer) then 
{
	private _objects = entities [["Thing", "AllVehicles"], [], false, true] select { _x getVariable "MSF_Helper_InvGenerate_Enabled" == true; };

	private _launch = call compile getMissionConfigValue "MSF_Helper_Inv_Launcher";
	private _grenade = call compile getMissionConfigValue "MSF_Helper_Inv_Grenades";
	private _medical = call compile getMissionConfigValue "MSF_Helper_Inv_Med";
	private _food = call compile getMissionConfigValue "MSF_Helper_Inv_Food";
	private _mags = call compile getMissionConfigValue "MSF_Helper_Inv_Mag";
	private _items = call compile getMissionConfigValue "MSF_Helper_Inv_Item";
	//if !(local _object) exitWith {};

	{
		private _object = _x;
		if (_object getVariable "MSF_Helper_InvGenerate_Enabled") then {
			private _count = _object getVariable "MSF_Helper_InvGenerate_ItemCount";
			private _countType = _object getVariable "MSF_Helper_InvGenerate_Type";
			
			clearWeaponCargoGlobal _object;
			clearMagazineCargoGlobal _object;
			clearItemCargoGlobal _object;
			clearBackpackCargoGlobal _object;
			
			for "_i" from 1 to floor (random 4) do {
				_object addItemCargoGlobal [selectRandom _items, 1];
			}

			if (_countType) then {
				private _remain = _count;
				while { _remain > 0 } do {
					if (_object getVariable "MSF_Helper_InvGenerate_Magazines" && _remain > 0) then {
						_object addMagazineCargoGlobal [selectRandom _mags, 1];
						_remain = _remain - 1;
					};
					if (_object getVariable "MSF_Helper_InvGenerate_Launcher" && _remain > 0) then {
						_object addMagazineCargoGlobal [selectRandom _launch, 1];
						_remain = _remain - 1;
					};
					if (_object getVariable "MSF_Helper_InvGenerate_Grenade" && _remain > 0) then {
						_object addMagazineCargoGlobal [selectRandom _grenade, 1];
						_remain = _remain - 1;
					};
					if (_object getVariable "MSF_Helper_InvGenerate_Medical" && _remain > 0) then {
						_object addMagazineCargoGlobal [selectRandom _medical, 1];
						_remain = _remain - 1;
					};
					if (_object getVariable "MSF_Helper_InvGenerate_Food" && _remain > 0) then {
						_object addMagazineCargoGlobal [selectRandom _food, 1];
						_remain = _remain - 1;
					};
				};
			} else {
				for "_m" from 1 to _count do {
					_object addItemCargoGlobal [selectRandom _mags, 1];
				};
				for "_l" from 1 to _count do {
					_object addItemCargoGlobal [selectRandom _launch, 1];
				};
				for "_g" from 1 to _count do {
					_object addItemCargoGlobal [selectRandom _grenade, 1];
				};
				for "_d" from 1 to _count do {
					_object addMagazineCargoGlobal [selectRandom _medical, 1];
				};
				for "_f" from 1 to _count do {
					_object addMagazineCargoGlobal [selectRandom _food, 1];
				};
			};
		};
	} forEach _objects;

};
