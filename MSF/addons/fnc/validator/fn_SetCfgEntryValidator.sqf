params ["_obj", "_value"];

private _result = false;
private _name = _value trim ['"', 0];
if (_obj getVariable["MSF_Trigger_Patrol", false]) then {
  if (_name != "") then {
    private _cfg = [configfile >> "CfgGroups", 4] call BIS_fnc_returnChildren select { configName _x == _name }; 
    if(count _cfg > 0 && _cfg call BIS_fnc_getCfgIsClass) then
    {
      _result = true;
    }
    else
    {
      [format ["%1 not found in CfgGroups, no group will spawn.", _name], 1, 10, true] call BIS_fnc_3DENNotification;    
    };   
  }
  else 
  {
      ["No group name set, patrol group will not spawn.", 1, 10, true] call BIS_fnc_3DENNotification;
  };
};
_result;
