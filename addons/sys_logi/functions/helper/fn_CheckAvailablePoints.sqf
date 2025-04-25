params [["_obj", objNull, [objNull]]];

private _return = false;

if (isNull _obj) then {
	if ((missionNamespace getVariable "MSF") getOrDefault ["Logi_Points", 0] > MSF_Logi_PointsPerVic) then {_return = true;};
}
else
{
	if ([_obj] call ace_rearm_fnc_getSupplyCount >= MSF_Logi_CrateCost) then {_return = true;};
};

_return;