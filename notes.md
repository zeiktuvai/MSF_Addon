- changed number of base items that spawn in inventory gen
- fixed bug that causes inv gen system to panic in new scenario
- added repair specialist, engineer, helicopter pilot, and sniper loadouts
- optimized patrol and fortify code to reduce stuttering when playing locally, but spawn as quickly as possible when on a dedicated server.

h1 isKindOf "Air";
h1 isKindOf "LandVehicle";




private _vehicleList = vehicles select { _x getVariable "MSF_Persist_isEnable" == true; }; 

private _data = missionProfileNamespace getVariable ["MSF_Persist_1", []]; 

```sqf
if (count _data != 0 && count _vehicleList != 0) then 
{ 
 { 
  (_x select 0) params ["_vicName", "_vicType", "_dmg", "_inv", "_look", "_ammo", "_fuel", "_isAlive", "_loc", "_aceRefuel", "_aceRearm"]; 
  private ["_vic"]; 
 
  _vic = _vehicleList select { typeOf _x == _vicType && _x getVariable ["PersistenceSet", false] == false } select 0; 
 
  if (!isNil "_vic") then { 
    [_vic, _vicType, _inv, _dmg, _look, _ammo, _fuel, _isAlive, _loc, _aceRefuel, _aceRearm] call MSF_fnc_Persist_SetVehicleData;
   systemChat str _vic;
   _vic setVariable ["PersistenceSet", true]; 
  }; 
 } forEach _data; 
};
```

private _trig = missionNamespace getVariable "trig_end_mission";

triggerActivated _trig;

event hanlder stuff
https://github.com/CBATeam/CBA_A3/wiki/Extended-Event-Handlers-(new)

// Base class templates
		
		class Default; // Empty template with pre-defined width and single line height
		class ctrlCombo : Default;
		class Title : Default
		{
			class Controls
			{
				class Title;
			};
		}; // Two-column template with title on the left and space for content on the right
		class TitleWide : Default
		{
			class Controls
			{
				class Title;
			};
		}; // Template with full-width single line title and space for content below it

		class GroupCombo : Title
		{
			class Controls : Controls
			{
				class Title : Title {};
				class Value : ctrlCombo
				{
					onLoad = "_east = [configfile >> 'CfgGroups' >> 'East', 2, false] call BIS_fnc_returnChildren; _indep = [configfile >> 'CfgGroups' >> 'Indep', 2, false] call BIS_fnc_returnChildren; _west = [configfile >> 'CfgGroups' >> 'West', 2, false] call BIS_fnc_returnChildren; _groups = _east + _indep + _west; _control = _this select 0; { _group = _x; if(gettext (_group >> 'name') != '') then {_lbadd = _control lbadd gettext (_group >> 'name'); _control lbsetdata [_lbadd, configname _group]; _control lbsetpicture [_lbadd, gettext (_group >> 'icon')]; }; } foreach _groups;";
				};
			};
		};

    // _control = _this select 0; 
// {
// 	_cfgFace = _x; 
// 	if (gettext (_cfgFace >> 'displayname') != '' && getnumber (_cfgFace >> 'disabled') == 0) then 
// 			{ 	
// 				_lbadd = _control lbadd gettext (_cfgFace >> 'displayname');
// 				_control lbsetdata [_lbadd,configname _cfgFace];
// 				_control lbsetpicture [_lbadd,gettext (_cfgFace >> 'texture')];
// 				_control lbsettooltip [_lbadd,(_control lbtext _lbadd) + '\n' + (_control lbdata _lbadd)];
// 				_dlcLogo = if (configsourcemod _cfgFace == '') then {''} else {modParams [configsourcemod  _cfgFace,['logo']] param [0,'']};
// 				if (_dlcLogo != '') then {_control lbsetpictureright [_lbadd,_dlcLogo];};
// 			};				
// } foreach configproperties [configfile >> 'cfgfaces' >> 'Man_A3','isclass _x'];
// lbsort _control;


// _east = [configfile >> 'CfgGroups' >> 'East', 2, false] call BIS_fnc_returnChildren;
// _indep = [configfile >> 'CfgGroups' >> 'Indep', 2, false] call BIS_fnc_returnChildren;
// _west = [configfile >> 'CfgGroups' >> 'West', 2, false] call BIS_fnc_returnChildren;
// _groups = _east + _indep + _west;
// _control = _this select 0;
// {
// 	_group = _x;
// 	if(gettext (_group >> 'name') != '') then {
// 		_lbadd = _control lbadd gettext (_group >> 'name');
// 		_control lbsetdata [_lbadd, configname _group];
// 		_control lbsetpicture [_lbadd, gettext (_group >> 'icon')];
// 	};
// } foreach _groups;