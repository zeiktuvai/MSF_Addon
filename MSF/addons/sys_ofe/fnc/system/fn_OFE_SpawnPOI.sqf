params [["_position", [], [[]]], ["_def", [], [[]]], "_type"];

private ["_types"];
private _enemySide = missionNamespace getVariable ["MSF_OFE_EnemyFaction", east];

switch (_type) do {
	case 0: { //vics
		_types = [] call MSF_fnc_OFE_GetUnmannedClasses select _type;
	};
	case 1: { //armor
		_types = ([] call MSF_fnc_OFE_GetUnmannedClasses) select _type;
	};
	case 2: { //static
		_types = ([] call MSF_fnc_OFE_GetUnmannedClasses) select _type;
	};	
};

private _group = createGroup [resistance, true];
private _eGroup = createGroup [_enemySide, true];
private _unitTypes = ([resistance] call MSF_fnc_GetUnitClasses) select 5;
private _eUnitTypes = ([_enemySide] call MSF_fnc_GetUnitClasses) select 5;
private _objects = [_position, 0, _def] call BIS_fnc_objectsMapper;
private _vicDir = _objects select {typeOf _x == "MSF_Placeholder_Direction"};

private	_vics = [_types, _objects select {typeOf _x == "MSF_Placeholder_Vehicle_U"}] call MSF_fnc_OFE_SpawnUnmannedVic;
if (count _vicDir > 0) then {
	{
		_x setDir (getDir _x + (_x getRelDir (position (_vicDir select 0))))
	} forEach _vics;
};
[_unitTypes, _objects select {typeOf _x == "MSF_Placeholder_Infantry_D"}, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;

if ([0.5] call MSF_fnc_GetSpawnChance) then
{
	[_eUnitTypes, _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _eGroup] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;
};

{
	_x setDamage 1;
} forEach units _group;

switch (_type) do {
	case 0; //vics	
	case 1: { //armor
		{
			_x setVehicleAmmo random 1;
			_x setDamage random [0, 0.45, 0.75];
			_x setFuel random [0.2, 0.40, 0.60];
		} forEach _vics;

		if (_type == 1) then
		{
			_unt = _group createUnit [selectRandom _unitTypes, getPos ((_objects select {typeOf _x == "MSF_Placeholder_Infantry_D"}) select 0), [], 0, "CAN_COLLIDE"];
			_unt setDamage 1;
			_unt moveInDriver (_vics select 0);
		}
	};
	case 2: { //static
		{
			_x setVehicleAmmo random 1;
		} forEach _vics;		
	};	
};

private _allObjs = _objects;
_allObjs append _vics;
_allObjs append units _group;
_allObjs append units _eGroup;

[_allObjs, false] call MSF_fnc_ShowHideObjects;
[_logic, 250, 250, "west", "present", false, _allObjs, true] call MSF_fnc_OFE_CreateModuleActivationTrigger;
[5, _position] call MSF_fnc_OFE_CreateMapMarker;