class CfgFunctions
{
    class MSF_UI
	{
        class UI
        {
            file = "z\msf\addons\ui\functions";
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
            class OnVehicleLoadoutCreate {};
            class OnVehicleLoadoutLoad {};
            class OnVehicleLoadoutTreeSelChanged {};
        };
        class Helpers
        {
            file = "z\msf\addons\ui\functions\helpers";
            class CreateUIKeyboardHandler {};
        };
    };
};