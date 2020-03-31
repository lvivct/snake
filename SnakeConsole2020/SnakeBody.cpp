#include "SnakeBody.h"

bool SnakeBody::move(char direction, int size)
{
	location = ptr_next->location;
	return false;
}

SnakeBody::SnakeBody(Coor location, char show_simbol, SnakeBody* ptr_next)
	: Point(location, show_simbol), ptr_next(ptr_next) {	}

SnakeBody* SnakeBody::get_ptr_next()
{
	return ptr_next;
}
