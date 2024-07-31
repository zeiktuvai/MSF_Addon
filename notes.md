- Added the ability to have a local config file to dictate unit/inventory spawn instead of eden text boxes.
- Added code to use defaults if local config entries are missing instead of returning an empty array.
- Updated units to not have Thermal NVGS.
- Updated night units to actually have silencers on weapons that can have them.
- Updated patrol triggers to get unit spawn classes from config.
- Fixed bug in progress bar action code causing it not to appear in multiplayer.



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
					onLoad = "_east = [configfile >> 'CfgGroups' >> 'East', 2, false] call BIS_fnc_returnChildren; _indep = [configfile >> 'CfgGroups' >> 'Indep', 2, false] call BIS_fnc_returnChildren; _west = [configfile >> 'CfgGroups' >> 'West', 2, false] call BIS_fnc_returnChildren; _groups = _east + _indep + _west; _control = _Nhis select 0; { _group = _x; if(gettext (_group >> 'name') != '') then {_lbadd = _control lbadd gettext (_group >> 'name'); _control lbsetdata [_lbadd, configname _group]; _control lbsetpicture [_lbadd, gettext (_group >> 'icon')]; }; } foreach _groups;";
				};
			};
		};

    // _control = _Nhis select 0; 
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


