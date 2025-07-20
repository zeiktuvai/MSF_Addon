params [["_type", "", [""]]];

private _result = [];
{			
	private _row = [];

	{
		_row pushBack (_x call BIS_fnc_getCfgData);
	} forEach configProperties [_x, "true"];

	_result pushBack _row;
} forEach ("true" configClasses (configFile >> "MSF_Logi_Config" >> "Supports"));

if (_type != "") then {
	private _filter = _result select {_type in _x} select 0;
	if !(isNil "_filter") then {_filter} else {[]};
}
else
{
	_result;
};
