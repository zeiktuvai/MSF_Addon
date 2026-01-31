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
            class DisplayAdminMenu {};
            class DisplayDeployUAV {};
            class DisplayLogiMain {};
            class DisplayLogiMap {};
            class DisplayLogiMarker {};
            class DisplayLogiSupport {};
            class DisplaySupplyMenu {};
            class DisplayVicSelection {};
            class DisplayVicLoadouts {};
        };
        class Handlers
        {
            file = "z\msf\addons\ui\functions\handlers";
            class OnSupplySelChanged {};
        };
        class Handlers_Admin
        {
            file = "z\msf\addons\ui\functions\handlers\admin";
            class OnDeleteCursor {};
            class OnForceOutCursor {};
            class OnHealAllSelected {};
            class OnHealCursor {};
            class OnHealSelected {};
            class OnRepairCursor {};
            class OnRepairSelected {};
        };
        class Handlers_LogiMarker
        {
            file = "z\msf\addons\ui\functions\handlers\logiMarker";
            class OnLogiMarkerCurSelChanged {};
            class OnLogiMarkerDeleteAll {};
            class OnLogiMarkerDeleteSel {};
            class OnLogiMarkerMapLoad {};
            class OnLogiMarkerSelChanged {};            
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
            class OnSupportSubmitClicked {};
            class OnVechicleSelChanged {};
            class OnVehicleSelect {};
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
