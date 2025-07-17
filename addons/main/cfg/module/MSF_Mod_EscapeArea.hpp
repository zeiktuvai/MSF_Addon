class MSF_Module_EscapeArea : Module_F
{
	scope = 2;
	displayName = "Mission Area (Escape)";
	icon = "a3\modules_f_curator\data\portraitendmission_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_OFE_Mod_EscapeArea";
	functionPriority = 2;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 1;	
	is3DEN = 1;
	curatorCanAttach = 0;
	canSetArea = 1;
	canSetAreaShape = 1;
	canSetAreaHeight = 0;

	class AttributeValues
	{
		size3[] = { 1000, 1000, -1 };
		isRectangle = 0;
	};

	class Attributes : AttributesBase
	{
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "This module sets the mission area that players will need to escape from.  Any player leaving the area of this module will end the mission. ONLY ONE OF THIS MOD TYPE WILL FUNCTION.";
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
