params [["_type", "", [""]], ["_unit", objNull, [objNull]]];

private _supplyChain = false;
private _isEngineer = (getAllUnitTraits _unit select {"Engineer" in _x}) # 0 # 1;
private _item = [_type] call MSF_Logi_fnc_GetLogiSupports;
private _code = {};

if (_item # 5 == 1) then {
	_code = {
		[missionNamespace, "MSF_Logi_DropRequested", [side player, _pos, _type]] remoteExec ["BIS_fnc_callScriptedEventHandler", 2];
		[[side player, "Base"], format ["%1 air-drop en route to grid %2", _item # 0, mapGridPosition _pos]] remoteExec ["commandChat", side player];
	};
};

//TODO: supply chain code
if (_supplyChain) then {}
else
{
	[_code,[_item, uiNamespace getVariable ["MSFLogiDeployCoord", []]], objNull, true] call MSF_Logi_fnc_RequestLogistics;
};
