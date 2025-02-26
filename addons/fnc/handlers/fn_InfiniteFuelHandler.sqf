params [["_vics", [], [[]]]];
	
{
	if (fuel _x < 1) then 
	{ 
		_x setFuel 1; 
	}; 
} forEach _vics;