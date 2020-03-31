#pragma once
#include "Point.h"
class SnakeBody : public Point
{
	friend class Field;
protected:
	SnakeBody* ptr_next;
public:
	SnakeBody(Coor location, char show_simbol, SnakeBody* ptr_next = nullptr);

	virtual bool move(char direction, int size);
	virtual void increase_tail() {}

	SnakeBody* get_ptr_next();
};

