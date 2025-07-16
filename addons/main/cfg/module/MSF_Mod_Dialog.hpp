class MSF_Module_Dialog : Module_F
{
	scope = 2;
	displayName = "Cinematic - Dialog";
	icon = "a3\3den\data\cfgwaypoints\talk_ca.paa";
	category = "MSF_Module";
	function = "MSF_fnc_Mod_Dialog";
	functionPriority = 1;
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
			property = "MSF_Mod_Dialog";
            defaultValue = "'0'";
		};        
		class DialogClass
		{
			displayName = "Dialog Path";
			tooltip = "Path to dialog classes under CfgSentences (i.e. MyAwesomeMission >> MissionBriefing)";
			property = "MSF_MOD_Dialog_Class";
			control = "EditCode";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "'BaseClass >> DialogClass'";			
		};
		class Task
		{
			displayName = "Task ID";
			tooltip = "TaskId of task to complete when player talks to unit (Leave blank to disable).";
			property = "MSF_MOD_Dialog_Task";
			control = "EditCode";
			expression = "_this setVariable ['%s',_value];";
			defaultValue =  "''";
		};
		class Action
		{
			displayName = "Custom Action";
			tooltip = "Code block that can be executed during the conversation if provided.";
			property = "MSF_MOD_Action";
			control = "EditCodeMulti3";
			expression = "_this setVariable ['%s',_value];";
			defaultValue = "''";
		};


		class ModuleDescription : ModuleDescription {};
	};
	
	class ModuleDescription : ModuleDescription
	{
		description = "Any unit synced to this module will have a dialog ACE menu option added, all units synced will have the same dialog so be careful. THIS REQUIRES ADDITIONAL CONFIG IN YOUR MISSIONS Description.ext.";
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
