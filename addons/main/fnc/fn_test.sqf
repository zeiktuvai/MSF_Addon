params ['_entity'];
waitUntil {!isNull player}; 
if (isPlayer _entity) then { systemChat player; systemChat str _entity; }