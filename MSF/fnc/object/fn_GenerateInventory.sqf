/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script is used to generate random inventory based on properties configured on the object
		from a list of items configured in MSF settings.  Each category can be enabled/disabled
        
	Examples:
		[] call MSF_fnc_GenerateInventory;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/

if(isServer) then 
{
	private _objects = entities [["Thing", "AllVehicles"], [], false, true] select { _x getVariable "MSF_Helper_InvGenerate_Enabled" == true; };

	private _launch = call compile getMissionConfigValue "MSF_Helper_Inv_Launcher";
	private _grenade = call compile getMissionConfigValue "MSF_Helper_Inv_Grenades";
	private _medical = call compile getMissionConfigValue "MSF_Helper_Inv_Med";
	private _food = call compile getMissionConfigValue "MSF_Helper_Inv_Food";
	private _mags = call compile getMissionConfigValue "MSF_Helper_Inv_Mag";
	private _items = call compile getMissionConfigValue "MSF_Helper_Inv_Item";

	{
		private _object = _x;
		if (_object getVariable "MSF_Helper_InvGenerate_Enabled") then {
			private _count = _object getVariable "MSF_Helper_InvGenerate_ItemCount";
			private _countType = _object getVariable ["MSF_Helper_InvGenerate_Type", false];

			clearWeaponCargoGlobal _object;
			clearMagazineCargoGlobal _object;
			clearItemCargoGlobal _object;
			clearBackpackCargoGlobal _object;
			
			if (_object isKindOf "AllVehicles") then {
				for "_i" from 1 to floor (random 4) do {
					_object addItemCargoGlobal [selectRandom _items, 1];
				};
			};

			if (_countType) then {
				if (_object getVariable "MSF_Helper_InvGenerate_Magazines") then {
					for "_m" from 1 to _count do {
						_object addMagazineCargoGlobal [selectRandom _mags, 1];
					};
				};
				if (_object getVariable "MSF_Helper_InvGenerate_Launcher") then {
					for "_l" from 1 to _count do {
						_object addMagazineCargoGlobal [selectRandom _launch, 1];
					};
				};
				if (_object getVariable "MSF_Helper_InvGenerate_Grenade") then {
					for "_g" from 1 to _count do {
						_object addMagazineCargoGlobal [selectRandom _grenade, 1];
					};
				};
				if (_object getVariable "MSF_Helper_InvGenerate_Medical") then {
					for "_d" from 1 to _count do {
						_object addItemCargoGlobal [selectRandom _medical, 1];
					};
				};
				if (_object getVariable "MSF_Helper_InvGenerate_Food") then {
					for "_f" from 1 to _count do {
						_object addItemCargoGlobal [selectRandom _food, 1];
					};
				};
			} else {
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
						_object addItemCargoGlobal [selectRandom _medical, 1];
						_remain = _remain - 1;
					};
					if (_object getVariable "MSF_Helper_InvGenerate_Food" && _remain > 0) then {
						_object addItemCargoGlobal [selectRandom _food, 1];
						_remain = _remain - 1;
					};
				};
			};
		};
	} forEach _objects;
};
