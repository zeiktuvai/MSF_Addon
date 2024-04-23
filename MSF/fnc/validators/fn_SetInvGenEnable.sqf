// Validator for inventory generation and persistence
params ["_this", "_value"];

private _isPersist = _this getVariable ["MSF_Persist_isEnable", false];
private _isGen = _this getVariable ["MSF_Helper_InvGenerate_Enabled", false];
private _isLoad = "MSFSettings" get3DENMissionAttribute "MSF_Mission_Loading";

if (_isPersist && _isLoad && _isGen) then {
	[format ["Persistence enabled for %1, of type %2.  Inventory generation will not run.", [_this] call BIS_fnc_objectVar, typeOf _this], 1, 10, true] call BIS_fnc_3DENNotification;
};
