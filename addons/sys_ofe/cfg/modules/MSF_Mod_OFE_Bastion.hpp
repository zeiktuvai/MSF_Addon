class MSF_Mod_OFE_Bastion : Module_F
{
	scope = 2;
	displayName = "Spawn Location - Bastion";
	icon = "a3\modules_f_beta\data\firingdrills\checkpoint_ca.paa";
	category = "MSF_Module_OFE";
	function = "MSF_fnc_OFE_Mod_SpawnBastion";
	functionPriority = 2;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 1;	
	is3DEN = 1;
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
		description = "MSF OFE System Module - Spawns the bastion for this map, when cleared the mission will end. (Only one module of this type is allowed).";
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
