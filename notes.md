- Updated magazine config into three "sets", can be enabled or disabled in the mission config.
- Updated spawn triggers so that they now can spawn independent and blufor forces.


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


