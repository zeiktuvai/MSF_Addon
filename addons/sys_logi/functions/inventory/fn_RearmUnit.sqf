params [["_unit", objNull, [objNull]]];

private _pMags = compatibleMagazines primaryWeapon _unit;
private _invPMags = magazines _unit arrayIntersect _pMags;
private _hMags = compatibleMagazines handgunWeapon _unit;
private _invHMags = magazines _unit arrayIntersect _hMags;

if (count _pMags > 0) then {
	if (count _invPMags == 0) then
	{
		_invPMags = [selectRandom (_pMags select { getNumber (configFile >> "CfgMagazines" >> _x >> "tracersEvery") == 1 })];
	};
	{
		_unit addMagazines [_x, MSF_Rearm_PMags];
	} forEach _invPMags;
};

if (count _hMags > 0) then {
	if (count _invHMags == 0) then
	{
		_invHMags = [selectRandom _hMags];
	};
	{
		_unit addMagazines [_x, MSF_Rearm_HMags];
	} forEach _invHMags;
};
