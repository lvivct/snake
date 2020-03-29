#include "SnakeHead.h"

SnakeHead::SnakeHead(Coor location, char show_simbol) : SnakeBody(location, show_simbol) { }

void SnakeHead::move(char direction)
{
	location.move(direction);
}
