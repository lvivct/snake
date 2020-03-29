#pragma once
#include "SnakeBody.h"
#include "Coor.h"

class SnakeHead : public SnakeBody
{
public:
	SnakeHead(Coor location, char show_simbol);
	void move(char direction) override;
};

