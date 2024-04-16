class CfgFunctions
{
    class MSF
	{
		class Persistence
		{
			file = "msf\fnc\persist";
			class Persist_Init
			{
				recompile = 1;
				postInit = 1;
			};
			class Persist_GetVehicleData
			{
				// file = "msf\fnc\persist\fn_GetVehicleData.sqf";				
				recompile = 1;
			};
			class Persist_SetVehicleData
			{
				recompile = 1;
			};
			class Persist_SaveData
			{
				recompile = 1;
			};
			class Persist_LoadData
			{
				recompile = 1;
			};
		};
	};
};