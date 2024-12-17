class MSF_Module_Intel : Module_F
{
	scope = 2;
	displayName = "Intel System - Zone";
	icon = "a3\modules_f\data\iconstrategicmapinit_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_SetupIntel";
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
		size3[] = { 100, 100, -1 };
		isRectangle = 0;
	};

	class Attributes : AttributesBase
	{
		class Units : Units
		{
			property = "MSF_Intel_Units";
		};
		class Test
		{
			displayName = "test";
			tooltip = "test.";
			property = "test";
			control = "MyAttributeControl";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "";
			typeName = "String";			
		};
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "MSF Intel System - Define the area and units uf an Intel Zone.";
		sync[] = { "LocationArea_F" };

		class LocationArea_F
		{
			description[] = {};
			position = 1;
			direction = 0;
			optional = 0;
			duplicate = 1;
			synced[] = { };
		};
	};
};