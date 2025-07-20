class MSF_Module_TrackingCenter : MSF_Module_Intel
{
	scope = 2;
	displayName = "Tracking Artillery Center";
	icon = "a3\ui_f\data\gui\cfg\communicationmenu\artillery_ca.paa";
	category = "MSF_Module";
	function = "";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 1;
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
   		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Sets the center that tracking artillery will fire outward from. Only the first module returned will be used, having multiple may result in unexpected behavior.";
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
