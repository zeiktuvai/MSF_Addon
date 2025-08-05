params [["_dialog", 0, [0]]];

private _logip = [side player] call MSF_Logi_fnc_GetLogiPoints;
findDisplay _dialog displayCtrl 1034 ctrlSetTooltip format ["Available Logistics Points: %1", _logip];
findDisplay _dialog displayCtrl 1034 ctrlSetStructuredText parseText format ["Logi Points <br/> %1", _logip];

if (missionNamespace getVariable "MSF" get "IntelEnabled") then {
	private _intel = missionNamespace getVariable "MSF" get "IntelLevel";
	findDisplay _dialog displayCtrl 1035 ctrlSetStructuredText parseText format ["Intel Level <br/> %1", _intel];
}
else
{
	findDisplay _dialog displayCtrl 1035 ctrlSetStructuredText parseText "NO INTEL";
};

private _ver = (allAddonsInfo select {'msf\addons\main' in (_x select 0)}) # 0 # 1 splitString ".";
_ver resize 3;
ctrlSetText [1033, format ['v%1', _ver joinString "."]];
