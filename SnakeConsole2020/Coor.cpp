#include "Coor.h"



bool Coor::operator==(Coor Right)
{
	return (x == Right.x && y == Right.y);
}

Coor Coor::operator()(int Right)
{
	return { Right,Right };
}

bool Coor::in(int size_x, int size_y)
{
	return (size_x > x && x >= 0 && size_y > y && y >= 0);
}
