class CfgPatches
{
    class MSF3den
    {
		name = "Mission Support Foundation"
		author = "Zeik_Tuvai";
		version = 0.2;
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {3DEN};
        is3DENmod = 1;
    };
};

#include "MSF_Functions.hpp"

class Cfg3DEN
{
	class Object
	{
		class AttributeCategories
		{
			#include "MSF_Attributes_Persist.hpp"
		};
	};
	class Mission
	{
		class MSF
		{
			displayName = "Mission Attributes";
			display = "Display3DENEditAttributesPreview";
			class AttributeCategories
			{
				class MSFPersist
				{
					class Attributes
					{
						class OperationName
						{
							property = "missionGroup";
						};
					};
				};
			};		
		};
	};
};
