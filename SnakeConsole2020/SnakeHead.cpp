#include "SnakeHead.h"

SnakeHead::SnakeHead(Coor location, char show_simbol) : SnakeBody(location, show_simbol, this) { }

void SnakeHead::move(char direction)
{
	SnakeBody* ptr = ptr_next;

	if (this != ptr)	
		ptr = ptr->get_ptr_next();
	location.move(direction);
}
