- Moved functions from MSF_fnc_Init into MissionInit so they are executed automatically upon player join.
- Moved functions out of Units Addon and into MSF main.
- Updated JIPSpawnNearPlayer to work correctly.
- Updated MSF_fnc_Init to do nothing.
- Updated TFY internal items.
- Removed dependency of adding `[] call MSF_fnc_Init` into `initPlayerLocal.sqf`


event hanlder stuff
https://github.com/CBATeam/CBA_A3/wiki/Extended-Event-Handlers-(new)

// Base class templates
		
		
    

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
