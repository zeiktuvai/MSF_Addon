/*
	Author: zeik_tuvai

	Description:
		Adds GM Actions to the GM unit.

	Parameter(s):
        object - Unit object (player or unit).
        
	Examples:
		[] call MSF_fnc_ApplyGMActions;

	Function Ver 2.0
	Implemented in: MSF Addon v1.0
*/
if(isServer) then 
{
	private _players = ["MSF_Player_IsGM"] call MSF_fnc_GetPlayersByProperty;

	{
		private _values = _x;

		private _crateCode = {
			params ["_target", "_player", "_params"];
			_params params ["_vals"];

			_playerName = [_vals] call BIS_fnc_objectVar;
			_box = "Box_NATO_Ammo_F" createVehicle position (missionNamespace getVariable _playerName);
			clearItemCargo _box;
			clearMagazineCargo _box; 
			[_box, true] call ace_arsenal_fnc_initBox;
			_box setVehicleVarName "crate";
			crate = _box;
			publicVariable "crate";

		private _delBox = ["remove_box", "Remove Box","",{ deleteVehicle crate; }, {true}] call ace_interact_menu_fnc_createAction; 
		[_box,0,["ACE_MainActions"],_delBox] call ace_interact_menu_fnc_addActionToObject;
		};

		_gm_act = ["GM_Menu", "GM Actions", "", {}, {true}] call ace_interact_menu_fnc_createAction;

		_reveal_act = ["reveal_enemies","Reveal all enemies","",{{ player reveal _x; } forEach allUnits;}, {true}] call ace_interact_menu_fnc_createAction;

		_arsenal_action = ["spawn_arsenal","Spawn Arsenal Crate","",_crateCode, {true}, {}, [_values]] call ace_interact_menu_fnc_createAction;

		[_x, 1, ["ACE_SelfActions"], _gm_act] call ace_interact_menu_fnc_addActionToObject;

		[_x, 1, ["ACE_SelfActions", "GM_Menu"], _arsenal_action] call ace_interact_menu_fnc_addActionToObject;

		[_x, 1, ["ACE_SelfActions", "GM_Menu"], _reveal_act] call ace_interact_menu_fnc_addActionToObject;
	} forEach _players;
};