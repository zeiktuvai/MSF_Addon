params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _def = [] call MSF_fnc_OFE_GetCheckpointComposition;
private _supply = _logic getVariable ["Supplies", true];
private _position = position _logic;
private _unitTypes = ([east] call MSF_fnc_GetUnitClasses) select 5;
private _dir = [_position] call MSF_fnc_GetRoadDirection;
private _objects = [_position, _dir, _def] call BIS_fnc_objectsMapper;
private _group = createGroup [east, true];

// Find out how to keep spawnd units in place on start.
{
	(selectRandom _unitTypes) createUnit [getPos _x, _group];
} forEach (_objects select {typeOf _x == "Land_HelipadEmpty_F"});

{
	{
		_group createUnit [(selectRandom _unitTypes), _x, [], 0, "NONE"];
	} forEach (_x buildingPos -1);
} forEach (_objects select {_x isKindOf "House_F"});

private _box = (_objects select {typeOf _x == "Box_FIA_Ammo_F"}) select 0;
[_box, 20, !_supply] call MSF_fnc_OFE_FillContainers;

private _allObjs = units _group;
_allObjs append _objects;
[_allObjs, false] call MSF_fnc_ShowHideObjects;

[_logic, 250, 250, "west", "present", false, _allObjs] call MSF_fnc_OFE_CreateModuleActivationTrigger;
[_logic, 50, 50] call MSF_fnc_OFE_CreateModuleClearTrigger;

// This will need to integrate with intel system.
_marker = createMarkerLocal ["Checkpoint_" + (str _position), _position];
_marker setMarkerTypeLocal "mil_dot";
_marker setMarkerText "Checkpoint";