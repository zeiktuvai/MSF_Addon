class MSF_Module_Spawn_Wave : Module_F
{
	scope = 2;
	displayName = "Wave Defense Area";
	icon = "x\cba\addons\ai\iconinvisibletarget.paa";
	category = "MSF_Module_Spawn";
	function = "MSF_fnc_Mod_Spawn_Wave";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 1;	
	is3DEN = 0;
	curatorCanAttach = 0;
	canSetArea = 1;
	canSetAreaShape = 1;
	canSetAreaHeight = 1;

	class AttributeValues
	{
		size3[] = { 100, 100, -1 };
		isRectangle = 0;
	};

    class Attributes : AttributesBase
	{
		class ActivationSide
		{
			displayName = "Activation Side";
			tooltip = "Faction that will activate this module.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Module_wave_ActSide";
			defaultValue = 1;
			typeName = "Number";
			class Values
			{
				class East
				{
					name = "East";
					tooltip = "OPFOR";
					value = 0;
				};
				class Independant
				{
					name = "Independant";
					tooltip = "Independant";
					value = 2;
				};
				class West
				{
					name = "West";
					tooltip = "BLUFOR";
					value = 1;
				};
				class Player
				{
					name = "AnyPlayer";
					tootip = "AnyPlayer";
					value = 3;
				};
			};	
		};
        class Side
		{
			displayName = "Spawn Side";
			tooltip = "Faction to spawn the patrol in.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_Module_wave_Side";
			defaultValue = 0;
			typeName = "Number";
			class Values
			{
				class East
				{
					name = "East";
					tooltip = "OPFOR";
					value = 0;
				};
				class Independant
				{
					name = "Independant";
					tooltip = "Independant";
					value = 2;
				};
				class West
				{
					name = "West";
					tooltip = "BLUFOR";
					value = 1;
				};
			};	
		};
        class WaveNum
		{
			displayName = "Number of waves";
			tooltip = "Number of waves to spawn";
			property = "MSF_Mod_Waves_Num";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "2";
			validate = "number";
			typeName = "NUMBER";
		};
		class WaveInterval
		{
			displayName = "Wave Interval";
			tooltip = "Interval in seconds between waves.";
			property = "MSF_Mod_Waves_Interval";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "300";
			validate = "number";
			typeName = "NUMBER";
		};		
		class MSFWave_Types
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Spawn Options";
		};		
		class InfantryNum
		{
			displayName = "Infantry Group Count";
			tooltip = "Number of infantry groups to spawn per wave";
			property = "MSF_Mod_Wave_Infantry_Num";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "0";
			validate = "number";
			typeName = "NUMBER";
		};
		class VehicleNum
		{
			displayName = "Vehicle Count";
			tooltip = "Number of vehicles to spawn per wave.";
			property = "MSF_Mod_Wave_Vehicle_Num";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "0";
			validate = "number";
			typeName = "NUMBER";		
		};
		class ArmorNum
		{
			displayName = "Armored Vehicle Count";
			tooltip = "Number of armored vehicles to spawn per wave.";
			property = "MSF_Mod_Wave_Armor_Num";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "0";
			validate = "number";
			typeName = "NUMBER";		
		};
		class AirNum
		{
			displayName = "Air Unit Count";
			tooltip = "Number of air units to spawn per wave.";
			property = "MSF_Mod_Wave_Air_Num";
			control = "EditShort";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "0";
			validate = "number";
			typeName = "NUMBER";		
		};
		class WaveFill
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Vehicle Options";
		};
		class VicFillProb
		{
			displayName = "Chance of full vehicle";
			tooltip = "This percentage sets the chance that the spawned vehicle will be full of infantry.";
			property = "MSF_Mod_Wave_VicFillPercentage";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;
		};
        class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Designates a point that eneies will assault in waves. The modules size determines the area units need to be in for the module to spawn.";
		sync[] = { "LocationArea_F", "EmptyDetector" };

		class LocationArea_F
		{
			description[] = {};
			position = 0;
			direction = 0;
			optional = 0;
			duplicate = 1;
			synced[] = { "EmptyDetector" };
		};
	};
};