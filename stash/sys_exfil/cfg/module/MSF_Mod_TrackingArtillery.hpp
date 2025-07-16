class MSF_Module_TrackingArty : MSF_Module_Intel
{
	scope = 2;
	displayName = "Tracking Artillery";
	icon = "a3\ui_f\data\gui\cfg\communicationmenu\artillery_ca.paa";
	category = "MSF_Module";
	function = "MSF_Arty_fnc_Mod_TrackingArtillery";
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
			property = "MSF_Mod_TrackArty_Units";
            defaultValue = "'0'";
		};
   		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Sets up artillery that tracks the synced units and fires on them every so often if they stand still for too long.  Will slowly walk in until they have deadly accuracy.";
		sync[] = { "LocationArea_F" };

		class LocationArea_F
		{
			description[] = {};
			position = 0;
			direction = 0;
			optional = 0;
			duplicate = 0;
			synced[] = { "AnyAI" };
		};
	};
};
