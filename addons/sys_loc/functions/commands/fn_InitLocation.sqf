params [["_logic", objNull, [objNull]], ["_def", [], [[]]], ["_type", "", [""]], "_params", ["_existing", false, [false]], ["_side", east, [east]],
	["_friendlySide", west, [west]], ["_intel", true, [true]], ["_intelProvider", [], [[]]], ["_radius", 500, [0]], ["_marker", false, [false]]];

private ["_intelID", "_objects"];
private _position = position _logic;
private _unitTypes = ["unit", _side] call MSF_fnc_GetConfigData get "Units";
private _group = createGroup [_side, true];
private _allObjs = [];
private _dir = 0;

if (_type isEqualTo "Checkpoint") then {
	_dir = [_position] call MSF_fnc_GetRoadDirection;
};

if (_existing) then {
	_objects = _def;			
} else {
	_objects = [_position, _dir, _def] call BIS_fnc_objectsMapper;			
};

_allObjs append _objects;

//TODO: Consolidate this
if (_intel) then {	
	_intelID = [_type, _position, format ["Reported Location of %1", _type], ["CIV", "MIL", "OBJ"], 1, ["mil_dot", "Color1_FD_F"], 
		["MapUpdate", "Map updated with reported enemy location."], []] call MSF_Intel_fnc_AddIntelItem;
};

if (_marker) then {
 	[_type, _position] call MSF_fnc_OFE_CreateMapMarker;
 };

// intel system provider
if (count _intelProvider > 0) then
{
	_intelProvider params ["_intelP", "_interactC", "_intelC"];

	if (_intelP) then {
		{		
			if ([_interactC] call MSF_fnc_CalculateProbability) then {
				[_x, _intelC] call MSF_Intel_fnc_AddIntelInteraction;
			};		
		} forEach units _group;	
	};
};

[_allObjs, false] call MSF_fnc_ShowHideObjects;
[_logic, _radius, _radius, _friendlySide, "present", false, _allObjs, _type, _params, _intelID] call MSF_Loc_fnc_CreateLocationActivationTrigger;
[_logic, 50, 50] call MSF_fnc_OFE_CreateModuleAITrigger;
//[_logic, 50, 50, _type] call MSF_fnc_OFE_CreateModuleClearTrigger;
