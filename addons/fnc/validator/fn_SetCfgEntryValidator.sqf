params ["_obj", "_value"];

// if (_value != "" && _obj getVariable["MSF_Trigger_Patrol",false]) then { 
//  private _name = _value trim ['"', 0];
//  private _cfg = [configfile >> "CfgGroups", 4] call BIS_fnc_returnChildren select { configName _x == _name }; 
//   if(count _cfg > 0) then 
//   {
//     if (_cfg call BIS_fnc_cfgGetIsClass) exitWith {};
//   } else {
//     [format ["%1 not found in CfgGroups, no group will spawn.", _name], 1, 10, true] call BIS_fnc_3DENNotification;     
//   };
// };
