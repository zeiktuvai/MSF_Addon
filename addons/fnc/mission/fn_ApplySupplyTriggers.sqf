/*
	Author: zeik_tuvai

	Description:
		Part of MSF.  This script sets up triggers to create supplies.

	Function Ver 1.0
	Implemented in: MSF Addon v2.1.0
*/

if (isServer) then {
	private _triggers = allMissionObjects "MSFTriggerSupply";

	{
		private _area = triggerArea _x;
		private _activ = triggerActivation _x;

		[_x, (_area select 0)+500, (_area select 1)+500, _activ select 0, _activ select 1] call MSF_fnc_CreateActivationTrigger;
		_x setTriggerStatements[(triggerStatements _x) select 0, "[thisTrigger] call MSF_fnc_CreateRandomSupplies;", (triggerStatements _x) select 2];
	} forEach _triggers;
};