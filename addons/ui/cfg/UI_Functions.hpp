class CfgFunctions
{
    class MSF_UI
	{
        class Commands
        {
            file = "z\msf\addons\ui\functions\commands";
            class DisplayDeployUAV {};
            class DisplaySupplyMenu {};
            class DisplayVicLoadouts {};
        };
        class Handlers
        {
            file = "z\msf\addons\ui\functions\handlers";
            class OnStartPlaceObjectUI {};
            class OnVehicleLoadoutApply {};
            class OnVehicleLoadoutDelete {};
            class OnVehicleLoadoutCreate {};
            class OnVehicleLoadoutLoad {};
            class OnVehicleLoadoutShare {};
            class OnVehicleLoadoutTreeSelChanged {};
            class OnVehicleLoadoutUpdate {};
            class OnSupplySelChanged {};
        };
        class Helpers
        {
            file = "z\msf\addons\ui\functions\helpers";
            class CreateLoadout {};
            class CreateUIKeyboardHandler {};
            class SetTabletStats {};
        };
        class UI
        {
            file = "z\msf\addons\ui\functions\ui";
            class FormatVehicleLoadoutDisplay {};
        };
    };
};