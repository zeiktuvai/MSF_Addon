class MSF_Module_SpawnTypes : Module_F
{
	scope = 2;
	displayName = "Config - Spawn Unit Types";
	icon = MSF_ICON;
	category = "MSF_Module";
	function = "MSF_fnc_Mod_SpawnUnitTypes";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 0;	
	is3DEN = 0;
	curatorCanAttach = 0;
	canSetArea = 0;
	canSetAreaShape = 0;
	canSetAreaHeight = 0;

	class AttributeValues
	{
		size3[] = { 0, 0, -1 };
		isRectangle = 0;
	};

	class Attributes : AttributesBase
	{
		class Units : Units
		{
			property = "MSF_Mod_UnitTypes";
            defaultValue = "'0'";
		};
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Any unit synced to this module will be used by the MSF to spawn units. Only grabs class names to use for spawns and discards any customizations.";
		sync[] = { "LocationArea_F" };

		class LocationArea_F
		{
			description[] = {};
			position = 0;
			direction = 0;
			optional = 0;
			duplicate = 0;
			synced[] = { };
		};
	};
};
