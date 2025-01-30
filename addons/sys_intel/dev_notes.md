
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

[Key, [Key, Title, [Target Type], Position, [Marker], [Notification], Diary, [Task]]]
["Key",["Key","Title",["CIV","MIL","OBJ"],[0,0,0],1,["mil_dot","Color1_FD_F"],["MapUpdate","Map updated"],"Reported Location of Checkpoint",[]]]

key = ID
Title = Item title
Target Type = Object types allowed to have this intel item.
    "CIV": Civilian
    "MIL": Military Unit
    "OBJ": Object
Position = Position for marker/task
Required Intel Level: Num 1-4
Marker = Marker information
    ["Class Name", "Color"]
    Or
    [Marker Variable Name]
Notification
    ["Class Name", "Argument"]
Diary (optional)
    Description = Diary Content
Tasks (optional)
    [_taskID, _taskTitle, _taskDesc, _taskType, Task State]