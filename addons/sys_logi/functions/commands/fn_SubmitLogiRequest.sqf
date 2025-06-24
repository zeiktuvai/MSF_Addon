params [["_type", "", [""]], ["_unit", objNull, [objNull]]];

private _supplyChain = false;
private _isEngineer = (getAllUnitTraits _unit select {"Engineer" in _x}) # 0 # 1;
private _item = [_type] call MSF_Logi_fnc_GetLogiSupports;
private _code = {};

if (serverTime < (missionNamespace getVariable "MSF" getOrDefault ["LastLogiRequstTime", 0]) + 30) exitWith {
	[side player, "Base"] commandChat "Cannot process logistics support request, all logistics units are busy.";
};

if (_item # 5 == 1) then {
	_code = {
		private _type = _item # 3;

		[missionNamespace, "MSF_Logi_DropRequested", [side player, _pos, _type]] remoteExec ["BIS_fnc_callScriptedEventHandler", 2];
		[[side player, "Base"], format ["%1 air-drop en route to grid %2", _item # 0, mapGridPosition _pos]] remoteExec ["commandChat", side player];

		private _mID = format ["%1_%2", _type, random 999];
		private _marker = createMarkerLocal [_mID, _pos];
		_marker setMarkerTypeLocal "mil_dot";
		_marker setMarkerColorLocal ([side player] call MSF_UI_fnc_GetSideColor);
		_marker setMarkerText format ["%1 LZ", _item # 0];
		
		private _markers = uiNamespace getVariable ["MSF_LogiMarkers", []];
		_markers pushBack _marker;
		uiNamespace setVariable ["MSF_LogiMarkers", _markers];
	};
};

//TODO: supply chain code
if (_supplyChain) then {}
else
{
	[side player, "Base"] commandChat "Logistics Support request received";

	[_code, _item, uiNamespace getVariable ["MSFLogiDeployCoord", []]] spawn {
		params ["_code", "_item", "_pos"];
		
		["MSF", "LastLogiRequstTime", serverTime] call MSF_fnc_SetConfigValue;
		sleep (random 30);
		[_code,[_item, _pos], objNull, true] call MSF_Logi_fnc_RequestLogistics;
	}
};
