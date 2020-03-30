#pragma once
#include "Coor.h"
class SnakeBody
{
	friend class Field;
protected:
	char show_simbol;
	SnakeBody* ptr_next;

public:
	Coor location;
	virtual void move(char direction);
	SnakeBody(Coor location, char show_simbol, SnakeBody* ptr_next = nullptr);
	SnakeBody* get_ptr_next();
};

