#include "Point.h"

Point::Point(Coor location, char show_simbol) : location(location), show_simbol(show_simbol){	}

void Point::move(char direction)
{
	switch (direction)
	{
	case 'w':
		location.y -= 1;
		break;
	case 's':
		location.y += 1;
		break;
	case 'a':
		location.x -= 1;
		break;
	case 'd':
		location.x += 1;
		break;
	default:
		break;
	}
}

Coor Point::get_coor()
{
	return location;
}

char Point::get_show_simbol()
{
	return show_simbol;
}
