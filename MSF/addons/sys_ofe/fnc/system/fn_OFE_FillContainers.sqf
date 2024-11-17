params [["_object", objNull, [objNull]], ["_count", 20, [20]], ["_empty", false, [false]]];

private _equipMult = missionNamespace getVariable ["MSF_OFE_LogiMultiplier", 1];

if (!_empty) then {
	[_object, round (_count * _equipMult), false, [1,1,1,1,1]] call MSF_fnc_GenerateRandomInventory;
}
else
{
	clearWeaponCargoGlobal _box;
	clearMagazineCargoGlobal _box;
	clearItemCargoGlobal _box;
	clearBackpackCargoGlobal _box;
};