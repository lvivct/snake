#include "food.h"

food::food(Coor location, char show_simbol) : Point(location, show_simbol) { }

void food::change_location(int size)
{
	srand(time(0));
	location.x = rand() % size;
	location.y = rand() % size;
}
