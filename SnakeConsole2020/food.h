#pragma once
#include "Point.h"
#include <cstdlib>
#include <ctime>

class food : public Point
{
public:
	food(Coor location, char show_simbol);

	void change_location();
};

