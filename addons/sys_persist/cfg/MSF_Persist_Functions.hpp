class CfgFunctions
{
    class MSF_Persist
	{		
		class App
		{
			file = "z\msf\addons\sys_persist\functions\app";
			class Init
			{
				postInit = 1;
			};
		};
		class Commands
		{
			file = "z\msf\addons\sys_persist\functions\commands";
			class SaveData {};
			class LoadData {};
		};
		class Object
		{
			file = "z\msf\addons\sys_persist\functions\object";
			class GetObjectCargo {};
			class GetObjectDamage {};
			class GetVehicleData {};
			class SetObjectCargo {};
			class SetVehicleData {};
		};
	};
};
