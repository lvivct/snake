#include "Field.h"
#include <iostream>

Field::Field(int size = 0)
{
	this->size = size;
	field = new char* [size];
	for (int i = 0; i < size; ++i)
		field[i] = new char[size];
}

Field* Field::operator=(Field& Right)
{
	field = Right.field;
	return this;
}

int Field::get_size()
{
	return size;
}

void Field::update()
{
	for (int i = 0; i < size; ++i)
		for (int j = 0; j < size; ++j)
			field[i][j] = ' ';
}

void Field::show_field()
{
	std::cout << char(218);
	for (int i = 0; i < size; ++i)
		std::cout << char(196);
	std::cout << char(191) << '\n';

	for (int i = 0; i < size; ++i)
	{
		std::cout << char(179);

		for (int j = 0; j < size; ++j)
			std::cout << field[i][j];

		std::cout << char(179) << '\n';
	}

	std::cout << char(192);
	for (int i = 0; i < size; ++i)
		std::cout << char(196);
	std::cout << char(217) << '\n';
}

void Field::add_item(Point* item)
{
	field[item->get_coor().y][item->get_coor().x] = item->get_show_simbol();
}

bool Field::is_clear(Coor coor)
{
	return field[coor.y][coor.x] == ' ';
}

Field::~Field()
{
	for (int i = 0; i < size; ++i)
		delete[] field[i];
	delete[] field;
}
