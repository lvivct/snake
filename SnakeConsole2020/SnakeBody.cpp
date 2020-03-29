#include "SnakeBody.h"

SnakeBody::SnakeBody(Coor location, char show_simbol, SnakeBody* ptr_next)
{
	this->location = location;
	this->show_simbol = show_simbol;
	this->ptr_next = ptr_next;
}
