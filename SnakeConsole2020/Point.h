#pragma once
#include "Coor.h"

class Point
{
protected:
	Coor location;
	char show_simbol;
public:
	Point(Coor location, char show_simbol);

	void move(char direction);

	Coor get_coor();
	char get_show_simbol();
};

