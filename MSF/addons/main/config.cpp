#include "MSF_Version.hpp"
#include "cfg\eden\MSF_Editor_Menu.hpp"
#include "cfg\mission\MSF_Config.hpp"
#include "cfg\module\MSF_Modules.hpp"

class CfgPatches
{
    class MSF3den
    {
		name = "Mission Support Foundation";
		author = "Zeik_Tuvai";
		version = MSF_VERSION;
        units[] = {"MSF_Module_BldgDestroy"};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"3DEN", "cba_settings", "ace_interaction"};
    };
};

class Cfg3DEN
{
	class Object
	{
		class AttributeCategories
		{
			#include "cfg\object\MSF_Attr_Player.hpp"
			#include "cfg\object\MSF_Attr_General.hpp"
			#include "cfg\object\MSF_Attr_IGS.hpp"
		};
	};
	class Mission
	{
		#include "cfg\mission\MSF_Mission_Attributes.hpp"
	};
	class Attributes
	{
		#include "cfg\mission\MSF_Controls.hpp"
		
		class Default; // Empty template with pre-defined width and single line height
		class Title : Default
		{
			class Controls
			{
				class Title;
			};
		}; // Two-column template with title on the left and space for content on the right
		class TitleWide : Default
		{
			class Controls
			{
				class Title;
			};
		}; // Template with full-width single line title and space for content below it

		// Your attribute class
		class MyAttributeControl : Title
		{
			// Expression called when the control is loaded, used to apply the value. It is not called when multiple entities are edited at once due to the fact that _value would not be available then.
			// See the note below this config extract
			// Passed params are: _this - controlsGroup, _value - saved value, _config - Path to attribute config e.g.:bin\config.bin/Cfg3DEN/Object/AttributeCategories/CATEGORY/Attributes/ATTRIBUTE
			attributeLoad = "(_this controlsGroupCtrl 100) ctrlSetText _value";

			// Expression called when attributes window is closed and changes confirmed. Used to save the value.
			// Passed param: _this - control
			attributeSave = "ctrlText (_this controlsGroupCtrl 100)";

			// List of controls, structure is the same as with any other controls group
			class Controls : Controls
			{
				class Title : Title{}; // Inherit existing title control. Text of any control with class Title will be changed to attribute displayName
				class Value : Combo
				{
					class ItemsConfig
					{
						path[] = { "CfgNotifications" };	// Path to config container
						localConfig = 1;					// 1 to search local Description.ext as well
						propertyText = "title";				// item's text
						propertyTextRight = "description";	// item's right text
						propertyPicture = "iconPicture";	// item's picture
						propertyColor = "color";			// item's text colour
						sort = 1; // whether the list should be sorted or not (1 = sorted/ 0 = unsorted)
					};
				};
			};
		};
	};
};

class Extended_PreInit_EventHandlers
{
    class ADDON
    {
        init = "call compile preprocessFileLineNumbers 'z\msf\addons\main\XEH_preInit.sqf'";
    };
};

class CfgNonAIVehicles
{
	class EmptyDetector;
	#include "cfg\trigger\MSF_Attr_FortifyTrigger.hpp"
	#include "cfg\trigger\MSF_Attr_PatrolTrigger.hpp"
	#include "cfg\trigger\MSF_Attr_SupplyTrigger.hpp"
	#include "cfg\trigger\MSF_Attr_WaveTrigger.hpp"
};