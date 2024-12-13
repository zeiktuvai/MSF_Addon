class MSF_Mod_OFE_Checkpoint : Module_F
{
	scope = 2;
	displayName = "Spawn Location - Road Checkpoint";
	icon = "a3\modules_f_beta\data\firingdrills\checkpoint_ca.paa";
	category = "MSF_Module_OFE";
	function = "MSF_fnc_OFE_Mod_SpawnCheckpoint";
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
		class Supplies
		{
			displayName = "Spawn Supplies";
			tooltip = "Spawn supplies in the supply crate at this location.";
			property = "MSF_Mod_OFE_CP_Supplies";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";
		};
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "MSF OFE System Module - Spawns a checkpoint with enemies at the location of the module.";
		sync[] = { "LocationArea_F" };

		class LocationArea_F
		{
			description[] = {};
			position = 1;
			direction = 0;
			optional = 1;
			duplicate = 1;
			synced[] = { };
		};
	};
};
