class CfgFunctions
{
    class MSF_UI
	{
        class Commands
        {
            file = "z\msf\addons\ui\functions\commands";
            class CallInputDialog {};
            class DisplayDeployUAV {};
            class DisplayLogisticsUI {};
            class DisplayVicLoadouts {};
        };
        class Handlers
        {
            file = "z\msf\addons\ui\functions\handlers";
            class OnInputOkClicked {};
            class OnStartPlaceObjectUI {};
            class OnVehicleLoadoutApply {};
            class OnVehicleLoadoutDelete {};
            class OnVehicleLoadoutCreate {};
            class OnVehicleLoadoutLoad {};
            class OnVehicleLoadoutTreeSelChanged {};
            class OnVehicleLoadoutUpdate {};
        };
        class Helpers
        {
            file = "z\msf\addons\ui\functions\helpers";
            class CreateUIKeyboardHandler {};
        };
        class UI
        {
            file = "z\msf\addons\ui\functions\ui";
            class FormatVehicleLoadoutDisplay {};
        };
    };
};