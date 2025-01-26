// _type: 0 Checkpoint, 1 Outpost, 2 Base, 3 helibase, 4 bastion, 5 existing outpost, 6 existing base, 7 existing helibase, 8 existing airbase
params [["_logic", objNull, [objNull]], ["_def", [], [[]]], ["_type", "", [""]], "_params", ["_existing", false, [false]], ["_isOFE", [true], [[]]]];

//hint format ["%1 %2", missionNamespace getVariable "MSF_OFE_cpCount", [] call MSF_fnc_OFE_CalculateStrengthValues];

private _activationRange = 500;

//TODO: Update this to use a configurable value
private _friendlySide = "west";

private _side = east;
if (_isOFE select 0) then {
	_side = missionNamespace getVariable ["MSF_OFE_EnemyFaction", east];	
} else {
	_side = _isOFE select 1;
};

private _position = position _logic;
private _unitTypes = [0, _side] call MSF_fnc_GetConfigClasses;
private _group = createGroup [_side, true];
private _objects = [];
private _allObjs = [];

switch (_type) do {
	case "Checkpoint": {
		private _vics = [];
		private _boxes = [];
		private _vicAmmoBoxes = [];
		private _dir = [_position] call MSF_fnc_GetRoadDirection;
		_objects = [_position, _dir, _def] call BIS_fnc_objectsMapper;

		[_unitTypes select 5, _objects select {typeOf _x == "MSF_Placeholder_Infantry"}, _group] call MSF_fnc_OFE_SpawnInfantryOnPlaceholder;
		[_unitTypes select 5, _objects, _group] call MSF_fnc_OFE_SpawnInfantryInBuildings;
		_params params ["_supply"];

		if (_supply) then {
			_vicAmmoBoxes = [_objects select {typeOf _x == "MSF_Placeholder_VehicleAmmo"}, 100] call MSF_fnc_OFE_SpawnVehicleAmmo;
			_boxes = [_objects select {typeOf _x == "MSF_Placeholder_Supplies"}, 50, _type, true] call MSF_fnc_OFE_SpawnAndFillBoxes;
		};
		
		_allObjs append units _group;
		if (count _boxes > 0) then {_allObjs append _boxes};
		if (count _vicAmmoBoxes > 0) then {_allObjs append _vicAmmoBoxes};
		if (count _vics > 0) then {_allObjs append _vics};
	};
	case "Outpost";
	case "Base";
	case "HeliBase";
	case "AirBase";
	case "Bastion": {
		if (_existing) then {
			_objects = _def;			
		} else {
			_objects = [_position, 0, _def] call BIS_fnc_objectsMapper;			
		};
	};
};

_allObjs append _objects;

[_logic, _activationRange, _activationRange, _friendlySide, "present", false, _allObjs, _type, _params] call MSF_fnc_OFE_CreateModuleActivationTrigger;

[_type, _position, format ["Reported Location of %1", _type], ["CIV", "MIL", "OBJ"], ["mil_dot", "Color1_FD_F"]] call MSF_Intel_fnc_AddIntelItem;

if (_isOFE select 0) then {
	[_type, _position] call MSF_fnc_OFE_CreateMapMarker;	
};

if (_type in ["Checkpoint","Outpost","Base","HeliBase","Bastion"]) then {
	[_allObjs, false] call MSF_fnc_ShowHideObjects;
};
if (_type != "Bastion" || !(_isOFE select 0)) then {
	[_logic, 50, 50, _type] call MSF_fnc_OFE_CreateModuleClearTrigger;	
};
[_logic, 50, 50] call MSF_fnc_OFE_CreateModuleAITrigger;