class MSF_Module_RandomSpawn : Module_F
{
	scope = 2;
	displayName = "Random Spawn Location";
	icon = "a3\ui_f\data\igui\rsctitles\mpprogress\respawn_ca.paa";
	category = "MSF_Module";
	function = "";
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
		description = "If more than one of these modules is placed on a map, one will be selected at random as the starting spawnw.";
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