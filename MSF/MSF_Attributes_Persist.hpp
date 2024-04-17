class MSFPersistence
{
	displayName = "MSF Persistence";
	collapsed = 0;
	class Attributes
	{
		class MSF_Persist_isEnable
		{
			displayName = "Enable Persistence";
			tooltip = "Enable persistence for this object";
			property = "MSF_Persist_isEnable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;
			unique = 0; 
			validate = "none";
			condition = "objectVehicle";
		};
		class SaveStates
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "Save States";
		};
		class MSF_Persist_isInvEnable
		{
			displayName = "Inventory Persistence";
			tooltip = "Enable inventory persistence for this object";
			property = "MSF_Persist_isInvEnable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
			unique = 0; 
			validate = "none";
			condition = "objectVehicle";
		};
		class MSF_Persist_isDamageEnable
		{
			displayName = "Damage Persistence";
			tooltip = "Enable damage persistence for this object";
			property = "MSF_Persist_isDamageEnable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
			unique = 0; 
			validate = "none";
			condition = "objectVehicle";
		};
		class MSF_Persist_isLocEnable
		{
			displayName = "Location Persistence";
			tooltip = "Enable location persistence for this object";
			property = "MSF_Persist_isLocEnable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;
			unique = 0; 
			validate = "none";
			condition = "objectVehicle";
		};
		class MSF_Persist_isAmmoEnable
		{
			displayName = "Ammunition Persistence";
			tooltip = "Enable ammunition persistence for this object";
			property = "MSF_Persist_isAmmoEnable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
			unique = 0; 
			validate = "none";
			condition = "objectVehicle";
		};
		class MSF_Persist_isFuelEnable
		{
			displayName = "Fuel Persistence";
			tooltip = "Enable fuel persistence for this object";
			property = "MSF_Persist_isFuelEnable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
			unique = 0; 
			validate = "none";
			condition = "objectVehicle";
		};
		class MSF_Persist_isLookEnable
		{
			displayName = "Appearance Persistence";
			tooltip = "Enable appearance customization persistence for this object";
			property = "MSF_Persist_isLookEnable";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 1;
			unique = 0; 
			validate = "none";
			condition = "objectVehicle";
		};
		class ACELogistics
		{
			data = "AttributeSystemSubcategory";
			control = "SubCategory";
			displayName = "ACE Logistics States";
		};
		class MSF_Persist_isACERefuel
		{
			displayName = "ACE Refuel Persistence";
			tooltip = "If this vehicle can refuel others, this will enable saving the current fuel tank for ACE Refuel";
			property = "MSF_Persist_isACERefuel";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;
			unique = 0; 
			validate = "none";
			condition = "objectVehicle";
		};
		class MSF_Persist_isACERearm
		{
			displayName = "ACE Rearm Persistence";
			tooltip = "If this vehicle can rearm others, this will enable saving the remaining ammunition for ACE Rearm";
			property = "MSF_Persist_isACERearm";
			control = "Checkbox";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = 0;
			unique = 0; 
			validate = "none";
			condition = "objectVehicle";
		};
	};
};