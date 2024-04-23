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
// objects mass is added to inventory total for container.
// loadAbs gets current inv mass, maxLoad gets .. duh...

private _test = selectRandomWeighted ["mag",0,"laun",0,"Gren",0,"med",0,"food",0];

isNil "_test";

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
			private _fill = _object getVariable ["MSF_Helper_InvGenerate_Fill", false];

			clearWeaponCargoGlobal _object;
			clearMagazineCargoGlobal _object;
			clearItemCargoGlobal _object;
			clearBackpackCargoGlobal _object;
			
			if (_object isKindOf "AllVehicles") then {
				for "_i" from 1 to floor (random 4) do {
					_object addItemCargoGlobal [selectRandom _items, 1];
				};
			};

			if (_fill) then {
				private _remain = loadAbs _object;
				private _max = (maxLoad _object) * .8;

				while { loadAbs _object < _max } do {
					private _cat = selectRandomWeighted[
						0, _object getVariable ["MSF_Helper_InvGenerate_MagWeight", 1],
						1, _object getVariable ["MSF_Helper_InvGenerate_LauncherWeight", 1],
						2, _object getVariable ["MSF_Helper_InvGenerate_GrenadeWeight", 1],
						3, _object getVariable ["MSF_Helper_InvGenerate_MedicalWeight", 1],
						4, _object getVariable ["MSF_Helper_InvGenerate_FoodWeight", 1]
					];

					switch (_cat) do {
						case 0: { _object addMagazineCargoGlobal [selectRandom _mags, 1]; _remain = _remain - 1; };
						case 1: { _object addMagazineCargoGlobal [selectRandom _launch, 1];	_remain = _remain - 1; };
						case 2: { _object addMagazineCargoGlobal [selectRandom _grenade, 1]; _remain = _remain - 1; };
						case 3: { _object addItemCargoGlobal [selectRandom _medical, 1]; _remain = _remain - 1; };
						case 4: { _object addItemCargoGlobal [selectRandom _food, 1]; _remain = _remain - 1; };
					};
				};
			} else {
				private _remain = _count;

				while { _remain > 0 } do {
					private _cat = selectRandomWeighted[
						0, _object getVariable ["MSF_Helper_InvGenerate_MagWeight", 1],
						1, _object getVariable ["MSF_Helper_InvGenerate_LauncherWeight", 1],
						2, _object getVariable ["MSF_Helper_InvGenerate_GrenadeWeight", 1],
						3, _object getVariable ["MSF_Helper_InvGenerate_MedicalWeight", 1],
						4, _object getVariable ["MSF_Helper_InvGenerate_FoodWeight", 1]
					];

					switch (_cat) do {
						case 0: { _object addMagazineCargoGlobal [selectRandom _mags, 1]; _remain = _remain - 1; };
						case 1: { _object addMagazineCargoGlobal [selectRandom _launch, 1];	_remain = _remain - 1; };
						case 2: { _object addMagazineCargoGlobal [selectRandom _grenade, 1]; _remain = _remain - 1; };
						case 3: { _object addItemCargoGlobal [selectRandom _medical, 1]; _remain = _remain - 1; };
						case 4: { _object addItemCargoGlobal [selectRandom _food, 1]; _remain = _remain - 1; };
					};
				};
			};
		};
	} forEach _objects;
};
