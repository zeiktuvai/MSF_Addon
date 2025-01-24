
required data:
    - Intel Item Name 
    - Location Type
    - Allowed Target Faction
    - Marker Information
        - Position <<
        - Color
        - Type
    - (Optional)CfgNotifications notification
        - Pre-defined notification name
        - Text
	- (Optional)Diary entry information for creation
        - Title <
        - Text
        - Icon
    - (Optional)Task information for creation
        - Side
        - Title <
        - Description
        - Position <<


```

keys _intels select { _intels get _x select 1 == east };
```