#define INIT_CODE "[(_this select 0), ['Convert to Supply Depot', {[_this select 0] call MSF_Logi_fnc_InitializeSupplyDepot; (_this select 0) setVariable ['MSF_IsSupplyDepot', true];}, nil, 1.5, true, true, '', '!(_target getVariable [""MSF_IsSupplyDepot"", false])']] remoteExec ['addAction', 0, (_this select 0)];";

class Land_RepairDepot_01_base_F;
class Land_RepairDepot_01_green_F : Land_RepairDepot_01_base_F
{
    class EventHandlers
    {
        class SupplyInit
        {
            init = INIT_CODE
            //"[_this select 0, ['Convert to Supply Depot', '[_this select 0] call MSF_Logi_fnc_InitializeSupplyDepot;']] remoteExec ['addAction', 0, (_this select 0)];";
        };
    };
};

class Land_RepairDepot_01_tan_F : Land_RepairDepot_01_base_F
{
    class EventHandlers
    {
        class SupplyInit
        {
            init = INIT_CODE
        };
    };
};

class MSF_SupplyDepot : Land_RepairDepot_01_green_F
{
    displayName = "Supply Depot";
    editorCategory = "MSF";
    editorSubcategory = "MSF_Logistics";
    class EventHandlers
    {
        class SupplyInit
        {
            init = "[_this select 0] call MSF_Logi_fnc_InitializeSupplyDepot";
        };
    };
};