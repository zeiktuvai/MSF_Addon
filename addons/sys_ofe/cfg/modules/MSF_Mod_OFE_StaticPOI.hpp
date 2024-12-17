class MSF_Module_OFE_POI_Static : Module_F
{
	scope = 2;
	displayName = "POI - Static Turret";
	icon = "a3\static_f_gamma\data\ui\gear_staticturret_gmg_ca.paa";
	category = "MSF_Module_OFE";
	function = "MSF_fnc_OFE_Mod_SpawnStaticPOI";
	functionPriority = 2;
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
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "MSF Occupying Force Engagement System - This module spawns a random turret that players can steal and use.";
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