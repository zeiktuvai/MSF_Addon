
required data:
    - Intel Item Name 
    - Location Type
    - Target Type ["ThingX", "Civilian", "SoldierWB", "SoldierEB", "SoldierGB"]
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

[Key, [Key, Title, [Target Type], Position, [Marker], [Notification], [Diary], [Task]]]

key = ID
Title = Item title
Target Type = Object types allowed to have this intel item.
    "CIV": Civilian
    "MIL": Military Unit
    "OBJ": Object
Position = Position for marker/task
Marker = Marker information
    ["Class Name", "Color"]
    Or
    [Marker Variable Name]
Notification
    ["Class Name", "Argument"]
Diary
    Description = Diary Content
Tasks
    []