MSF_UAVInventory = [] call MSF_fnc_GetDroneList;
private _droneOps = allPlayers select { "MSF_UAV" in typeOf _x };


if (count MSF_UAVInventory > 0 && count _droneOps > 0) then {
	publicVariable "MSF_UAVInventory";
	
	{   
		private _children = {
			params ["_target", "_player", "_params"];
			
			private _actions = [];
			{
				_x params ["_drone", "_num"];
				private _name = getText(configFile >> "CfgVehicles" >> _drone >> "displayName");

				private _kidCode = { 
					params ["_target", "_player", "_params"];
					private _name = getText(configFile >> "CfgVehicles" >> (_params select 0) >> "displayName");
					private _interval = getMissionConfigValue ["MSF_Player_UAVSpawn_Delay", 900];

					if (serverTime > (_player getVariable ["MSF_UAV_SpawnTimer", 0])) then 
					{
						private _dIndex = MSF_UAVInventory findIf { (_params select 0) in _x };
						private _update = _droneArray select _dIndex;
						_update set [1, (_update select 1) - 1];
						private _uavObj = [_player, _drone, west] call MSF_fnc_SpawnUAV;
						
						_player setVariable ["MSF_UAV_SpawnTimer", serverTime + _interval];
						private _uavlist = _player getVariable ["MSF_UAV_List", []];
						_uavlist pushBack (_uavObj select 0);
						_player setVariable ["MSF_UAV_List", _uavlist];	
						publicVariable "MSF_UAVInventory";

						if (local _player) then {
							hint format ["Launched %1", _name];
						};
					}
					else
					{
						if (local _player) then {
						hint "UAVs are not ready, still refuling and rearming.";
						};
					};
					
				};

				private _kidCond = {
					params ["_target", "_player", "_params"];

					private _remain = _params select 1;

					[false, true] select (_remain > 0);
				};	

				private _action = [format ["drone:%1", _drone], format ["%1 x %2", _name, _num], "", _kidCode, _kidCond, {}, _x] call ace_interact_menu_fnc_createAction;
				_actions pushBack [_action, [], _target];
			} forEach _params;

			_actions;
		};

		_uav_act = ["UAVMenu", "Launch UAV", "", {}, {true}, _children, _drones] call ace_interact_menu_fnc_createAction;

		[_x, 1, ["ACE_SelfActions"], _uav_act] call ace_interact_menu_fnc_addActionToObject;

	} forEach _droneOps;
}