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

bool Coor::operator==(Coor Right)
{
	return (x == Right.x && y == Right.y);
}
