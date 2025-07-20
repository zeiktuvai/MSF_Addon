class CfgFunctions
{
    class MSF_UI
	{
        class Init
        {
            file = "z\msf\addons\ui\functions\app";
            class InitUI {};
        };
        class Commands
        {
            file = "z\msf\addons\ui\functions\commands";
            class DisplayDeployUAV {};
            class DisplayLogiMain {};
            class DisplayLogiSupport {};
            class DisplaySupplyMenu {};
            class DisplayVicLoadouts {};
        };
        class Handlers
        {
            file = "z\msf\addons\ui\functions\handlers";
            class OnSupplySelChanged {};
        };
        class Handlers_VehicleLoadout
        {
            file = "z\msf\addons\ui\functions\handlers\vicLoadout";
            class OnVehicleLoadoutApply {};
            class OnVehicleLoadoutDelete {};
            class OnVehicleLoadoutCreate {};
            class OnVehicleLoadoutLoad {};
            class OnVehicleLoadoutShare {};
            class OnVehicleLoadoutTreeSelChanged {};
            class OnVehicleLoadoutUpdate {};
        };
        class Handlers_LogiSupport
        {
            file = "z\msf\addons\ui\functions\handlers\logiSupport";
            class OnClearMarkersClicked {};
            class OnSupportMapLoad {};
            class OnSupportSelChanged {};
        };
        class Helpers
        {
            file = "z\msf\addons\ui\functions\helpers";
            class CreateLoadout {};
            class CreateUIKeyboardHandler {};
            class GetMSFIDD {};
            class GetSideColor {};
            class SetTabletStats {};
            class StartPlaceObjectUI {};
        };
        class UI
        {
            file = "z\msf\addons\ui\functions\ui";
            class FormatVehicleLoadoutDisplay {};
        };
    };
};
