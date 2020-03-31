#include "SnakeHead.h"

SnakeHead::SnakeHead(Coor location, char show_simbol) : SnakeBody(location, show_simbol, this) { }

void SnakeHead::increase_tail()
{
	ptr_next = new SnakeBody(
		ptr_next->get_coor(),ptr_next->get_show_simbol(), ptr_next
		);
}

bool SnakeHead::move(char direction, int size)
{
	Point::move(direction);
	if(location.in(size, size))
		return false;
	else
		return true;
}
