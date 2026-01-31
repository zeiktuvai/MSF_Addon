class MSF_Module_RandomSpawnCrash : Module_F
{
	scope = 2;
	displayName = "Mission - Crashed Vic at Spawn";
	icon = "a3\ui_f\data\igui\rsctitles\mpprogress\respawn_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_RandomSpawnCrash";
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
		description = "If this is placed on a map, it spawns a wrecked and burning vehicle near spawn.";
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
