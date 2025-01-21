
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

// supply truck
[[],[[["rhs_fim92_mag",1],4],[["rhs_mag_20Rnd_556x45_Mk262_Stanag",20],15],[["rhs_mag_30Rnd_556x45_M855_Stanag",30],15],[["rhsusf_mag_17Rnd_9x19_FMJ",17],5],[["rhs_mag_M433_HEDP",1],6]],[[["rhs_weap_fim92","","","",[],[],""],1],[["rhs_weap_fim92","","","",["rhs_fim92_mag",1],[],""],2],[["rhs_weap_M136","","","",[],[],""],2],[["rhs_weap_M320","","","",[],[],""],1]]]
