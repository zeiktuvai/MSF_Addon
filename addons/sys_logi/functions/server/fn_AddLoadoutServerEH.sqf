addMissionEventHandler ["PlayerDisconnected", { 
	params ["_id", "_uid", "_name", "_jip", "_owner", "_idstr"];

	[_uid] call MSF_Logi_fnc_RemoveSharedVehicleLoadout;
 }, []];
