class MSF_Module_Rearm : Module_F
{
	scope = 2;
	displayName = "Logistics - Player Rearm";
	icon = "a3\ui_f\data\igui\cfg\cursors\iconrearmat_ca.paa";
	category = "MSF_Module";
	function = "MSF_Logi_fnc_Mod_Rearm";
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
			property = "MSF_Mod_InvRearm_Units";
            defaultValue = "'0'";
		};

        class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Adds a hold interaction that will place mags for a players primary and handgun into their inventory.";
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
