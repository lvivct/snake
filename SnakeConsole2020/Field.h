#pragma once
#include "SnakeBody.h"
#include"food.h"

class Field
{
	char** field;
	int size;
public:
	Field(int size);

	Field* operator=(Field& Right);

	void update();
	void show_field();
	void add_item(SnakeBody* item);
	void add_item(food* item);

	~Field();
};

