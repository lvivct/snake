#include "SnakeBody.h"

void SnakeBody::move(char direction)
{
	location = ptr_next->location;
}

SnakeBody::SnakeBody(Coor location, char show_simbol, SnakeBody* ptr_next)
	:location(location), show_simbol(show_simbol), ptr_next(ptr_next) {	}

SnakeBody* SnakeBody::get_ptr_next()
{
	return ptr_next;
}
