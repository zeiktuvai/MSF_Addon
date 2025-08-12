params [["_data", "", [""]], ["_unit", objNull, [objNull]]];

private _supplyChain = false;
private _isEngineer = (getAllUnitTraits _unit select {"Engineer" in _x}) # 0 # 1;
 
(parseSimpleArray _data) params ["_type", "_category", "_class"];
private _item = [_type] call MSF_Logi_fnc_GetLogiSupports;

_item params ["_name", "_desc", "_icon", "_reqType", "_baseCost", "_airDrop", "_category"];
if (serverTime < (missionNamespace getVariable "MSF" getOrDefault ["LastLogiRequstTime", 0]) + 30) exitWith {
	[_unit, "Cannot process logistics support request, all logistics units are busy."] call MSF_Logi_fnc_SendLogisticsMessage;
};

//TODO: supply chain code
if (_supplyChain) then {}
else
{
	[_unit, "Logistics Support request received"] call MSF_Logi_fnc_SendLogisticsMessage;

	[_item, uiNamespace getVariable ["MSFLogiDeployCoord", []], _unit, parseSimpleArray _data] spawn {
		params ["_item", "_pos", "_unit", "_data"];
		
		["MSF", "LastLogiRequstTime", serverTime] call MSF_fnc_SetConfigValue;
		sleep (random [10, 20, 30]);
		[{},[_item, _pos, _unit, _data], objNull, true] call MSF_Logi_fnc_RequestLogistics;
	}
};
