class MSF_Module_DeleteUnit : Module_F
{
	scope = 2;
	displayName = "Cinematic - Delete Units";
	icon = "iconModule";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_DeleteUnit";
	functionPriority = 1;
	isGlobal = 1;
	isTriggerActivated = 0;
	isDisposable = 1;	
	is3DEN = 0;
	curatorCanAttach = 0;
	canSetArea = 1;
	canSetAreaShape = 1;
	canSetAreaHeight = 0;

	class AttributeValues
	{
		size3[] = { 50, 50, -1 };
		isRectangle = 0;
	};

	class Attributes : AttributesBase
	{
		class Units : Units
		{
			property = "MSF_Mod_Del_Units";
		};

		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Any units synced to this module will be deleted once they enter the module area. Mainly for use in story/cinematic scenes.";
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
