#include "Field.h"
#include <iostream>

Field::Field(int size = 0)
{
	this->size = size;
	field = new char* [size];
	for (int i = 0; i < size; ++i)
		field[i] = new char[size]();
}

Field* Field::operator=(Field& Right)
{
	field = Right.field;
	return this;
}

void Field::update()
{
	for (int i = 0; i < size; ++i)
		for (int j = 0; j < size; ++j)
			field[i][j] = ' ';
}

void Field::show_field()
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
			std::cout << field[i][j] << ' ';
		std::cout << '\n';
	}
}

void Field::add_item(SnakeBody* item)
{
	field[item->location.y][item->location.x] = item->show_simbol;
}

Field::~Field()
{
	for (int i = 0; i < size; ++i)
		delete[] field[i];
	delete[] field;
}
