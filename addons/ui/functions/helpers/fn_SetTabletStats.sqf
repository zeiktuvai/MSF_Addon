private _ver = (allAddonsInfo select {'msf\addons\main' in (_x select 0)}) # 0 # 1 splitString ".";
_ver resize 3;
ctrlSetText [1033, format ['v%1', _ver joinString "."]];
ctrlSetText [1034, format ['Logi: %1pts', missionNamespace getVariable ["MSF", createHashmapFromArray [["Logi_Points", 0]]] get "Logi_Points"]];