/*
	Author: zeik_tuvai

	Description:
		When used in a vehicle respawn module's expression field upon respawn it will clear the vehicle storage and add items useful for playing with
		ACE as well as some AA/AT tools.  It also takes a variable to apply a custom look to the Badger IFV if passed a 1.  (For TFY Missions).

	Parameter(s):
        object - Unit object (player or unit).
		int - 1 to enable custom appearance, 0 to disable.  (Only works on BadgerIFV).
        
	Examples:
		Assuming you place this helper script into a folder called scripts in your root mission directory.  Place this in the expression field
		of the vehicle respawn module linked to your vic.
		nul = [_this select 0, 1] execVM "scripts\tfy_helper_vic-respawn.sqf";

	Script version 1.0
*/

params ["_unit", "_isAAV"];

if !(local _unit) exitWith {};

clearWeaponCargoGlobal _unit;
clearMagazineCargoGlobal _unit;
clearItemCargoGlobal _unit;
clearBackpackCargoGlobal _unit;

{
  _unit addWeaponCargoGlobal _x;
} forEach [["rhs_weap_maaws", 2]];

{
  _unit addMagazineCargoGlobal _x;
} forEach [["HandGrenade", 3], ["1Rnd_HE_Grenade_shell", 3], ["1Rnd_Smoke_Grenade_shell", 3], ["1Rnd_SmokeGreen_Grenade_shell", 3], ["SmokeShellGreen", 8], ["SmokeShellBlue", 8], ["Titan_AA", 4], ["MRAWS_HEAT_F", 10], ["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", 5], ["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 5]];

{
  _unit addItemCargoGlobal _x;
} forEach [["ACE_wirecutter", 1], ["ACE_CableTie", 10], ["ACE_EarPlugs", 10], ["ACE_fieldDressing", 10], ["ACE_packingBandage", 10], ["ACE_elasticBandage", 10], ["ACE_tourniquet", 8], ["ACE_splint", 6], ["ACE_morphine", 10], ["ACE_adenosine", 5], ["ACE_epinephrine", 5], ["ACE_plasmaIV", 5], ["ACE_plasmaIV_500", 10], ["ACE_bloodIV", 5], ["ACE_bloodIV_500", 10], ["ACE_salineIV", 5], ["ACE_salineIV_500", 10], ["ACE_quikclot", 10], ["ACE_UAVBattery", 5]];

if (_isAAV == 1) then
{
	private _vicType = typeOf _unit;
	if (_vicType == "B_T_APC_Wheeled_01_cannon_F") then
	{
    	[_unit, false, ["showBags", 1, "showCamonetHull", 1, "showCamonetCannon", 1, "ShowCamonetTurret", 1, "showSLATHull",1]] call BIS_fnc_initVehicle;
	};
};
