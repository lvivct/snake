#pragma once
#include "SnakeBody.h"
#include"Point.h"

class Field
{
	char** field;
	int size;
public:
	Field(int size);

	Field* operator=(Field& Right);

	int get_size();
	void update();
	void show_field();
	void add_item(Point* item);

	~Field();
};

