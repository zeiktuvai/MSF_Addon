private _queue = missionNamespace getVariable "MSF" get "Logi_Queue";

if !(isNil "_queue") then {
	if !([_queue] call BIS_fnc_PriorityQueue_IsEmpty) then {
		private _logiReq = [_queue] call BIS_fnc_PriorityQueue_PopItem;

		_logiReq params ["_type", "_pos", "_side"];
		[_side, _pos, _type] call MSF_Logi_fnc_SpawnVehicleParaDrop;
	};
};
