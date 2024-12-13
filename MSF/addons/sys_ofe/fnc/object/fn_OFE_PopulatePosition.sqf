// _type: 0 Checkpoint, 1 Outpost, 2 Base, 3 airbase, 4 bastion, 5 existing outpost, 6 existing base, 7 existing helibase, 8 existing airbase

params [["_logic", objNull, [objNull]], ["_def", [], [[]]], ["_type", 0, [0]], "_params"];

private _activationRange = 500;

//TODO: Update this to use a configurable value
private _friendlySide = "west";

private _side = missionNamespace getVariable ["MSF_OFE_EnemyFaction", east];
private _position = position _logic;
private _unitTypes = [_side] call MSF_fnc_GetUnitClasses;
private _group = createGroup [_side, true];
private _objects = [];
private _vics = [];
private _boxes = [];
private _vicAmmoBoxes = [];

switch (_type) do {
	case 0: {
		private _dir = [_position] call MSF_fnc_GetRoadDirection;
		_objects = [_position, _dir, _def] call BIS_fnc_objectsMapper;

		[_unitTypes select 5, _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;
		[_unitTypes select 5, _objects, _group] call MSF_fnc_OFE_SpawnInfantryInBuildings;
		_params params ["_supply"];

		// TODO: make this spawn in activation trigger to take strength into account.
		if (_supply) then {
			_vicAmmoBoxes = [_objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"}, 100] call MSF_fnc_OFE_SpawnVehicleAmmo;
			_boxes = [_objects select {typeOf _x == "MSF_Placeholder_Supplies"}] call MSF_fnc_OFE_SpawnAndFillBoxes;
		};
	};
	case 1;
	case 2;
	case 3: {
		_objects = [_position, 0, _def] call BIS_fnc_objectsMapper;
	};
	case 5;
	case 6;
	case 7;
	case 8: {
		_objects = _def;
	};
};

private _allObjs = units _group;
_allObjs append _objects;
if (count _boxes > 0) then {_allObjs append _boxes};
if (count _vicAmmoBoxes > 0) then {_allObjs append _vicAmmoBoxes};
if (count _vics > 0) then {_allObjs append _vics};

[_logic, _activationRange, _activationRange, _friendlySide, "present", false, _allObjs, _type, _params] call MSF_fnc_OFE_CreateModuleActivationTrigger;
[_type, _position] call MSF_fnc_OFE_CreateMapMarker;
if (_type < 5) then {
	[_allObjs, false] call MSF_fnc_ShowHideObjects;
};
[_logic, 50, 50, _type] call MSF_fnc_OFE_CreateModuleClearTrigger;
[_logic, 50, 50] call MSF_fnc_OFE_CreateModuleAITrigger;