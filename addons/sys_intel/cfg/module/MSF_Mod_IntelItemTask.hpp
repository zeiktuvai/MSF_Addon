class MSF_Module_IntelItem_Task : MSF_Module_Intel
{
	scope = 2;
	displayName = "Set Item Task State";
	icon = "\a3\Modules_F\Data\iconTaskSetState_ca.paa";
	category = "MSF_Module_Intel";
	function = "MSF_Intel_fnc_Mod_IntelItemTask";
	functionPriority = 1;
	isGlobal = 0;
	isTriggerActivated = 1;
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
		class TaskState
		{
            displayName = "Set State To";			
			tooltip = "State to set the Intel Item Task to when this item is activated.";
			property = "MSF_MOD_IntelItem_Task_State";
            control = "TaskStates";			
			expression = "_this setVariable ['%s',_value];";			
            defaultValue = "'SUCCEEDED'";          
		};

	class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Sets the task state of the linked intel item when activated via trigger.";
		sync[] = { "LocationArea_F" };

		class LocationArea_F
		{
			description[] = {};
			position = 1;
			direction = 0;
			optional = 0;
			duplicate = 1;
			synced[] = { };
		};
	};
};
