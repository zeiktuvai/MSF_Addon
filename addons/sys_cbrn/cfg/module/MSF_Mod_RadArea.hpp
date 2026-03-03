class MSF_Module_Radiation_Area : Module_F
{
	scope = 2;
	displayName = "Radiation Area";
	icon = "x\zen\addons\modules\ui\nuke_ca.paa";
	category = "MSF_Module_CBRN";
	function = "MSF_CBRN_fnc_Mod_RadArea";
	functionPriority = 1;
	isGlobal = 1;
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
		class ShowOnMap
		{
			displayName = "Show on Map";
			tooltip = "Marks the radiation area on the map.";
			property = "MSF_MOD_RadAreaMap";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "true";
		};
		class MapDetail
		{
			displayName = "Detail Level";
			tooltip = "How much information will be displayed about this area on the map.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";
			property = "MSF_MOD_RadArea_MapDetail";
			defaultValue = 0;
			typeName = "Number";
			class Values
			{
				class Zone
				{
					name = "Zone Only";
					tooltip = "Only marks the radiation zone area on the map.";
					value = 0;
				};
				class ZoneH
				{
					name = "Zone and Hotspot";
					tooltip = "Marks the radiation zone and hotspots on the map.";
					value = 1;
				};
				class Full
				{
					name = "Full";
					tooltip = "Shows all details about the radiation zone on the map including hotspots.";
					value = 2;
				};				
			};	
		};
		// class Clothing
		// {
		// 	displayName = "Protective Clothes";
		// 	tooltip = "Any uniform in this list will protext the wearer from damage. Comma delimited list of strings";
		// 	property = "MSF_CBRN_Rad_Cloth";
		// 	control = "EditCodeMulti3";
		// 	expression = "_this setVariable ['%s',_value];";
		// 	defaultValue = "'""U_C_CBRN_Suit_01_Blue_F"",""U_B_CBRN_Suit_01_MTP_F"",""U_B_CBRN_Suit_01_Tropic_F"",""U_C_CBRN_Suit_01_White_F"",""U_C_CBRN_Suit_01_White_F"",""U_I_CBRN_Suit_01_AAF_F"",""U_I_E_CBRN_Suit_01_EAF_F"",""CUP_U_C_Fireman_01""'";
		// };
		// class Mask
		// {
		// 	displayName = "Protective Mask";
		// 	tooltip = "Any facewear in this list will protext the wearer from damage. Comma delimited list of strings";
		// 	property = "MSF_CBRN_Rad_Face";
		// 	control = "EditCodeMulti3";
		// 	expression = "_this setVariable ['%s',_value];";
		// 	defaultValue = "'""G_AirPurifyingRespirator_02_black_F"",""G_AirPurifyingRespirator_02_olive_F"",""G_AirPurifyingRespirator_02_sand_F"",""G_AirPurifyingRespirator_01_F"",""CUP_G_ESS_BLK_Facewrap_Black""'";
		// };

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
