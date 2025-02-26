class MSF_Module_Damage : Module_F
{
	scope = 2;
	displayName = "Mission - Damage Reduction";
	icon = "iconModule";
	category = "MSF_Module";
	function = "";
	functionPriority = 1;
	isGlobal = 1;
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
			property = "MSF_Mod_DR";
            defaultValue = "'0'";
		};

        class DmgReduction
        {
            displayName = "Vehicle Toughness";
            tooltip = "This percentage sets the damage reduction to all incoming damage for this vehicle.  (i.e. at 75%, incoming fire will only do 25% damage.)";
            property = "MSF_MOD_DmgReduction";
            control = "Slider";
            expression = "_this setVariable ['%s',_value];";
            defaultValue = "0.5";
        };

		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "All synced vehicles have their damage taken reduced by the configured percentage.";
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