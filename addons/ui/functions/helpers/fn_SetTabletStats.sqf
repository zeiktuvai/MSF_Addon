params [["_dialog", 0, [0]]];

private _ver = (allAddonsInfo select {'msf\addons\main' in (_x select 0)}) # 0 # 1 splitString ".";
private _logip = missionNamespace getVariable ["MSF", createHashMapFromArray [["Logi_Points", 0]]] get "Logi_Points";
_ver resize 3;
ctrlSetText [1033, format ['v%1', _ver joinString "."]];
ctrlSetText [1034, format ['Logi: %1pts', _logip]];
findDisplay _dialog displayCtrl 1034 ctrlSetTooltip format ["Available Logistics Points: %1", _logip];