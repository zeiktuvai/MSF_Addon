params [["_object", objNull, [objNull]], ["_intelChance", 0.6, [1]]];

private _parents = [configOf _object, true] call BIS_fnc_returnParents;
private _prompt = "Ask for Information";
private _icon = "a3\ui_f\data\gui\rsccommon\rscbuttonsearch\search_start_ca.paa";
private _iconHold = "a3\ui_f\data\igui\cfg\holdactions\holdaction_search_ca.paa";
private _showCondition = "!(_target getVariable ['MSF_Intel_Activated', false]) && !(_target getVariable ['MSF_Intel_InProg', false]) && (_this distance _target < 3) && count (missionNamespace getVariable 'MSF_IntelItems') > 0";
private _actCondition = "true";
private _failAction = {
	[_target, objNull] remoteExec ["doWatch", 2];
	if (isMultiplayer) then {
		[_target , ["MSF_Intel_InProg", false]] remoteExec ["setVariable", -(clientOwner)];
	};
	if (_target isKindOf "MSF_IntelLaptop_Black" || _target isKindOf "MSF_IntelLaptop_Green" || _target isKindOf "MSF_IntelLaptop_Sand") then {
		_target setObjectTextureGlobal ["Screen_1", "z\msf\addons\ui\data\intel\MSF_Intel_Laptop.paa"];
	};
};
private _actTime = 5;
private _type = "CIV";

if (_parents findIf { _x == "Item_Base_F" || _x == "Items_base_F" } != -1) then {
	_prompt = "Look for Intel";	
	_actTime = MSF_Intel_ObjTime;
	_type = "OBJ";
};

if ("Civilian" in _parents) then {
	_icon = "a3\3den\data\cfgwaypoints\talk_ca.paa";
	_iconHold = "a3\missions_f_oldman\data\img\holdactions\holdaction_talk_ca.paa";
	_actCondition = "currentWeapon _caller == """"";
	_showCondition = _showCondition + " && [_target] call ace_medical_status_fnc_isInStableCondition";
	_prompt = "Ask for Information";
	_failAction = compile (toString _failAction + toString {hint "Civilians will not talk to you if they feel threatened.";});
	_actTime = MSF_Intel_CivTime;
};

if (_parents findIf { _x == "SoldierWB" || _x == "SoldierEB" || _x == "SoldierGB"; } != -1) then {
	_prompt = "Gather Intel";
	_actTime = MSF_Intel_MilTime;
	_type = "MIL";
};

[
	_object,
	_prompt,
	_icon,
	_iconHold,
	_showCondition,
	_actCondition,
	{
		[_target, _caller] remoteExec ["doWatch", 2];
		if (isMultiplayer) then {
			[_target , ["MSF_Intel_InProg", true]] remoteExec ["setVariable", -(clientOwner)];
		};
	},
	{
		if (_target isKindOf "MSF_IntelLaptop_Black" || _target isKindOf "MSF_IntelLaptop_Green" || _target isKindOf "MSF_IntelLaptop_Sand") then {
			if (_frame == 3) then {
				_target setObjectTextureGlobal ["Screen_1", "z\msf\addons\ui\data\intel\MSF_Intel_Laptop_I1.paa"];
			};
			if (_frame == 6) then {
				_target setObjectTextureGlobal ["Screen_1", "z\msf\addons\ui\data\intel\MSF_Intel_Laptop_I2.paa"];
			};
			if (_frame == 9) then {
				_target setObjectTextureGlobal ["Screen_1", "z\msf\addons\ui\data\intel\MSF_Intel_Laptop_I3.paa"];
			};
		};
	},
	{
		_target setVariable ["MSF_Intel_Activated", true, true];
		[_target, objNull] remoteExec ["doWatch", 2];
		[_target, _a0, _a1] call MSF_Intel_fnc_GetIntelItem;
		if (_target isKindOf "MSF_IntelLaptop_Black" || _target isKindOf "MSF_IntelLaptop_Green" || _target isKindOf "MSF_IntelLaptop_Sand") then {
			_target setObjectTextureGlobal ["Screen_1", "z\msf\addons\ui\data\intel\MSF_Intel_Laptop_F.paa"];
		};
	},
	_failAction,
	[_type, _intelChance],
	_actTime,
	nil,
	true,
	false
] remoteExec ["BIS_fnc_holdActionAdd", 0, _object];