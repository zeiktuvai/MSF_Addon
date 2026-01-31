class MSF_Admin
{
	idd = 6333;
	
    class ControlsBackground
    {
         #include "\z\msf\addons\ui\cfg\dialogs\assets\MSFTablet.inc"

    };
    class Controls
    {   
        #include "\z\msf\addons\ui\cfg\dialogs\assets\Header.inc"

        class MainGroup : RscControlsGroup
        {
            idc = 102;
            
            x = STR(CENTER_X - 97 * GRID_W);
            y = STR(CENTER_Y - 57 * GRID_H);
            w = STR(50 * GRID_W);
            h = STR(108 * GRID_H);
            class Controls
            {
                class Item_Header: RscText
                {
                    idc = 1002;

                    text = "Players";
                    colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    x = 0;
                    y = 0;
                    w = STR(50 * GRID_W);
                    h = STR(5 * GRID_H);
                };
                class detail_bg: RscText
                {
                    idc = 1202;

                    text = "";
                    colorBackground[] = {0,0,0,0.3};
                    x = 0;
                    y = STR(5 * GRID_H);
                    w = STR(50 * GRID_W);
                    h = STR(102 * GRID_H);
                };
                class Player_List : RscTree
                {
                    idc = 1500;

                    colorLines[] = {1,1,1,1};
                    colorSelectBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
                    multiselectEnabled = 1;
                    x = 0;
                    y = STR(6 * GRID_H);
                    w = STR(50 * GRID_W);
                    h = STR(101 * GRID_H);
                };
            };
        };

        class ButtonGroup : RscControlsGroup
        {
            idc = 102;
            
            x = STR(CENTER_X - 42 * GRID_W);
            y = STR(CENTER_Y - 57 * GRID_H);
            w = STR(50 * GRID_W);
            h = STR(108 * GRID_H);
            class Controls
            {
                class HealSelected : RscButtonMenu
                {
                    idc = 1600;
                    
                    text = "Heal Selected";
                    onButtonClick = "[findDisplay 6333 displayCtrl 1500] call MSF_UI_fnc_OnHealSelected;";
                    x = 0;
                    y = 0;
                    w = STR(40 * GRID_W);
                    h = STR(6 * GRID_H);
                };
                class HealAll : RscButtonMenu
                {
                    idc = 1601;
                    
                    text = "Heal All";
                    onButtonClick = "[] call MSF_UI_fnc_OnHealAllSelected;";
                    x = 0;
                    y = STR(8 * GRID_H);
                    w = STR(40 * GRID_W);
                    h = STR(6 * GRID_H);
                };
                class HealCursor : RscButtonMenu
                {
                    idc = 1602;
                    
                    text = "Heal Cursor Obj";
                    onButtonClick = "closeDialog 0; [] call MSF_UI_fnc_OnHealCursor;";
                    x = 0;
                    y = STR(16 * GRID_H);
                    w = STR(40 * GRID_W);
                    h = STR(6 * GRID_H);
                };
                class RepairVic : RscButtonMenu
                {
                    idc = 1603;
                    
                    text = "Repair Selected Players Vehicle";
                    onButtonClick = "[findDisplay 6333 displayCtrl 1500] call MSF_UI_fnc_OnRepairSelected;";
                    x = 0;
                    y = STR(24 * GRID_H);
                    w = STR(40 * GRID_W);
                    h = STR(12 * GRID_H);
                };
                class DeleteVicCursor : RscButtonMenu
                {
                    idc = 1604;
                    
                    text = "Repair Cursor Obj Vehicle";
                    onButtonClick = "closeDialog 0; [] call MSF_UI_fnc_OnRepairCursor";
                    x = 0;
                    y = STR(38 * GRID_H);
                    w = STR(40 * GRID_W);
                    h = STR(12 * GRID_H);
                };
                class RepairVicCursor : RscButtonMenu
                {
                    idc = 1605;
                    
                    text = "Delete Cursor Obj Vehicle";
                    onButtonClick = "closeDialog 0; [] call MSF_UI_fnc_OnDeleteCursor";
                    x = 0;
                    y = STR(52 * GRID_H);
                    w = STR(40 * GRID_W);
                    h = STR(12 * GRID_H);
                };
                class ForceOut : RscButtonMenu
                {
                    idc = 1606;
                    
                    text = "Force Cursor Obj Vic Units Out";
                    onButtonClick = "closeDialog 0; [] call MSF_UI_fnc_OnForceOutCursor";
                    x = 0;
                    y = STR(66 * GRID_H);
                    w = STR(40 * GRID_W);
                    h = STR(12 * GRID_H);
                };
            };
        };
    };
};
