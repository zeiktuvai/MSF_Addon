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
					items[] += { "MSF_Settings" };
				};

				class MSF_Settings
				{
					text = "MSF Settings";
					action = "edit3DENMissionAttributes 'MSFSettings';";
				};
			};
		};
	};
};