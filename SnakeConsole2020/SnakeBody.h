#pragma once
#include "Coor.h"
class SnakeBody
{
	friend class Field;
protected:
	Coor location;
	char show_simbol;
	SnakeBody* ptr_next;

public:
	virtual void move(char direction);
	SnakeBody(Coor location, char show_simbol, SnakeBody* ptr_next = nullptr);
};

