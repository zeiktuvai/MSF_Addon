class MSF_Module_ShowHide : Module_F
{
	scope = 2;
	displayName = "Better Show/Hide";
	icon = "iconModule";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_ShowHide";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 1;
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
			property = "MSF_Mod_SH_Units";
		};

    	class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "A better version of BI's Show / Hide module.  Hides units on mission start, showing them when the synced trigger is activated and hiding them again when players leave if the trigger is repeatable.";
		sync[] = { "LocationArea_F", "EmptyDetector" };

		class LocationArea_F
		{
			description[] = {};
			position = 1;
			direction = 0;
			optional = 0;
			duplicate = 1;
			synced[] = { "EmptyDetector" };
		};
	};
};
