[SETUP: Viewing this file.](#setup)
# MSF Config Diagrams
```mermaid
classDiagram
Root <|-- Logi_Inventory
Root <|-- UAV_Inventory
namespace MSF {
    class Root["Root Entries"] {
        [bool] IntelEnabled
        [int] IntelLevel
        [Array] FuelHandlerVics
        [?] MSFHandlerID ??
        [HashMap] Logi_Inventory
        [HashMap] UAV_Inventory
        [int] Logi_Points
        [Priority Queue] Logi_Queue
    }
    class Logi_Inventory {
        [String] Key
        [String] Title
        [String] Description
        [String] Icon
        [String] Type
        [bool] isInfinite
    }
    class UAV_Inventory {
        [String] UAV Name,
        [[String] UAV Class Name,
        [int] UAV Count]
    }
}
```
```mermaid
classDiagram
IntelItems <|-- MarkerData
IntelItems <|-- NotificationData
IntelItems <|-- DiaryData
IntelItems <|-- TaskData
namespace MSF_IntelItems {
    class IntelItems {
        [String] Key
        [String] Title
        [Array] AllowedProviders ["CIV","MIL","OBJ"]
        [Array] Location
        [int] RequiredIntelLevel
        [Array] MarkerData
        [Array] NotificationData
        [Array] DiaryData
        [Array] TaskData
        [String] TaskIDToComplete
    }
    class MarkerData {
        [String] Type [Icon or Shape]
        [String] Color
        [Array][Optional] Position
    }
    class NotificationData {
        [String] Type        
        [String] Description
    }
    class DiaryData {
        [String] DiarySubject
        [String] Title
        [String] Description
    }
    class TaskData {
        [String] TaskID
        [String] Title
        [String] Description
        [String] TaskType
        [String] TaskState
    }
}
```
```mermaid
classDiagram
namespace MSF_Local {
    class Root {
        [int] UAV_SpawnTimer
        [Array] Logi_Items
    }
}
```

### Setup
Install this extension.  
[Markdown Preview Mermaid Extention](https://marketplace.visualstudio.com/items?itemName=bierner.markdown-mermaid)  
[Docs](https://mermaid.js.org/syntax/classDiagram.html#defining-relationship)