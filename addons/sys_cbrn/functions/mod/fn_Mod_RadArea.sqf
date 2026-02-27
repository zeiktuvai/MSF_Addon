params [["_logic", objNull, [objNull]],	["_units", [], [[]]], ["_activated", true, [true]]];

private _clothing = _logic getVariable ["Clothing", ["U_C_CBRN_Suit_01_Blue_F","U_B_CBRN_Suit_01_MTP_F","U_B_CBRN_Suit_01_Tropic_F","U_C_CBRN_Suit_01_White_F","U_C_CBRN_Suit_01_White_F","U_I_CBRN_Suit_01_AAF_F","U_I_E_CBRN_Suit_01_EAF_F","CUP_U_C_Fireman_01"]];
private _mask = _logic getVariable ["Mask", ["G_AirPurifyingRespirator_02_black_F","G_AirPurifyingRespirator_02_olive_F","G_AirPurifyingRespirator_02_sand_F","G_AirPurifyingRespirator_01_F","CUP_G_ESS_BLK_Facewrap_Black"]];
private _area = _logic getVariable ["objectArea", [0,0,0,false,-1]];
private _map = _logic getVariable ["ShowOnMap", false];
private _mapDetail = _logic getVariable ["MapDetail", 0];

if (count (nearestObjects [position a, ["MSF_Module_Radiation_Area"], (_area # 0) + 50]) > 1) exitWith {};

private _trig = createTrigger ["emptyDetector", getPos _logic];

_trig setTriggerArea _area;
_trig setTriggerActivation ["ANYPLAYER", "PRESENT", true];
_trig setTriggerStatements ["this", "", ""];

private _trigs = missionNamespace getVariable ["MSF_RadiationZones", []];
_trigs pushBack _trig;
missionNamespace setVariable ["MSF_RadiationZones", _trigs];

if (isServer) then {
	if (_map) then {
		private _mark = createMarkerLocal [format ["radzone_%1", count _trigs], position _logic];
		_mark setMarkerShapeLocal "ELLIPSE";
		_mark setMarkerSizeLocal [_area # 0, _area # 1];
		_mark setMarkerColor "ColorUNKNOWN";
	};
};

[_clothing, _mask] call MSF_CBRN_SetRadiationArea;
