#pragma once
#include"Coor.h"
#include <cstdlib>
#include <ctime>

class food
{
public:

	Coor location;
	char show_simbol;

	food(Coor location, char show_simbol);

	void change_location();
};

