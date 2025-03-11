# MSF Config Diagram
```mermaid
classDiagram
namespace MSF {
    class Root{
        [bool] IntelEnabled
        [int] IntelLevel
        [HashMap] LogiInventory
        [HashMap] UAV_Inventory
    }
    class LogiInventory {

    }
    class UAV_Inventory {
        
    }
}
```