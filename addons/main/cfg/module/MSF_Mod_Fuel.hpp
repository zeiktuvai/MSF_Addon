class MSF_Module_Fuel : Module_F
{
	scope = 2;
	displayName = "Mission - Infinite Fuel";
	icon = "a3\ui_f\data\igui\cfg\actions\refuel_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_Fuel";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 1;	
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
			property = "MSF_Mod_Fuel";
            defaultValue = "'0'";
		};

		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Vehicles synced to this module will have their fuel replenished every interval tick.";
		sync[] = { "LocationArea_F" };

		class LocationArea_F
		{
			description[] = {};
			position = 1;
			direction = 0;
			optional = 0;
			duplicate = 0;
			synced[] = { };
		};
	};
};
