class MSF_Module_CBRN_Area : Module_F
{
	scope = 2;
	displayName = "CBRN Area";
	icon = "x\zen\addons\modules\ui\nuke_ca.paa";
	category = "MSF_Module_CBRN";
	function = "MSF_fnc_Mod_Spawn_Fortify";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 0;	
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
        class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "";
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