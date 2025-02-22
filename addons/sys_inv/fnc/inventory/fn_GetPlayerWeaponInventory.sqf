private _allWeaps = allPlayers apply { weapons _x };
private _weaps = [];
private _mags = [];
private _items = [];

{
  private _list = _x;
  {
	  if (!(_x in _weaps)) then {
		  _weaps pushBack _x;
	  };
  } forEach _list; 
} forEach _allWeaps;

{
	_mags append _x;
} forEach (_weaps apply { compatibleMagazines _x});

{
	_items append _x;
} forEach (_weaps apply { compatibleItems _x});

createHashMapFromArray [["Mags", _mags], ["Attachments", _items]];