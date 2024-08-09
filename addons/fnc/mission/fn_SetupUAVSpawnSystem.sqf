private _drones = [] call MSF_fnc_GetDroneList;
private _droneOps = allPlayers select { "MSF_UAV" in typeOf _x };

	missionNamespace setVariable ["MSF_UAVInventory", _drone, true];

if (count _drones > 0 && count _droneOps > 0) then {
	
	{   
		private _children = {
			params ["_target", "_player", "_params"];
			_params params ["_droneList"];

			private _actions = [];
			{
				_x params ["_drone", "_num"];
				private _name = getText(configFile >> "CfgVehicles" >> _drone >> "displayName");

				private _kidCode = { 
					params ["_target", "_player", "_params"];
					private _name = getText(configFile >> "CfgVehicles" >> (_params select 0) >> "displayName");

					private _droneArray = missionNamespace getVariable "MSF_UAVInventory";
					private _dIndex = _droneArray findIf { (_params select 0) in _x };
					private _update = _droneArray select _dIndex;
					_update set [1, (_update select 1) - 1];
					
					hint format ["Launched %1", _name];
				};

				private _kidCond = {
					params ["_target", "_player", "_params"];

					private _remain = _params select 1;

					[false, true] select (_remain > 0);
				};	

				private _action = [format ["drone:%1", _drone], format ["%1 x %2", _name, _num], "", _kidCode, _kidCond, {}, _x] call ace_interact_menu_fnc_createAction;
				_actions pushBack [_action, [], _target];
			} forEach _droneList;

			_actions;
		};

		_uav_act = ["UAVMenu", "Launch UAV", "", {}, {true}, _children, _drones] call ace_interact_menu_fnc_createAction;

		[_x, 1, ["ACE_SelfActions"], _uav_act] call ace_interact_menu_fnc_addActionToObject;

	} forEach _droneOps;
}


_myarry = missionNamespace getVariable "MSF_UAVInventory";

_update = _myarry select 0;

_update set [1, (_update select 1) - 1];

_myarry;