class MSF_Module_GM : Module_F
{
	scope = 2;
	displayName = "Mission - Game Master";
	icon = "a3\ui_f_curator\data\logos\arma3_curator_logo_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_GM";
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
			property = "MSF_Mod_GM";
            defaultValue = "'0'";
		};

		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Any Player synced to this module will have access to the GM Actions ACE Menu.";
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