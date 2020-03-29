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
	SnakeBody(Coor location, char show_simbol, SnakeBody* ptr_next = nullptr);
};

