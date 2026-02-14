private _units = get3DENSelected "object" select { _x isKindOf "Man"};
private _return = [];

if (_units isNotEqualTo []) then
{
	{
		private _weap = primaryWeapon _x;
		private _weapName = [configFile >> "CfgWeapons" >> _weap] call  BIS_fnc_displayName;
		private _acc = primaryWeaponItems _x;
	
		private _compMags = compatibleMagazines _weap;
		private _invMags = magazines _x select { _x in _compMags };	
		private _uMags = _invMags arrayIntersect _invMags;
		private _mags = [];
	
		{
		  private _magName = _x;
		  _mags pushBack [_magName, { _x == _magName } count _invMags];
		} forEach _uMags;
		
		_return pushBack [_weap, [_weap, _weapName, _acc, _mags]];
	} forEach _units;
	
	copyToClipboard str _return;
	["<t size='1.1'>[MSF MSG]</t>  Weapon configuration for selected objects <t underline='1'>copied&#160;to&#160;clipboard</t>.", 0, 7, true] call BIS_fnc_3DENNotification;
}
else
{
	["<t size='1.1'>[MSF ERR]</t>  No units selected.", 1, 5, true] call BIS_fnc_3DENNotification;
};
