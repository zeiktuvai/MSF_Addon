//[getPos player, 50] call BIS_fnc_objectsGrabber;
private _obj =  
[
	["Land_Zavora",[3.80566,-3.31445,0.0532341],270.03,1,0,[],"","",true,false], 
	["Land_HBarrier_01_line_1_green_F",[-4.41309,4.00879,0.000118256],0,1,0,[],"","",true,false], 
	["Land_HBarrier_01_line_1_green_F",[-4.40234,-4.5498,0.000501633],0,1,0,[],"","",true,false], 
	["Land_HelipadEmpty_F",[6.10742,-2.87305,5.72205e-06],0,1,0,[],"","",true,false], 
	["Land_HBarrier_01_line_5_green_F",[6.57715,2.91211,0.000291824],0,1,0,[],"","",true,false], 
	["Land_HelipadEmpty_F",[-7.18848,-3.06543,3.24249e-05],0,1,0,[],"","",true,false], 
	["Land_HBarrier_01_line_5_green_F",[6.55469,-4.36914,0.00031662],0,1,0,[],"","",true,false], 
	["Land_HBarrier_01_line_5_green_F",[8.63672,-0.760742,6.10352e-05],270.002,1,0,[],"","",true,false], 
	["Land_Cargo_Patrol_V1_F",[-7.30371,-1.47168,0],0,1,0,[],"","",true,false], 
	["Land_HBarrier_01_line_5_green_F",[-7.96875,4.03613,0.000516891],0,1,0,[],"","",true,false], 
	["Land_HBarrier_01_line_5_green_F",[-7.98535,-4.50488,0.00245285],0,1,0,[],"","",true,false], 
	["Land_HBarrier_01_line_3_green_F",[-11.7139,2.23633,0.000677109],270.058,1,0,[],"","",true,false], 
	["Land_HBarrier_01_line_5_green_F",[-11.7012,-2.41504,0.00097847],269.987,1,0,[],"","",true,false]
];

private _pos = getPos player;
private _rd = (_pos nearRoads 50) select 0;
private _rd2 = (roadsConnectedTo _rd) select 0;
private _dir = [_rd, _rd2] call BIS_fnc_DirTo;
private _rpos = getPos _rd;

private _objects = [_rpos, _dir, _obj] call BIS_fnc_objectsMapper;
private _group = createGroup [east, true];

{
	"rhs_msv_emr_rifleman" createUnit [getPos _x, _group];
} forEach (_objects select {typeOf _x == "Land_HelipadEmpty_F"});

{
	{
		_group createUnit ["rhs_msv_emr_rifleman", _x, [], 0, "NONE"];
	} forEach (_x buildingPos -1);
} forEach (_objects select {_x isKindOf "House_F"});
