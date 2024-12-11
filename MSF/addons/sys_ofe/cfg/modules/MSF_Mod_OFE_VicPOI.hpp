class MSF_Module_OFE_POI_Vic : Module_F
{
	scope = 2;
	displayName = "OFE POI - Unmanned Vehicle";
	icon = "ca\ui\data\iconcar_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_OFE_Mod_SpawnVehiclePOI";
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
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "MSF Occupying Force Engagement System - This module spawns a random vehicle that players can steal and use.";
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