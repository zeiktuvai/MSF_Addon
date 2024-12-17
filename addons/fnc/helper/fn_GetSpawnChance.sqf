params [["_probability", 1, [1]]];

_chance = random 100;

_chance > 100 - (_probability * 100);
