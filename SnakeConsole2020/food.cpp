#include "food.h"

food::food(Coor location, char show_simbol) : Point(location, show_simbol) { }

void food::change_location()
{
	srand(time(0));
	location.x = rand() % 10;
	location.y = rand() % 10;
}
