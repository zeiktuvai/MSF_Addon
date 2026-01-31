[
	"unit/player to heal",
	{
		if (_obj isKindOf "Man") then {
			_obj setDamage 0;
			[_obj] call ace_medical_fnc_fullHeal;
		};
	},
	{}
] call MSF_UI_fnc_CreateUIKeyboardHandler;
