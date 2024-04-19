class CfgFunctions
{
    class MSF
	{
		class Mission
		{
			file = "msf\fnc\mission";
			class Init
			{
				recompile = 1;
				postInit = 1;
			};
			class ApplyGMActions
			{
				recompile = 1;
			};
		};
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
		class ACEOptions
		{
			file = "msf\fnc\ace";
			class ACEMedUnconcious
			{
				recompile = 1;
			};
		};
	};
};