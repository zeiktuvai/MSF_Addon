class MSF_Module_ScenarioEnd : Module_F
{
	scope = 2;
	displayName = "Mission - Scenario Ending";
	icon = "a3\modules_f_curator\data\portraitendmission_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_ScenarioEnd";
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
		class Units : Units
		{
			property = "MSF_Mod_ScenEnd";
            defaultValue = "'0'";
		};

		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Any players synced to this module will have an ACE action added to their menu to end the mission once the synced trigger is activated.";
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