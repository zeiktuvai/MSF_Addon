class Land_Cargo20_military_green_F;

class MSF_SupplyDepot : Land_Cargo20_military_green_F
{
    displayName = "Supply Depot";
    editorCategory = "MSF";
    editorSubcategory = "MSF_Logistics";
    actionBegin1 = "";
    actionBegin2 = "";
    actionEnd1 = "";
    actionEnd2 = "";
    class EventHandlers
    {
        class SupplyInit
        {
            init = "[_this select 0] call MSF_Logi_fnc_InitializeSupplyDepot";
        };
    };
    class UserActions {};
};