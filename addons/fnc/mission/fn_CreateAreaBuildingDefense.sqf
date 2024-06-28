/*
private _num = 5;
private _trigger = t1;
private _side = east;
private _groupTypes = ["rhs_group_rus_msv_infantry_emr_fireteam","rhs_group_rus_msv_infantry_emr_MANEUVER","rhs_group_rus_msv_infantry_emr_section_AA","rhs_group_rus_msv_infantry_emr_section_marksman"];
*/
// add another trigger in code that's ~+50 x/y to activate the spawn since it takes a minute.
params [["_trigger", objNull, [objNull]], ["_num", 0, [0]], ["_side", east, [east]], ["_groupTypes", [], [[]]]];

[_trigger, _num, _side, _groupTypes] spawn {
	params ["_trigger", "_num", "_side", "_groupTypes"];
	private _radius = [_trigger] call MSF_fnc_GetAreaRadius;

	for "_i" from 1 to _num do {
		sleep 0.2;
		private _pos = [_trigger] call BIS_fnc_randomPosTrigger;
		private _group = [_pos, _side, _groupTypes] call MSF_fnc_SpawnGroupInSafePos;
		{ _x addCuratorEditableObjects [units _group]} forEach allCurators;

		[_pos, units _group, _radius, false, false, true] call MSF_fnc_ZEN_OccupyHouse;
	};
};
