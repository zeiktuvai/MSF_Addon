params [["_type", "", [""]]];

private _category = [];
private _vicSelector = [];
if (MSF_Logi_SupplyAirdrop) then { _category pushBack 0 };
if (MSF_Logi_VicAirdrop) then { _category pushBack 1 };
if (MSF_Logi_OffArtillery) then { _category pushBack 2 };
if (MSF_Logi_DefArtillery) then { _category pushBack 3 };
if !(MSF_Logi_VicStatic) then { _vicSelector pushBack "VicStatic" };
if !(MSF_Logi_VicTank) then { _vicSelector pushBack "VicTank"};

private _result = [];
{
	if !(getText (_x >> "type") in _vicSelector) then {
		private _row = [];

		{
			_row pushBack (_x call BIS_fnc_getCfgData);
		} forEach configProperties [_x, "true"];

		_result pushBack _row;
	};
} forEach ("getNumber (_x >> 'category') in _category" configClasses (configFile >> "MSF_Logi_Config" >> "Supports"));

if (_type != "") then {
	private _filter = _result select {_type in _x} select 0;
	if !(isNil "_filter") then {_filter} else {[]};
}
else
{
	_result;
};
