#include "Coor.h"

void Coor::move(char direction)
{
	switch (direction)
	{
	case 'w':
		y -= 1;
		break;
	case 's':
		y += 1;
		break;
	case 'a':
		x -= 1;
		break;
	case 'd':
		x += 1;
		break;
	default:
		break;
	}
}
