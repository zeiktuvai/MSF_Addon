params [["_logic", objNull, [objNull]], ["_def", [], [[]]], ["_type", "", [""]], ["_enemySide", east, [east]],
	["_victimSide", resistance, [resistance]], ["_activationSide", "west", [west, ""]], ["_fillCount", 50, [50]], ["_vicAmmo", 250, [250]],
	["_intelID", "", [""]], ["_intelP", [], [[]]], ["_marker", false, [false]], ["_radius", 500, [0]]];

private _position = position _logic;
private _allObjs = [_position, 0, _def] call BIS_fnc_objectsMapper;
private _params = createHashMapFromArray [["POIType", _type], ["VictimSide", _victimSide], ["SupplyFillCount", _fillCount], ["VicAmmoCount", _vicAmmo], ["_intelProvider", _intelP]];

if (_marker) then {
	["POI", _position] call MSF_Loc_fnc_CreateMapMarker;	
};

[_allObjs, false] call MSF_fnc_ShowHideObjects;
[_logic, _radius, _radius, if (typeName _activationSide == "SIDE") then {[_activationSide] call BIS_fnc_sideNameUnlocalized} else {_activationSide},
	"present", false, _allObjs, "POI", _params, _intelID, _enemySide] call MSF_Loc_fnc_CreateLocationActivationTrigger;
