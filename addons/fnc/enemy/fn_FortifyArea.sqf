


params [["_trigger", objNull, [objNull]]];

private _infantryGroupClasses = getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Groups');
private _staticClasses = []; //
private _vicTypes = getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Vehicles');
private _armorClasses = getArray (configFile >> 'MSFConfig' >> 'PatrolSets' >> 'AFRF_Classes' >> 'Armor');


// add another trigger in code that's ~+50 x/y to activate the spawn since it takes a minute.

if (_trigger getVariable ["MSF_Trig_Fortify_Enable", false]) then {
	private _side = _trigger getVariable ["MSF_Trig_Fortify_Side", east];

	// building defense
	if (_trigger getVariable ["MSF_Trig_Fortify_Building_Enable", false]) then {
		private _buildingNum = _trigger getVariable ["MSF_Trig_Fortify_Building_Num", 5];
		[_trigger, _buildingNum, _side, _groupTypes] spawn MSF_fnc_CreateAreaBuildingDefense;
	};

	// static vics
	if (_trigger getVariable ["MSF_Trig_Fortify_Vehicle_Enable", false]) then {
		private _vicNum = _trigger getVariable ["MSF_Trig_Fortify_Vehicle_Num", 2];
		[_trigger, _vicNum, _side, _vicTypes] spawn MSF_fnc_CreateAreaVehicleDefense;
	};
};




/*
private _num = 5;
private _trigger = t1;
private _side = east;
private _groupTypes = ["rhs_group_rus_msv_infantry_emr_fireteam","rhs_group_rus_msv_infantry_emr_MANEUVER","rhs_group_rus_msv_infantry_emr_section_AA","rhs_group_rus_msv_infantry_emr_section_marksman"];
*/