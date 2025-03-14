params [["_vics", [], [[]]]];
	
{
	if (fuel _x < 1) then 
	{ 
		[_x, 1] remoteExec ["setFuel", _x];
	}; 
} forEach _vics;