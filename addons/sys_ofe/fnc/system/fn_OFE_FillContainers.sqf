params [["_object", objNull, [objNull]], ["_count", 20, [20]]];

private _equipMult = missionNamespace getVariable ["MSF_OFE_LogiMultiplier", 1];
[_object, round (_count * _equipMult), false, [1,1,1,1,1]] call MSF_fnc_GenerateRandomInventory;
