
params ["_value"];

private _val = _value splitString ">>";

if ((missionConfigFile >> "CfgSentences" >> trim (_val select 0) >> trim (_val select 1)) call  BIS_fnc_getCfgIsClass) then {} else {
	[format ["%1 not found in CfgSentences.", _value], 1, 10, true] call BIS_fnc_3DENNotification;
};
