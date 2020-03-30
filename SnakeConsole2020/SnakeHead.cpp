#include "SnakeHead.h"

SnakeHead::SnakeHead(Coor location, char show_simbol) : SnakeBody(location, show_simbol, this) { }

void SnakeHead::increase_tail()
{
	ptr_next = new SnakeBody(
		ptr_next->get_coor(),ptr_next->get_show_simbol(), ptr_next
		);
}

void SnakeHead::move(char direction)
{
	SnakeBody* ptr = ptr_next;

	if (this != ptr)	
		ptr = ptr->get_ptr_next();
	Point::move(direction);
}
