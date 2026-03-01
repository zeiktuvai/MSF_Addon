class MSF_Module_Radiation_Hotspot : Module_F
{
	scope = 1;
	displayName = "Radiation Hot Spot";
	icon = "x\zen\addons\modules\ui\nuke_ca.paa";
	category = "MSF_Module_CBRN";
	function = "";
	functionPriority = 0;
	isGlobal = 0;
	isTriggerActivated = 0;
	isDisposable = 0;	
	is3DEN = 0;
	curatorCanAttach = 0;
	canSetArea = 1;
	canSetAreaShape = 1;
	canSetAreaHeight = 1;

	class AttributeValues
	{
		size3[] = { 25, 25, -1 };
		isRectangle = 0;
	};

    class Attributes : AttributesBase
	{
		class DamageMult
		{
			displayName = "Damage Multiplier";
			tooltip = "Hot spot damage multiplier.";
			property = "MSF_Mod_Rad_HotspotDmg";
			control = "Slider";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
		};

        class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Place inside radiation area and sync to the radiation area module. Denotes small zones of intense radiation damage.";
		sync[] = { "LocationArea_F", "EmptyDetector" };

		class LocationArea_F
		{
			description[] = {};
			position = 0;
			direction = 0;
			optional = 0;
			duplicate = 1;
			synced[] = { "EmptyDetector" };
		};
	};
};
