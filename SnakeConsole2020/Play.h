#pragma once
#include "SnakeHead.h"
#include "Field.h"
#include "Coor.h"

class Play
{
	SnakeBody *snake;
	Field *main_field;

public:
	Play(char head_simbol, int size);
	void start();
};

