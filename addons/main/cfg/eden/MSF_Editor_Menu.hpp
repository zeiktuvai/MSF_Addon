class ctrlMenuStrip;
class display3DEN
{
	class Controls
	{
		class MenuStrip : ctrlMenuStrip
		{
			class Items
			{
				class Attributes
				{
					items[] += { "MSF_Folder" };
				};
				class MSF_Folder
				{
					text = "Mission Support Foundation";
					items[] = { "MSF_Settings", "MSF_CFG_Multi", "MSFDocs" };
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\open_ca.paa";
				};
				class MSF_Settings
				{
					text = "MSF Settings";
					action = "edit3DENMissionAttributes 'MSFSettings';";
					picture = "\a3\3den\data\attributes\namesound\special_ca.paa";
					opensNewWindow = 1;
				};
				class MSF_CFG_Multi
				{
					text = "Configure Multiplayer";
					action = "[] call MSF_fnc_ConfigureMP;";
					picture = "\a3\ui_f_curator\data\rsccommon\rscattributerespawnvehicle\start_ca.paa";
				};
				class MSFDocs
				{
					text = "Documentation (GitHub)";
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					weblink = "https://github.com/zeiktuvai/MSF_Addon/blob/Dev/README.md";
					opensNewWindow = 1;
				};
			};
		};
	};
};

