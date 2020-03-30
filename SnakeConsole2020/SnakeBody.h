#pragma once
#include "Point.h"
class SnakeBody : public Point
{
	friend class Field;
protected:
	SnakeBody* ptr_next;
public:
	virtual void move(char direction);
	SnakeBody(Coor location, char show_simbol, SnakeBody* ptr_next = nullptr);
	SnakeBody* get_ptr_next();
};

