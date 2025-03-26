class MSF_Module_SupplyTruck : Module_F
{
	scope = 2;
	displayName = "Logistics - Supply Truck";
	icon = "a3\ui_f\data\map\vehicleicons\iconbackpack_ca.paa";
	category = "MSF_Module";
	function = "MSF_Logi_fnc_Mod_SupplyTruck";
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
		class Units : Units
		{
			property = "MSF_Mod_SupplyTruck_Units";
            defaultValue = "'0'";
		};

        class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Adds the supply truck interface to the syned vehicles.  Requires the vehicle is an ACE Rearm vehicle.";
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