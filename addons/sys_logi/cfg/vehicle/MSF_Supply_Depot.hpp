class B_Slingload_01_Repair_F;

class MSF_SupplyDepot : B_Slingload_01_Repair_F
{
    displayName = "Supply Crate";
    author = "Zeik_Tuvai";
    editorCategory = "MSF";
    editorSubcategory = "MSF_Logistics";
    ace_cargo_hasCargo = 0;
    maximumLoad = 0;
    transportMaxBackpacks = 0;
    transportMaxMagazines = 0;
    transportMaxWeapons = 0;
    transportMaxItems = 0;
    transportRepair = 0;
    disableInventory = 1;
    class TransportItems {};
    class UserActions {
        class RetrieveSupplies {
            displayName = "Retrieve Supplies";
            displayNameDefault = "<img image='a3\ui_f\data\map\vehicleicons\iconbackpack_ca.paa'/>";
            priority = 6;
            radius = 10;
            position = "camera";
            showWindow = 1;
            hideOnUse = 1;
            onlyForPlayer = 1;
            shortcut = "";
            condition = "alive this";
            statement = "['LogiSourceTruck', false] call MSF_fnc_SetLocalValue; [[false] call MSF_Logi_fnc_GetLogiInventory, (missionNamespace getVariable 'MSF') getOrDefault ['Logi_Points', 0, true]] call MSF_UI_fnc_DisplayLogisticsUI;";
        };
    };
};
