	params [["_object", objNull, [objNull]], ["_varName", "", [""]], ["_errDetail", "", [""]]];

	try
	{
		private _var = _object getVariable _varName;
		if (_var == "") exitWith {[]};

		private _val = parseSimpleArray _var;
		if (count _val == 0) then { throw "Invalid Value" };
		_val;
	}
	catch
	{ 
		["Invalid array when parsing ""%1"" in ""%2"". Additional Details: ""%2"".", _varName, typeOf _object, _errDetail] call BIS_fnc_error;
		[];
	};	