params [["_type", "", [""]]];

private _item = localNamespace getVariable "MSF_Local" get "Logi_Items" get _type;
if (_item select 1 == 1) then {
	localNamespace getVariable "MSF_Local" get "Logi_Items" deleteAt _type;	
}
else
{
	localNamespace getVariable "MSF_Local" get "Logi_Items" set [_type, [_item # 0, (_item # 1) - 1]];
};
