class MSF_Module_Radiation_Area : Module_F
{
	scope = 2;
	displayName = "Radiation Area";
	icon = "x\zen\addons\modules\ui\nuke_ca.paa";
	category = "MSF_Module_CBRN";
	function = "";
	functionPriority = 1;
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
		size3[] = { 100, 100, -1 };
		isRectangle = 0;
	};

    class Attributes : AttributesBase
	{
		class Clothing
		{
			displayName = "Protective Clothes";
			tooltip = "Any uniform in this list will protext the wearer from damage. Comma delimited list of strings";
			property = "MSF_CBRN_Rad_Cloth";
			control = "EditCode";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "";
		};
		class Mask
		{
			displayName = "Protective Mask";
			tooltip = "Any facewear in this list will protext the wearer from damage. Comma delimited list of strings";
			property = "MSF_CBRN_Rad_Face";
			control = "EditCode";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "";
		};
		class DamageType
		{
			displayName = "Damage Ramp Method";
			tooltip = "Determins how damage will increase over time.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_CBRN_Rad_Dmg";
			defaultValue = 0;
			typeName = "Number";
			class Values
			{
				class Linear
				{
					name = "Linear";
					tooltip = "Linear increases damage by the same amount every tick.";
					value = 0;
				};
				class Exponential
				{
					name = "Exponential";
					tooltip = "Exponential increases by a multiple every tick.";
					value = 1;
				};
			};	
		};
        class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Radiation damage area, any player not wearing the defined clothing will take tick damage.";
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
