class MSF_Module_Spawn_DeadUnit : Module_F
{
	scope = 2;
	displayName = "Spawn - Dead Units";
	icon = "A3\Modules_F_Tacops\Data\CivilianPresence\icon32_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_DeadUnit";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 1;
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
		class UnitTypes
		{
			displayName = "Unit Types";
			tooltip = "Faction to spawn dead units from.";
			control = "Combo";
			expression = "_this setVariable ['%s',_value];";con = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
			property = "MSF_Module_vicPatrol_ActSide";
			defaultValue = 1;
			typeName = "STRING";
			class Values
			{
				class Civ_African
				{
					name = "Men (Africans)";
					tooltip = "Men (Africans)";
					value = "Civ_African";
                    picture = "\a3\Data_f\flags\flag_Altis_co.paa";
				};
				class Civ_Asian
				{
					name = "Men (Asian)";
					tooltip = "Men (Asian)";
					value = "Civ_Asian";
                    picture = "\a3\Data_f\flags\flag_Altis_co.paa";
				};
				class Civ_European
				{
					name = "Men (European)";
					tooltip = "Men (European)";
					value = "Civ_European";
                    picture = "\a3\Data_f\flags\flag_Altis_co.paa";
				};
				class Civ_Livionian
				{
					name = "Men (Livonian)";
					tooltip = "Men (Livonian)";
					value = "Civ_Livionian";
                    picture = "\a3\Data_f_enoch\flags\flag_Enoch_CO.paa";
				};
                class Civ_Tanoan
				{
					name = "Men (Tanoan)";
					tooltip = "Men (Tanoan)";
					value = "Civ_Tanoan";
                    picture = "\a3\Data_f_exp\flags\flag_Tanoa_CO.paa";
				};
				class Mil_NATO
				{
					name = "Men (NATO)";
					tooltip = "Men (NATO)";
					value = "Mil_NATO";
                    picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
				};
				class Mil_OPFOR
				{
					name = "Men (OPFOR)";
					tooltip = "Men (OPFOR)";
					value = "Mil_OPFOR";
                    picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
				};
				class Mil_IND
				{
					name = "Men (Independent)";
					tooltip = "Men (Independent)";
					value = "Mil_IND";
                    picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
				};
			};	
		};		
       
					
		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Works in conjunction with the MSF Dead Infantry placeholder to spawn dead civilians on each placeholder when the linked trigger is activated.";
		sync[] = { "LocationArea_F", "EmptyDetector" };

		class LocationArea_F
		{
			description[] = {};
			position = 1;
			direction = 0;
			optional = 0;
			duplicate = 1;
			synced[] = { "EmptyDetector" };
		};
	};
};