params [["_logic", objNull, [objNull]],"_units"];

if (typeName _units == "ARRAY") then {
	private _id = ((_units select 0) * -1) -1;
	getMissionLayerEntities _id select 0;
}
else
{
	synchronizedObjects _logic;
};
