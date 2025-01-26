class ctrlMenuStrip;
class display3DEN
{
	class Controls
	{
		class MenuStrip : ctrlMenuStrip
		{
			class Items
			{
				items[] += {"MSF"};
				class MSF
				{
					items[] = { "MSF_Settings", "MSF_CFG_Multi", "Separator", "MSFDocs" };					
					text = "Mission Support Foundation";
				};				
				class MSF_Settings
				{
					text = "Mission Settings";
					action = "edit3DENMissionAttributes 'MSFSettings';";
					picture = "z\msf\addons\main\ui\MSF_icon.paa";
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
					weblink = "https://github.com/zeiktuvai/MSF_Addon/wiki";
					opensNewWindow = 1;
				};
			};
		};
	};
};

