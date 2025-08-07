params [["_data", "", [""]], ["_unit", objNull, [objNull]]];

private _supplyChain = false;
private _isEngineer = (getAllUnitTraits _unit select {"Engineer" in _x}) # 0 # 1;
 
(parseSimpleArray _data) params ["_type", "_category", "_class"];
private _item = [_type] call MSF_Logi_fnc_GetLogiSupports;
private _code = {};
_item params ["_name", "_desc", "_icon", "_reqType", "_baseCost", "_airDrop", "_category"];
if (serverTime < (missionNamespace getVariable "MSF" getOrDefault ["LastLogiRequstTime", 0]) + 30) exitWith {
	[_unit, "Cannot process logistics support request, all logistics units are busy."] call MSF_Logi_fnc_SendLogisticsMessage;
};

if (_airDrop == 1) then {
	_code = {		
		_data params ["_type", "_category", "_class"];
		private _type = _reqType;

		[missionNamespace, "MSF_Logi_DropRequested", [side _unit, _pos, _type, _class]] remoteExec ["BIS_fnc_callScriptedEventHandler", 2];
		[_unit, format ["%1 air-drop en route to grid %2", _name, mapGridPosition _pos], true] call MSF_Logi_fnc_SendLogisticsMessage;

		private _mID = format ["MSF_Logi_%1_%2", _type, floor (random 999)];
		private _marker = createMarkerLocal [_mID, _pos];
		_marker setMarkerTypeLocal "mil_dot";
		_marker setMarkerColorLocal ([side _unit] call MSF_UI_fnc_GetSideColor);
		_marker setMarkerText format ["%1 LZ", _name];
		
		private _markers = uiNamespace getVariable ["MSF_LogiMarkers", []];
		_markers pushBack _marker;
		uiNamespace setVariable ["MSF_LogiMarkers", _markers];
	};
};

//TODO: supply chain code
if (_supplyChain) then {}
else
{
	[_unit, "Logistics Support request received"] call MSF_Logi_fnc_SendLogisticsMessage;

	[_code, _item, uiNamespace getVariable ["MSFLogiDeployCoord", []], _unit, parseSimpleArray _data] spawn {
		params ["_code", "_item", "_pos", "_unit", "_data"];
		
		["MSF", "LastLogiRequstTime", serverTime] call MSF_fnc_SetConfigValue;
		sleep (random 30);
		[_code,[_item, _pos, _unit, _data], objNull, true] call MSF_Logi_fnc_RequestLogistics;
	}
};
